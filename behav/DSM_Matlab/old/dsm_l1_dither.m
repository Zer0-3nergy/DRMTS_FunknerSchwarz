%% Init
clear all;

%% Spec.
K  = 50;                 % number of averaged simulations
N  = 2^10;               % simulation length (output samples)
A  = 0.49;               % signal amplitude
offset = 0;
fs = 1;                  % sampling frequency 
Ts  = 1/fs;               % time step
fx = 0.10001;              % signal frequency
sigma = 0.5;

Y = zeros(N, K);         % result vector

%% Simulation
for i=1:K
    [t,x,y] = sim('dsm_l1_dither_sim', Ts*(N-1));
    Y(:, i) = 2 * y(:, 3);
end

[f, p, pi] = avg_spectrum(Y);
p = p * N/2;              % dBWN

%% Post-processing
plot(f, 10*log10(p));
xlabel('Frequency   [ f/f_s ]');
ylabel('Amplitude   [ dBWN ]');
axis([0 0.5 -30 20]);
title(sprintf('First order dithered sigma-delta, soidal input, K=%d averages', K));
