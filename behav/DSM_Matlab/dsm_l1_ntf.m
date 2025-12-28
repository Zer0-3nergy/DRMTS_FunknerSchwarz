%% Init
clear all;

%% Spec.
K  = 30;                 % number of averaged simulations
N  = 2^10;               % simulation length (output samples)
fs = 1;                  % sampling frequency 
Ts  = 1/fs;               % time step
fx = pi/50;              % signal frequency

A  = 0.79;               % signal amplitude
offset = pi/150;
ti = sprintf('First order sigma-delta, sin input, A=%g, fx=%g, offset=%g, N=%d, K=%d', A, fx, offset, N, K);

Y = zeros(N, K);         % result vector

%% Simulation
mdl = 'dsm_l1_sim';
open_system(mdl);

for i=1:K
    [t,x,y] = sim(mdl, Ts*(N-1));
    Y(:, i) = y(:, 3);
end

%% Post-processing
[f, p] = avg_spectrum(Y);

% ntf
G = 1;
z = tf('z');
H = z^-1 / (1 - (1-eps)*z^-1);
NTF = G / (1+G*H);
STF = G*H / (1+G*H);
ntf_mag = bode(NTF, 2*pi*f);
ntf_mag = 20*log10(ntf_mag(1,:)+eps);
stf_mag = bode(STF, 2*pi*f);
stf_mag = 20*log10(stf_mag(1,:)+eps);

plot(f, 10*log10(p), f, ntf_mag - 6, 'r');
xlabel('Frequency   f/f_s');
ylabel('Amplitude in dBWN');
axis([0 0.5 -50 30]);
title(ti);
legend('output spectrum', 'NTF');
