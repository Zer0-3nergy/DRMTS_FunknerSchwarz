% clear all
clc;
clear;
close all;
% calibration for all sim
L = 2;                  % Order of modulator
form = 'CIFB';          % Cascade of integrator feedback
fs = 1e6;               % Sampling frequency 
M = 512;                % OSR
res = 256;              % how many output samples
N = res*M;              % Simulation length (output samples), FFT points
fB = fs/2/M;            % Bandwidth
cycles = 3;             % Number of sinusoids
fx = cycles * fs/N;     % Test tone
A = 0.8;                % Signal amplitude, was 0.8
Ts  = 1/fs;             % time step

% test Signal
t = 0:Ts:(N-1)/fs;      
u = A * sin(2 * pi * fx/fs * (0:N-1));
%u = A * sin(2 * pi * 200 .*t); % time signal

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

mdl = 'dsm_l2_sim_deci_ideal_v2';    % 2. Order + decimation
open_system(mdl);

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
u_down = downsample(u, M);
fig1 = figure(1);
stairs(u_down, 'r--');
hold on;
stairs(vsim2, 'b');
hold off;
axis([0 res -1.2 1.2])
%xlim([0 100]);
legend('u downsampled', 'vsim (Ideal)');
grid(); xlabel('Sample index'); ylabel('Amplitude');
title('Plot: Reference vs. Ideal Sim.')

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
y1valid = simOut.y1; % valid signal

% removed zeros with valid signal
vsim3_dec = double(vsim3(y1valid));

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
%% time domain plot with all
u_down = downsample(u, M);
fig3 = figure(3);
stairs(u_down,'r--');
hold on;
stairs(vsim2, 'b');
stairs(vsim3_dec, 'g');
hold off;
axis([0 res -1.2 1.2])
%xlim([0 100]);
legend('u downsampled', 'vsim (Ideal)', 'vsim (HDL)');
grid(); xlabel('Sample index'); ylabel('Amplitude');
title('Plot: Reference vs. Ideal Sim. vs. HDL Sim.')


%% frequency spectrum + SNR
u_ref = downsample(u',M);
f_out = fs/M; % out sample freq.
f_peak = fx/f_out; % freq. of signal u

Nr = length(u_ref); N2 = length(vsim2); N3 = length(vsim3_dec);
N_min = min([Nr, N2, N3]);

% bring all signals to same lenght!
ref_sig = u_ref(1:N_min);
sig1_ideal = vsim2(1:N_min);
sig2_hdl = vsim3_dec(1:N_min);

Nfft = 1024;

w = hamming(N_min); 

ufft = fft(ref_sig.*w,Nfft); 
vfft2 = fft(sig1_ideal.*w,Nfft); 
vfft3 = fft(sig2_hdl.*w,Nfft);

u_half = ufft(1:Nfft/2); 
v2_half = vfft2(1:Nfft/2); 
v3_half = vfft3(1:Nfft/2);

u_dB = mag2db(abs(u_half)); 
v2_dB = mag2db(abs(v2_half)); 
v3_dB = mag2db(abs(v3_half));

f = (0:Nfft/2-1)/Nfft;

snr_hdl2 = snr(vsim2);
snr_hdl3 = snr(vsim3_dec);

% plot
figure();
plot(f,u_dB, 'r--');
hold on;
plot(f,v2_dB, 'b','LineWidth',1.5);
plot(f,v3_dB, 'g','LineWidth',1.5);
hold off;
grid();
ylabel('dBFS'); xlabel('f/fs');
%xlim([0 50])
title('Frequency Sprectrum (Windowed):');
legend('Input Signal (reference, downsampeled)', ...
    sprintf('ΣΔ Modulator (Simulink), SNR = %.2f dB',snr_hdl2), ...
    sprintf('ΣΔ Modulator (Simulink, HDL), SNR = %.2f dB', snr_hdl3))
