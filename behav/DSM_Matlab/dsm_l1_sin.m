%% Init
clear all;

%% Spec.
K  = 30;                 % number of averaged simulations
N  = 2^10;               % simulation length (output samples)
fs = 1;                  % sampling frequency 
Ts = 1/fs;               % time step
fx = pi/50;              % signal frequency

t = 0:Ts:(N-1)/fs;

choice = 'sine';

if strcmp(choice, 'sine')
    A  = 0.79;               % signal amplitude
    offset = pi/150;
    ti = sprintf('First order sigma-delta, sin input, A=%g, fx=%g, offset=%g, N=%d, K=%d', A, fx, offset, N, K);
    u = A * sin(2 * pi * fx * t + 2*pi*rand(1));
elseif strcmp(choice, 'dc')
    A  = 0;                  % signal amplitude
    offset = 1/11;
    ti = sprintf('First order sigma-delta, DC input, offset=%g, N=%d, K=%d', offset, N, K);
end

%% Simulation
mdl = 'dsm_l1_sim';
% open_system(mdl);

simoptions=simset('Solver', ...
    'FixedStepDiscrete', ...
    'RelTol', 1e-3, ...
    'MaxStep', Ts);

v = zeros(N, K);         % result vector

for i=1:K
    [t_, u_, y] = sim(mdl, max(t), simoptions, [t', u']);
    v(:,i) = y(:,2); 
end

%% Post-Processing
[f, p, pi] = avg_spectrum(v);

plot(f, 10*log10(p));
xlabel('Normalized Frequency f/f_s');
ylabel('Amplitude in dBWN');
axis([0 0.5 -50 30]);
title(ti);
