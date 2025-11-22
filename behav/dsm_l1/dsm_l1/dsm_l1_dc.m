%% Initialize
clear all;

%% Spec.
N  = 2^10;      % simulation length (output samples)
A  = 0;         % signal amplitude
offset = 1/22;
fs = 1;         % sampling frequency 
Ts  = 1/fs;      % time step
fx = 0;         % signal frequency

t = 0:Ts:(N-1)/fs;
u = A * sin(2 * pi * fx * t + 2*pi*rand(1));

%% Simulation
mdl = 'dsm_l1_sim';
open_system(mdl);

simoptions=simset('Solver', ...
    'FixedStepDiscrete', ...
    'RelTol', 1e-3, ...
    'MaxStep', Ts);

[t_, u_, y] = sim(mdl, max(t), simoptions, [t', u']);

Q = y(:,1);
v = y(:,2);

%% Post-processing
[f, p, pi] = avg_spectrum(2*v);
p = p * N/2;              % dBWN

fig1 = figure(1);
plot(f, 10*log10(p));
xlabel('Frequency f/f_s ');
ylabel('Amplitude / dBWN ');
axis([0 0.5 -20 60]);
title('First order sigma-delta, DC input');
print(fig1, 'lec5s30', '-depsc')

fig2 = figure(2);
L = 50;
stairs(v(1:L));
xlabel('Time t/T');
ylabel('Output');
axis([0 L -1.1 1.1]);
title('First order sigma-delta, DC input');
print(fig2, 'lec5s31', '-depsc')
