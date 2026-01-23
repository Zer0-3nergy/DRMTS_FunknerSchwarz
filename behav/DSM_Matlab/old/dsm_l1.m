%% Init
clc;
clear;
close all;

%% Spec.
N  = 64;                % simulation length (output samples)
cycles = 2;             % number of sinusoids
A  = 0.8;               % signal amplitude
offset = 0;
fs = 1;                 % sampling frequency 
Ts  = 1/fs;             % time step
fx = cycles / (N*Ts);   % signal frequency

t = 0:Ts:(N-1)/fs;
u = A * sin(2 * pi * fx * t + 2*pi*rand(1));

%% Coeffizeint
osr = 512;  % oversampleling ratio
L = 2;
H = synthesizeNTF(L, osr);
from = 'CIFB';
[a,g,b,c] = realizeNTF(H,from);
b(2:end) = 0;
ABCD = stuffABCD(a,g,b,c,from);
[ABCDs, umax] = scaleABCD(ABCD);
[a,g,b,c] = mapABCD(ABCDs,from);

a1 = a(1);
a2 = a(2);
b1 = b(1);
c1 = c(1);
c2 = c(2);
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

%% Post-processing
fig1 = figure();
plot(t, u, 'rx-', t, ysim, 'g');
axis([ min(t) max(t) 1.1*min(ysim) 1.1*max(ysim) ]);
hold on;
stairs(t, vsim, 'b');
xlabel('Time t/T');
ylabel('Amplitude');
legend('u', 'ysim', 'vsim');
title('1st Order \Sigma\Delta');
hold off;
grid();

%% Export figure
%print(fig1, 'lec5s22', '-depsc');

%% Spectral analysis cmp. lecture
sq = abs(fft(vsim));

% Remove redundant half of spectrum and normalize to FS
f = [0:N/2-1]/N;  % frequency vector
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
