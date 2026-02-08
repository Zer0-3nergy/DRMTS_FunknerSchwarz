%% Analysis and Design of SCMOD2
clc;
clear;
close all;

% Calibration of test system
L = 2;                % Order of modulator
form = 'CIFB';        % Cascade of integrator feedback
fs = 1e6;             % Sampling frequency 
M = 512;              % OSR
res = 16;              % og value = 16
N = res*M;            % Simulation length (output samples), FFT points
fB = fs/2/M;          % Bandwidth
cycles = 3;           % Number of sinusoids
fx = cycles * fs/N;   % Test tone
A = 0.8;              % Signal amplitude
Ts  = 1/fs;             % time step

t = 0:Ts:(N-1)/fs;
u = A * sin(2 * pi * fx/fs * (0:N-1));

% Design NTF
H = synthesizeNTF(L, M)


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

%% Simulate DSM with delsig toolbox
[v, xn, xmax, y] = simulateDSM(u, ABCD);

%% Simulink Simulation
%mdl = 'dsm_l1_sim';    % 1. Order
mdl = 'dsm_l2_sim';    % 2. Order
open_system(mdl);

sigIn.time = t';
sigIn.signals(1).values = u';
sigIn.signals(1).dimensions = 1;

simOut = sim(mdl, 'Solver', 'FixedStepDiscrete', ...
    'StopTime', num2str(max(t)), ...
    'SaveState','on','StateSaveName','xout',...
    'SaveOutput','on','OutputSaveName','yout',...
    'SaveFormat', 'Dataset');


% Quantizer gains
ysim = simOut.yout.get('y').Values.Data';
vsim = simOut.yout.get('v').Values.Data';
ksim = (vsim*ysim')/(ysim*ysim');

v = vsim;
% Time-domain plot of DSM with delsig toolbox
fig3 = figure(3);
tsamples = 0:N/2;
stairs(tsamples, u(tsamples+1));
hold on;
stairs(tsamples, v(tsamples+1));
stairs(tsamples, ysim(tsamples+1));
hold off;
axis([0 N/2 -1.2 1.2])
%xlim([0 100]);
legend('u','ysim', 'vsim');
grid();

%% Spectral analysis cmp. lecture
sq = abs(fft(v));
% Remove redundant half of spectrum and normalize to FS
f = (0:N/2-1)/N;  % frequency vector
z = exp(2i*pi*f);

sq_hlf = sq(1:end/2)/(N/2);
sqdBFS = 20*log10(sq_hlf);

% log10(0) -> -inf/inf correction
sqdBFS(isinf(sqdBFS)) = -150;

% Calculate SNR
sigbin = 1 + cycles;
noise = [sq_hlf(1:sigbin-1), sq_hlf(sigbin+1:end)];
snr = 10*log10(sq_hlf(sigbin)^2/sum(noise.^2))

% Generate the magnitude plot with annotation
fig4 = figure(4);
set(gca, 'fontsize', 14);
plot(f, sqdBFS);
axis([0 0.06 -150 0]);
xlabel('Frequency f/fs')
ylabel('DFT Magnitude in dBFS')
grid;

%% Spectral analysis, delsig toolbox

% Normalize magnitudes to full-scale (FS=nLev-1=1) 
% sqFS = sq/(N/2);
% snr = calculateSNR(sqFS(1:fB), fx)

% fig5 = figure(5);
% plot(f, dbv(sqFS(1:end/2)));
% axis([0 0.06 -150 0]);
% grid on;
% ylabel('dBFS');
% xlabel('f/fs')


%% Windowed plot
specHW = fft(v.*ds_hann(N))/(N/4);

fig6 = figure(6);
plot(f, dbv(specHW(1:end/2)));
axis([0 0.06 -150 0]);
grid on;
ylabel('dBFS');
xlabel('f/fs');

%% Decimation filter
% Taking signal v as input which is output of SDM.
% x_sine -> SDM -> v -> SINC3 -> DCF -> HBF1 -> HBF2 -> I2C_out
% Assume fB = 20 kHz, fx = 20 kHz
% 120 kS/s at output

% SINC3: CIC (Cascaded Integrator-Comb) Sinc³-Filter
Nsinc = 128; % downsampling ratio, was 64
h1 = zeros(1, Nsinc);
h1(1:Nsinc) = 1/Nsinc;
hsinc1 = ones(1, Nsinc)*1/Nsinc;
hsinc2 = conv(hsinc1, hsinc1);
hsinc3 = conv(hsinc1, hsinc2); 
% -> bau um al cic struktur
Hsinc3 = dsp.FIRFilter('Numerator',hsinc3);

% der sinc3 ist ein cic decimator mit den parametern: downrate = 128, delay = 1, oder = 3
% this not working
cicDecim = dsp.CICDecimator(Nsinc,1,3);
[cicd_num, cicd_den] = tf(cicDecim);

% Filter SDM output
%Sinc3outOrg = conv(hsinc3, v);
%Sinc3out = downsample(Sinc3outOrg, Nsinc);

% Droop correction filter (DCF)
DCF = fdesign.decimator(Nsinc, 'ciccomp', 1, 3, 'n,fc,ap,ast', 12, 0.45, 0.05, 60);
% Droop Corr Filter Obj
Hdcf = design(DCF, 'equiripple', 'SystemObject', true);
DCFnum = Hdcf.Numerator;
[DCFfreq, w3] = freqz(DCFnum, 1);
[DCFimp, tw3] = impz(DCFnum, 1);

% sinc3 + droop
hsinc3_dcf = conv(hsinc3, DCFnum);
Hsinc3dcf = dsp.FIRFilter('Numerator',hsinc3_dcf);

% Filter operation
%DCFout = conv(Sinc3out, DCFimp);

% Half-band filter 1 (HBF1)
FsHBF1 = fs/Nsinc;
HBF1taps = 26;
HBF1num = firhalfband(HBF1taps, 0.25);
%[hbf1f, w1] = freqz(HBF1num, 1);
%[hbf1t, tw1] = impz(HBF1num, 1);
%HBF1outOrg = conv(DCFout, hbf1t);
%HBF1out = downsample(HBF1outOrg, 2);

% Half-band1 filter obj
HBF1 = dsp.FIRFilter('Numerator',HBF1num);
% Half-band filter 2 (HBF2)
FsHBF2 = FsHBF1/2;
HBF2taps = 50;
HBF2num = firhalfband(HBF2taps, 0.25);
%[hbf2f, w2] = freqz(HBF2num, 1);
%[hbf2t, tw2] = impz(HBF2num, 1);
%HBF2outOrg = conv(HBF1out, hbf2t);
%HBF2out = downsample(HBF2outOrg, 2);

% Half-band2 filter obj
HBF2 = dsp.FIRFilter('Numerator',HBF2num);

%%
all1 = conv(hsinc3_dcf, HBF1num);
all2 = conv(all1, HBF2num);
fvtool(all2)
%% Look at all filters

view = fvtool(Hsinc3, Hdcf, Hsinc3dcf, HBF1, HBF2);
legend(view,'Sinc3', 'Droop-Corr', 'Sinc3 + dcf', 'HBF1', 'HBF2')

%% test sinc3 with cic deci
look = fvtool(cicDecim, Hsinc3);
legend(look, 'CIC Deci', 'Sinc3')


%% Simulink Simulation with deci
mdl = 'dsm_l2_sim_deci';    % 2. Order + decimation
open_system(mdl);

sigIn.time = t';
sigIn.signals(1).values = u';
sigIn.signals(1).dimensions = 1;

simOut = sim(mdl, 'Solver', 'FixedStepDiscrete', ...
    'StopTime', num2str(max(t)), ...
    'SaveState','on','StateSaveName','xout',...
    'SaveOutput','on','OutputSaveName','yout',...
    'SaveFormat', 'Dataset');


% Quantizer gains
ysim = simOut.yout.get('y').Values.Data';
vsim = simOut.yout.get('v').Values.Data';
ksim = (vsim*ysim')/(ysim*ysim');

vd = vsim;

% Time-domain plot of DSM with delsig toolbox
fig3 = figure(3);
tsamples = 0:N/2;
stairs(tsamples, u(tsamples+1));
hold on;
stairs(tsamples, vd(tsamples+1));
hold off;
grid();
axis([0 N/2 -1.2 1.2])
%xlim([0 2000]);
legend('u', 'vsim');

%%
[pxx, w] = periodogram(v, hamming(length(v)), fs);
figure();
plot(w,10*log10(pxx));

%% Spectral analysis cmp. wiht deci and without
sq = abs(fft(v));
sqd = abs(fft(vd));
% Remove redundant half of spectrum and normalize to FS
f = (0:N/2-1)/N;  % frequency vector
z = exp(2i*pi*f);

sq_hlf = sq(1:end/2)/(N/2);
sqdBFS = 20*log10(sq_hlf);

sq_hlfd = sqd(1:end/2)/(N/2);
sqdBFSd = 20*log10(sq_hlfd);

% log10(0) -> -inf/inf correction
sqdBFS(isinf(sqdBFS)) = -150;
sqdBFSd(isinf(sqdBFSd)) = -150;

% Calculate SNR
sigbin = 1 + cycles;
noise = [sq_hlfd(1:sigbin-1), sq_hlfd(sigbin+1:end)];
snr = 10*log10(sq_hlf(sigbin)^2/sum(noise.^2))

% Generate the magnitude plot with annotation
fig4 = figure(4);
set(gca, 'fontsize', 14);
plot(f, sqdBFS);
hold on;
plot(f, sqdBFSd);
hold off;
axis([0 0.06 -150 0]);
xlabel('Frequency f/fs')
ylabel('DFT Magnitude in dBFS')
grid;
legend('spectrum without decimation', 'spectrum with decimation')
%% Windowed plot
specHW = fft(v.*ds_hann(N))/(N/4);
specHWd = fft(vd.*ds_hann(N))/(N/4);

fig6 = figure(6);
plot(f, dbv(specHW(1:end/2)));
hold on;
plot(f, dbv(specHWd(1:end/2)));
hold off;
axis([0 0.06 -150 0]);
grid on;
ylabel('dBFS');
xlabel('f/fs');
legend('spectrum without decimation', 'spectrum with decimation')
%% realize Filters
% not realy working, try usind blocks with the kown coefficients
%DeciFilter = cascade(Hsinc3, Hdcf, HBF1, HBF2);

%realizemdl(DeciFilter)