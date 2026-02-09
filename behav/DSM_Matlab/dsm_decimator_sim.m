% clear all
clc;
clear;
close all;

%fs = 1e6;
%Ts = 1/fs;
M = 512;


%% load data: overdrive! Amp to hight LTSpice
data = readmatrix('spice_data/ideal_out.txt', 'FileType', 'text', 'NumHeaderLines', 1);

% 'analog-signal' data
data_v = data(:,2); data_t = data(:,1); data_N = numel(data_v);

Ts = mean(diff(data_t));
fs = 1/Ts;

% ref signal
A_ref = 1.4; DC_ref = 1.5; f_ref = 500;
v_ref = A_ref * sin(2*pi*f_ref*data_t) +DC_ref; % ref signal uses same time as data!

%% load data: 200Hz LTSpice
data = readmatrix('spice_data/08_Amp_200Hz.txt', 'FileType', 'text', 'NumHeaderLines', 1);

% 'analog-signal' data
data_v = data(:,2); data_t = data(:,1); data_N = numel(data_v);

Ts = mean(diff(data_t));
fs = 1/Ts;

% ref signal
A_ref = 0.8; DC_ref = 1.5; f_ref = 200;
v_ref = A_ref * sin(2*pi*f_ref*data_t) +DC_ref; % ref signal uses same time as data!

%% load data: 500Hz LTSpice
data = readmatrix('spice_data/1_Amp_500Hz.txt', 'FileType', 'text', 'NumHeaderLines', 1);

% 'analog-signal' data
data_v = data(:,2); data_t = data(:,1); data_N = numel(data_v);

Ts = mean(diff(data_t));
fs = 1/Ts;

% ref signal
A_ref = 1; DC_ref = 1.5; f_ref = 500;
v_ref = A_ref * sin(2*pi*f_ref*data_t) +DC_ref; % ref signal uses same time as data!

%% data Xscham ideal: comp | real: Ota, sw, inv
data = readtable('spice_data/data.csv');
data_v = data.vout; data_t = data.time; v_ref = data.vin; data_N = numel(data_v);

A_ref = 0.8; f_ref = 200;

Ts = mean(diff(data_t));
fs = 1/Ts;
%% data Xscham ideal: Ota, comp | real: sw, inv
data = readtable('spice_data/data_new.csv');
data_v = data.vout; data_t = data.time; v_ref = data.vin; data_N = numel(data_v);

A_ref = 0.8; f_ref = 200;

Ts = mean(diff(data_t));
fs = 1/Ts;
%%
% 'quantasation' of data
% in simulink there is no quantasation step, only a chnage from double to
% fixedpoint (data conversion block), beause evrything is digital.
% In a real mixed-signal Simulation a quantasation needs to be done bevor
% the decimination step, because the decimator is digital.
% mapping should be: high (3V) -> +1, low (0V) -> -1

% resample data:
%t_sample = data_t(1) : Ts : data_t(end);
%v_sample = interp1(data_t, data_v, t_sample, 'previous');
%data_N = numel(v_sample);

% quantesize data:
%v_high = max(v_sample); v_low = min(v_sample);
%v_threshold = abs(v_low + v_high)/2;
%v_bit = v_sample > v_threshold;   % quantazation
%u = 2*double(v_bit) -1;         % new range: from: 1,0 to +1,-1

% ref. input signal
%v_ref = A_ref * sin(2*pi*f_ref*t_sample) +DC_ref; % ref signal uses same time as data!

% quantesize data without interpolation:
v_high = max(data_v); v_low = min(data_v);
v_threshold = abs(v_low + v_high)/2;
v_bit = data_v > v_threshold;   % quantazation
u = 2*double(v_bit) -1;         % new range: from: 1,0 to +1,-1

t_sample = data_t; v_sample = data_v;

input_fig = figure(1);
subplot(211)
plot(t_sample/1e-3,v_sample, 'b', LineWidth=0.5)
hold on;
plot(t_sample/1e-3, v_ref, 'g', LineWidth= 2)
hold off;
xlabel('t/ms'); ylabel('V')
legend('ΣΔ Modulator out (spice)', 'reference signal in')
title('Plot: Inputdata')

subplot(212)
plot(t_sample/1e-3,u, 'r', LineWidth=0.5)
xlabel('t/ms'); ylabel('quantized level')
ylim([-1.2 1.2]);
legend('decimator in (spice)')

% Decimator settings:
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

%% Run simulation of decimator
mdl = 'just_sim_deci_cic_HDL';
open_system(mdl);

StopTime = (data_N-1)* Ts;

load_system(mdl);
simOut = sim(mdl, 'Solver', 'FixedStepDiscrete', ...
    'StopTime', num2str(StopTime), ...
    'SaveState','on','StateSaveName','xout',...
    'SaveOutput','on','OutputSaveName','yout',...
    'SaveFormat', 'Dataset', 'LoadExternalInput', 'off');

vsim = simOut.v;   % output is "zero padded"
y1valid = simOut.y1; % valid signal


% removed zeros with valid signal
vsim_dec = double(vsim(y1valid));

disp('Simulation done')
%% time plot, frequenzy plot and snr
% time plot
% referenze signal, downsampeled and offset removed!
v_reff_down = downsample(v_ref,M); v_dc = mean(v_reff_down); v_reff_norm = v_reff_down - v_dc;
f_out = fs/M; % out sample freq.

time_fig = figure(2);
plot(vsim_dec,'b')
hold on;
plot(v_reff_norm, 'r--');
hold off;
grid(); xlabel('Sample index'); ylabel('Amplitude');
legend('decimator out', 'v-reff (downsampeled)');
title(sprintf('Plot: after decimation (Signal in: A = %.2f, f = %.2f Hz)', A_ref, f_ref))

% frequency plot
Nv = length(vsim_dec); N_reff = length(v_reff_norm);
N_min = min([Nv, N_reff]);

% bring all signals to same lenght!
ref_sig = v_reff_norm(1:N_min);
deci_out = vsim_dec(1:N_min);

Nfft = 2^nextpow2(N_min);

w = hamming(N_min);

vfft_ref = fft(ref_sig.*w,Nfft); 
vfft_ref_h = vfft_ref(1:Nfft/2); 
v_reff_db = mag2db(abs(vfft_ref_h));

vfft = fft(deci_out.*w,Nfft); 
vfft_h = vfft(1:Nfft/2); 
v_db = mag2db(abs(vfft_h));

f = (0:Nfft/2-1)/Nfft;     % nomalized freq. in f/fs
f_real = f*f_out;          % real freq. in Hz

% peaks:
[~, idx] = max(v_db);
[~, idx_ref] = max(v_reff_db);
freq_peak = f_real(idx);
freq_peak_ref = f_real(idx_ref);

fft_fig = figure(3);
plot(f_real,v_db, 'b');
hold on;
plot(f_real,v_reff_db, 'r--')
hold off;
grid(); 
ylabel('dB'); xlabel('f/Hz');
%xlim([0 1000])
title('Frequency Sprectrum (Windowed):');
legend(sprintf('Decimator out: f = %.2f Hz',freq_peak), ...
    sprintf('Input Signal (reference, downsampeled): f = %.2f Hz',freq_peak_ref))

% snr
snr_fig = figure(4);
snr(vsim_dec)