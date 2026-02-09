% decimation filters:
clc;
close all;
clear;

fs = 1e6;
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
Hsinc3 = dsp.FIRFilter('Numerator',hsinc3); % Filter obj

% Droop correction filter (DCF)
DCF = fdesign.decimator(Nsinc, 'ciccomp', 1, 3, 'n,fc,ap,ast', 12, 0.45, 0.05, 60);
% Droop Corr Filter Obj
Hdcf = design(DCF, 'equiripple', 'SystemObject', true); % Filter obj
DCFnum = Hdcf.Numerator;
fprintf('DCF Order: %d\n', length(DCFnum));

% Half-band filter 1 (HBF1)
FsHBF1 = fs/Nsinc;
HBF1taps = 26;
HBF1num = firhalfband(HBF1taps, 0.25);
fprintf('HBF1 Order: %d\n', length(HBF1num));
HBF1 = dsp.FIRFilter('Numerator',HBF1num);  % Filter obj

% Half-band filter 2 (HBF2)
FsHBF2 = FsHBF1/2;
HBF2taps = 50;
HBF2num = firhalfband(HBF2taps, 0.25);
fprintf('HBF2 Order: %d\n', length(HBF2num));
HBF2 = dsp.FIRFilter('Numerator',HBF2num);  % Filter obj

% Look at all filters

view = fvtool(Hsinc3, Hdcf, HBF1, HBF2);
legend(view,'Sinc3', 'DCF', 'HBF1', 'HBF2')