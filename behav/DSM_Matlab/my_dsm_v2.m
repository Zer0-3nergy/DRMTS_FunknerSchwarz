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

%% compare simulink mdl (no decimation) with delsig toolbox simulation of DSM
[v, xn, xmax, y] = simulateDSM(u, ABCD);
% y is bevor comp.!
figure()
subplot(2,1,1) % simulink mdl
tsamples = 0:N/2;
stairs(tsamples, vsim(tsamples+1),'b', LineWidth=0.5);
hold on;
stairs(tsamples, ysim(tsamples+1),'r', LineWidth=1);
stairs(tsamples, u(tsamples+1),'g', LineWidth=2);
hold off;
axis([0 N/2 -1.2 1.2])
%xlim([0 100]);
legend('vsim','ysim', 'u');
grid();
title('DSM with Simulink mdl');

subplot(2,1,2) % desif toolbox
tsamples = 0:N/2;
stairs(tsamples, v(tsamples+1),'b', LineWidth=0.5);
hold on;
stairs(tsamples, y(tsamples+1),'r', LineWidth=1);
stairs(tsamples, u(tsamples+1),'g', LineWidth=2);
hold off;
axis([0 N/2 -1.2 1.2])
%xlim([0 100]);
legend('v','y', 'u');
grid();
title('DSM with delsig toolbox');

eq = isequal(vsim([10 end-1]),v([10 end-1])');
disp('are Simulink mdl (no deci) and delsig equal?')
disp(eq) % same exept first view values 
%% time domain plot
fig1 = figure(1);
tsamples = 0:N/2;
stairs(tsamples, vsim(tsamples+1),'b', LineWidth=0.5);
hold on;
stairs(tsamples, ysim(tsamples+1),'r', LineWidth=1);
stairs(tsamples, u(tsamples+1),'g', LineWidth=2);
hold off;
axis([0 N/2 -1.2 1.2])
%xlim([0 100]);
legend('vsim','ysim', 'u');
grid();

%% Spectral analysis Windowed
% SNR of sim output
sq = abs(fft(vsim,1024));

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
%xscale log;
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
ydsim2 = simOut.y1;
%% time domain plot sim 2
fig3 = figure(3);
tsamples = 0:N/2;
stairs(tsamples, u(tsamples+1));
hold on;
stairs(tsamples, vsim2(tsamples+1));
%stairs(tsamples, ydsim2(tsamples+1));
%stairs(tsamples, ysim2(tsamples+1));
hold off;
%axis([0 N/2 -1.2 1.2])
%xlim([0 100]);
legend('u', 'vsim','ysim');
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

%% CIC Sinc3
frame_l = length(u);
mdl = 'dsm_l2_sim_deci_cic';    % 2. Order + decimation
%open_system(mdl);

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
vsim3_len = length(vsim3);
y1sim_len = length(y1sim3);
y2sim_len = length(y2sim3);
ydsim2_len = length(ydsim2);    % reff signal after Sinc3
tsamples = 0:N/2;
tsamples1 = 0:vsim3_len-1;
tsamples2 = 0:y1sim_len-1;
tsamples3 = 0:y2sim_len-1;
tsamplesR = 0: ydsim2_len -1;
stairs(tsamples1, vsim3(tsamples1+1));
hold on;
stairs(tsamplesR, ydsim2(tsamplesR+1));
%stairs(tsamples3, y2sim3(tsamples3+1));
hold off;
axis([0 N/2 -1.2 1.2])
legend('vsim3(after deci)', 'ydsim2(ref. after deci)','y2sim3');
%xlim([0 100]);
grid();

% warum sind es nur 64 werte nach dem cic decimator und nicht 8192?
% schaltung new designen von sample based -> Frame based !!!
% wie bekommt man verilog in xscham?