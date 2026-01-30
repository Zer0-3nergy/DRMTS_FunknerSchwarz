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

%% simulink mdl sim (with ideal decimation)

mdl = 'dsm_l2_sim_deci_v2';    % 2. Order + decimation
%open_system(mdl);

load_system(mdl);
simOut = sim(mdl, 'Solver', 'FixedStepDiscrete', ...
    'StopTime', num2str(max(t)), ...
    'SaveState','on','StateSaveName','xout',...
    'SaveOutput','on','OutputSaveName','yout',...
    'SaveFormat', 'Dataset', 'LoadExternalInput', 'off');

vsim2 = simOut.v;
ysim2 = simOut.y;
ydsim2 = simOut.y1; % signal right after sinc3

% time domain plot sim 2
u_down = downsample(u,M);
u_len = length(u_down);
v2_len = length(vsim2);

fig1 = figure(1);
ts_u = 0:(u_len-1);
ts_v = 0:(v2_len-1);
stairs(ts_u, u_down(ts_u+1));
hold on;
stairs(ts_v, vsim2(ts_v+1));
hold off;
axis([0 u_len -1.2 1.2])
%xlim([0 100]);
legend('u downsampled', 'vsim');
grid();

%% simulink mdl sim (with HDL decimation)
%mdl = 'dsm_l2_sim_deci_cic';    % 2. Order + decimation
mdl = 'dsm_l2_sim_deci_cic_HDL';
open_system(mdl);

load_system(mdl);
simOut = sim(mdl, 'Solver', 'FixedStepDiscrete', ...
    'StopTime', num2str(max(t)), ...
    'SaveState','on','StateSaveName','xout',...
    'SaveOutput','on','OutputSaveName','yout',...
    'SaveFormat', 'Dataset', 'LoadExternalInput', 'off');

vsim3 = simOut.v;   % output is "zero padded"
y1sim3 = simOut.y1; % valid signal
y2sim3 = simOut.y2; % easy stairs plot with same lenght as input

% removed zeros with valid signal
vsim3_dec = vsim3(y1sim3);

% qick plot with hdl decimator
plot_len3 = length(y2sim3);

fig2 = figure(2);
temp_cic_y2 = 0:(length(y2sim3)-1);
plot(temp_cic_y2, y2sim3, 'b')
axis([0 plot_len3 -1.2 1.2])
grid();
%% time domain plot with all
u_down = downsample(u,M);
u_len = length(u_down);
v2_len = length(vsim2);
v3_len = length(vsim3_dec);

fig3 = figure(3);
ts_u = 0:(u_len-1);
ts_v = 0:(v2_len-1);
ts_v_HDL = 0:(v3_len-1);
plot(ts_u, u_down(ts_u+1));
hold on;
plot(ts_v, vsim2(ts_v+1), '-x');
plot(ts_v_HDL, vsim3_dec(ts_v_HDL+1), '-+');
hold off;
axis([0 u_len -1.2 1.2])
%xlim([0 100]);
legend('u downsampled', 'vsim', 'vsim HDL');
grid();
%% spectral analysis and snr
