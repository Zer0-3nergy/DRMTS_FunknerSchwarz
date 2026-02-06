% clear all
clc;
clear;
close all;


%data = readmatrix('ideal_out.txt', 'FileType', 'text', 'NumHeaderLines', 1);
%data = readmatrix('1_Amp_500Hz.txt', 'FileType', 'text', 'NumHeaderLines', 1);
%data = readmatrix('08_Amp_200Hz.txt', 'FileType', 'text', 'NumHeaderLines', 1);
data = readmatrix('1.2_Amp_500Hz.txt', 'FileType', 'text', 'NumHeaderLines', 1);
data_v = data(:,2); % 'analog' Data
data_t = data(:,1);

data_N = numel(data_v);

% ref signal
A_ref = 1.2;
DC_ref = 1.5;
f_ref = 500;
v = A_ref * sin(2*pi*f_ref*data_t) +DC_ref; % input signal

% 'Quantesierung'
V_low = min(data_v);
V_high = max(data_v);
V_space = (V_low + V_high)/2;

bits = data_v > V_space;

u = 2*double(bits) - 1;


fs = 1e6;               % Sampling frequency 
Ts = 1/fs;



figure();
plot(data_v);
hold on;
plot(u);
plot(v, 'g', LineWidth= 2);
hold off;
grid();

%%
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
y1sim = simOut.y1; % valid signal
y2sim = simOut.y2; % easy stairs plot with same lenght as input

% removed zeros with valid signal
vsim_dec = double(vsim(y1sim));
%% plot
v_down = downsample(v,512);
v_dc = mean(v_down);
v_down_norm = v_down - v_dc;

time_fig = figure(1);
plot(vsim_dec)
hold on;
plot(v_down_norm, 'g');
hold off;
grid();

Nv = length(vsim_dec);

Nfft = 1024;

w = hamming(Nv);

vfft = fft(vsim_dec.*w,Nfft);
vfft_h = vfft(1:Nfft/2);
v_db = mag2db(abs(vfft_h));

f = (0:Nfft/2-1)/Nfft;

fft_fig = figure(2);
plot(f,v_db);
grid();

snr_fig = figure(3);
snr(vsim_dec)