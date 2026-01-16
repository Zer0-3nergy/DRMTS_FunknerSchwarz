% clear all
clc;
clear;
close all;
%% calibration for all sim
L = 2;                  % Order of modulator
form = 'CIFB';          % Cascade of integrator feedback
fs = 1e6;               % Sampling frequency 
M = 512;                % OSR
res = 16;               % og value = 16
N = res*M;              % Simulation length (output samples), FFT points
fB = fs/2/M;            % Bandwidth
cycles = 3;             % Number of sinusoids
fx = cycles * fs/N;     % Test tone
A = 0.8;                % Signal amplitude
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


%% simulink mdl sim (no decimation)
mdl = 'dsm_l2_sim_v2';    % 2. Order
%open_system(mdl);
load_system(mdl);
simOut = sim(mdl, 'Solver', 'FixedStepDiscrete', ...
    'StopTime', num2str(max(t)), ...
    'SaveState','on','StateSaveName','xout',...
    'SaveOutput','on','OutputSaveName','yout',...
    'SaveFormat', 'Dataset', 'LoadExternalInput', 'off');

ysim = simOut.y;
vsim = simOut.v;

%% time domain plot
fig1 = figure(1);
tsamples = 0:N/2;
stairs(tsamples, u(tsamples+1));
hold on;
stairs(tsamples, vsim(tsamples+1));
stairs(tsamples, ysim(tsamples+1));
hold off;
axis([0 N/2 -1.2 1.2])
%xlim([0 100]);
legend('u','ysim', 'vsim');
grid();

%% Spectral analysis Windowed
% SNR of sim output
sq = abs(fft(vsim));

% Remove redundant half of spectrum and normalize to FS
f = (0:N/2-1)/N;  % frequency vector
z = exp(2i*pi*f);
sq_hlf = sq(1:end/2)/(N/2);
sqdBFS = 20*log10(sq_hlf);

% log10(0) -> -inf/inf correction
sqdBFS(isinf(sqdBFS)) = -150;

sigbin = 1 + cycles;
noise = [sq_hlf(1:sigbin-1)', sq_hlf(sigbin+1:end)'];
snr = 10*log10(sq_hlf(sigbin)^2/sum(noise.^2));
fprintf('SNR sim1: %d\n', snr);

specHW = fft((vsim').*ds_hann(N))/(N/4);

% Plot
fig2 = figure(2);
plot(f, dbv(specHW(1:end/2)));
axis([0 0.06 -150 0]);
grid on;
ylabel('dBFS');
xlabel('f/fs');
title ('Windowed Spectral analysis')

%% Decimation filter
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
%% Filter analysis
Hsinc3 = dsp.FIRFilter('Numerator',hsinc3);
HBF1 = dsp.FIRFilter('Numerator',HBF1num);
HBF2 = dsp.FIRFilter('Numerator',HBF2num);
view = fvtool(Hsinc3, Hdcf, HBF1, HBF2);
legend(view,'Sinc3', 'DCF', 'HBF1', 'HBF2')
%% simulink mdl sim (with decimation)

mdl = 'dsm_l2_sim_deci';    % 2. Order + decimation
%open_system(mdl);

load_system(mdl);
simOut = sim(mdl, 'Solver', 'FixedStepDiscrete', ...
    'StopTime', num2str(max(t)), ...
    'SaveState','on','StateSaveName','xout',...
    'SaveOutput','on','OutputSaveName','yout',...
    'SaveFormat', 'Dataset', 'LoadExternalInput', 'off');

ysim2 = simOut.y;
vsim2 = simOut.v;

%% time domain plot sim 2
fig3 = figure(3);
tsamples = 0:N/2;
stairs(tsamples, u(tsamples+1));
hold on;
stairs(tsamples, vsim2(tsamples+1));
hold off;
axis([0 N/2 -1.2 1.2])
%xlim([0 100]);
legend('u', 'vsim');
grid();

%% Spectral analysis Windowed sim2
% SNR of sim output
sq = abs(fft(vsim2));
% Remove redundant half of spectrum and normalize to FS
f = (0:N/2-1)/N;  % frequency vector
z = exp(2i*pi*f);
sq_hlf = sq(1:end/2)/(N/2);
sqdBFS = 20*log10(sq_hlf);
% log10(0) -> -inf/inf correction
sqdBFS(isinf(sqdBFS)) = -150;
sigbin = 1 + cycles;
noise = [sq_hlf(1:sigbin-1)', sq_hlf(sigbin+1:end)'];
snr = 10*log10(sq_hlf(sigbin)^2/sum(noise.^2));
fprintf('SNR sim2: %d\n', snr);

specHW = fft((vsim').*ds_hann(N))/(N/4);
specHW2 = fft((vsim2').*ds_hann(N))/(N/4);

% Plot
fig4 = figure(4);
plot(f, dbv(specHW(1:end/2)));
hold on;
plot(f, dbv(specHW2(1:end/2)));
hold off;
axis([0 0.06 -150 0]);
grid on;
ylabel('dBFS');
xlabel('f/fs');
title ('Windowed Spectral analysis')
legend('spectrum without decimation', 'spectrum with decimation')


