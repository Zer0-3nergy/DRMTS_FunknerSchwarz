% clear all
clc;
clear;
close all;
% calibration for all sim
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


% simulink mdl sim (no decimation)
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

% compare simulink mdl (no decimation) with delsig toolbox simulation of DSM
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

%% freq spectrum and snr
u_new = u';
w = hamming(N);
vfft = fft(vsim.*w,N); v_half = vfft(1:end/2); v_dB = mag2db(abs(v_half));
ufft = fft(u_new.*w,N); u_half = ufft(1:end/2); u_dB = mag2db(abs(u_half));
f = (0:N/2-1)/N;
f_u = fx/fs;

% SNR
SNR_sim = snr(vsim);

figure();
plot(f,v_dB, 'b');
hold on;
plot(f,u_dB, 'r--');
hold off;
grid();
ylabel('dBFS'); xlabel('f/fs');
xlim([0 0.01])
title(sprintf('Frequency Sprectrum (Windowed): SNR = %.2f dB', SNR_sim));
legend('ΣΔ Modulator (Simulink, no decimation)', 'Input Signal (reference)')


