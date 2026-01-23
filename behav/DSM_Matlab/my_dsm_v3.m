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
% gain of filter 
cic_gain = 1/(Nsinc^3);

% alternativ CIC Decimator
CICFilter = dsp.CICDecimator( Nsinc, 1, 3);

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
%% Filter analysis
Hsinc3 = dsp.FIRFilter('Numerator',hsinc3);
HBF1 = dsp.FIRFilter('Numerator',HBF1num);
HBF2 = dsp.FIRFilter('Numerator',HBF2num);
view = fvtool(Hsinc3, Hdcf, HBF1, HBF2);
legend(view,'Sinc3', 'DCF', 'HBF1', 'HBF2')
%% simulink mdl sim (with decimation)

mdl = 'dsm_l2_sim_deci_v2';    % 2. Order + decimation
open_system(mdl);

load_system(mdl);
simOut = sim(mdl, 'Solver', 'FixedStepDiscrete', ...
    'StopTime', num2str(max(t)), ...
    'SaveState','on','StateSaveName','xout',...
    'SaveOutput','on','OutputSaveName','yout',...
    'SaveFormat', 'Dataset', 'LoadExternalInput', 'off');

ysim2 = simOut.y;
vsim2 = simOut.v;
ydsim2 = simOut.y1; % signal right after sinc3
%% time domain plot sim 2
u_down = downsample(u,M);
u_len = length(u_down);
v2_len = length(vsim2);
fig3 = figure(3);
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

%% Spectral analysis Windowed sim2
v2_len = length(vsim2);
% SNR of sim output
sq = abs(fft(vsim2));
% Remove redundant half of spectrum and normalize to FS
f = (0:v2_len/2-1)/v2_len;  % frequency vector
sq_hlf = sq(1:end/2)/(v2_len/2);
sqdBFS = 20*log10(sq_hlf);
% log10(0) -> -inf/inf correction
sqdBFS(isinf(sqdBFS)) = -150;
sigbin = 1 + cycles;
noise = [sq_hlf(1:sigbin-1)', sq_hlf(sigbin+1:end)'];
snr = 10*log10(sq_hlf(sigbin)^2/sum(noise.^2));
fprintf('SNR sim2: %d\n', snr);

specHW2 = fft((vsim2').*ds_hann(v2_len))/(v2_len/4);

% Plot
fig4 = figure(4);
plot(f, dbv(specHW2(1:end/2)));
%axis([0 0.06 -150 0]);
grid on;
ylabel('dBFS');
xlabel('f/fs');
title ('Windowed Spectral analysis')
legend('spectrum with decimation')
%%
% CIC Sinc3 filter design
Hsinc3 = dsp.FIRFilter('Numerator',hsinc3);
CICFilter = dsp.CICDecimator( Nsinc, 1, 3);
fvtool(Hsinc3, CICFilter)
%% CIC Sinc3
frame_l = length(u);
%mdl = 'dsm_l2_sim_deci_cic';    % 2. Order + decimation
mdl = 'dsm_l2_sim_deci_cic_HDL';
open_system(mdl);

load_system(mdl);
simOut = sim(mdl, 'Solver', 'FixedStepDiscrete', ...
    'StopTime', num2str(max(t)), ...
    'SaveState','on','StateSaveName','xout',...
    'SaveOutput','on','OutputSaveName','yout',...
    'SaveFormat', 'Dataset', 'LoadExternalInput', 'off');

vsim3 = simOut.v;
y1sim3 = simOut.y1;
y2sim3 = simOut.y2;

%% time domain plot sim 2
fig5 = figure(5);
temp_ref = 0:(length(ydsim2)-1);
temp_cic_v = 0:(length(vsim3)-1);
temp_cic = 0:(length(y2sim3)-1);
%stairs(temp_ref, ydsim2', 'r--')
hold on;
%stairs(temp_cic, y2sim3, 'b')
stairs(temp_cic_v, vsim3, 'g')
grid();

%% plot with hdl decimator
vsim3_len = length(vsim3);
fig6 = figure(6);
temp_cic_v = 0:(length(vsim3)-1);
plot(temp_cic_v, vsim3, 'b')
axis([0 vsim3_len -1.2 1.2])
grid();

% der gain nach den cic ist der struktur selbst zu schulden!
% warum sind es nur 64 werte nach dem cic decimator und nicht 8192?
% -> fir sinc decimiert nicht! 
% ich kann ein sinc nicht einfach als fir bauen -> NEIN
% wie bekommt man verilog in xscham?

% neue aufgaben
% SNR neu berechnen bei allen
% frequenzsprecturm erstellen von allen
% alle zusammen plotten
% generell code aufreumen
% code genereien