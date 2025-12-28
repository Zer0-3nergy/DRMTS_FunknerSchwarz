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
title('2st Order \Sigma\Delta');
hold off;
grid();

%% Export figure
%print(fig1, 'lec5s22', '-depsc');
