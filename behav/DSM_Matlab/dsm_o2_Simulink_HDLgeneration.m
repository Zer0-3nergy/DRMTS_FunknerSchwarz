% clear all
clc;
clear;
close all;
% calibration for all sim
L = 2;                  % Order of modulator
form = 'CIFB';          % Cascade of integrator feedback
fs = 1e6;               % Sampling frequency 
M = 512;                % OSR
res = 128;              % how many output samples
N = res*M;              % Simulation length (output samples), FFT points
fB = fs/2/M;            % Bandwidth
cycles = 3;             % Number of sinusoids
fx = cycles * fs/N;     % Test tone
A = 0.8;                % Signal amplitude, was 0.8
Ts  = 1/fs;             % time step

% test Signal
t = 0:Ts:(N-1)/fs;      
u = A * sin(2 * pi * fx/fs * (0:N-1));

% Design NTF
H = synthesizeNTF(L, M);

% Realize DSM
[a, g, b, c] = realizeNTF(H, form);
b(2:end) = 0;
ABCD = stuffABCD(a, g, b, c, form);
[ABCDs, umax] = scaleABCD(ABCD);
[a, g, b, c] = mapABCD(ABCDs, form);
a1 = a(1);
a2 = a(2);
b1 = b(1);
c1 = c(1);
c2 = c(2);

% Decimation filter
% x_sine -> SDM -> v -> SINC3 -> DCF -> HBF1 -> HBF2 -> I2C_out

% SINC3: CIC Filter Approximation
% -> real implementation needs a CIC Decimation filter!!
Nsinc = 128;
h1 = zeros(1, Nsinc);
h1(1:Nsinc) = 1/Nsinc;
hsinc1 = ones(1, Nsinc)*1/Nsinc;
hsinc2 = conv(hsinc1, hsinc1);
hsinc3 = conv(hsinc1, hsinc2);
fprintf('SINC3 Order: %d\n', length(hsinc3));

% Droop correction filter (DCF)
DCF = fdesign.decimator(Nsinc, 'ciccomp', 1, 3, 'n,fc,ap,ast', 12, 0.45, 0.05, 60);
% Droop Corr Filter Obj
Hdcf = design(DCF, 'equiripple', 'SystemObject', true);
DCFnum = Hdcf.Numerator;
fprintf('DCF Order: %d\n', length(DCFnum));

% Half-band filter 1 (HBF1)
FsHBF1 = fs/Nsinc;
HBF1taps = 26;
HBF1num = firhalfband(HBF1taps, 0.25);
fprintf('HBF1 Order: %d\n', length(HBF1num));

% Half-band filter 2 (HBF2)
FsHBF2 = FsHBF1/2;
HBF2taps = 50;
HBF2num = firhalfband(HBF2taps, 0.25);
fprintf('HBF2 Order: %d\n', length(HBF2num));

%% simulink mdl sim (with HDL decimation)
%mdl = 'dsm_l2_sim_deci_cic';    % 2. Order + decimation
mdl = 'dsm_l2_sim_deci_cic_HDLgeneration';
open_system(mdl);

load_system(mdl);
simOut = sim(mdl, 'Solver', 'FixedStepDiscrete', ...
    'StopTime', num2str(max(t)), ...
    'SaveState','on','StateSaveName','xout',...
    'SaveOutput','on','OutputSaveName','yout',...
    'SaveFormat', 'Dataset', 'LoadExternalInput', 'off');

vsim3 = simOut.v;   % output is "zero padded"
y1valid = simOut.y1; % valid signal

% removed zeros with valid signal
vsim3_dec = vsim3(y1valid);

u_down = downsample(u, M);
fig2 = figure(2);
stairs(u_down, 'r--');
hold on;
stairs(vsim3_dec,'b');
hold off;
legend('u downsampled', 'vsim (HDL)');
axis([0 res -1.2 1.2])
grid(); xlabel('Sample index'); ylabel('Amplitude');
title('Plot: Reference vs. HDL Sim.')

%% hdl generation configuration
% need to do this once and then save model
% use codeadvisor to check settings, make sure the subsystem is used!
mdl = 'dsm_l2_sim_deci_cic_HDLgeneration';
load_system(mdl)
set_param(mdl, 'LoadExternalInput', 'off');
set_param(mdl, 'ExternalInput', '[]');
set_param(mdl, 'SimulationCommand', 'update');

% check setting
get_param(mdl, 'LoadExternalInput')
get_param(mdl, 'ExternalInput')

