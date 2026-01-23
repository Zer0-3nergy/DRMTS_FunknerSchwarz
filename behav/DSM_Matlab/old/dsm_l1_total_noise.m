%% Init
clear all;

%% Spec.
K  = 30;                 % number of averaged simulations
N  = 2^10;               % simulation length (output samples)
fs = 1;                  % sampling frequency 
Ts = 1/fs;               % time step
fx = pi/50;              % signal frequency
A  = 0.79;               % signal amplitude
offset = pi/150;
t = 0:Ts:(N-1)/fs;
u = A * sin(2 * pi * fx * t + 2*pi*rand(1));

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

%% Post-processing
[f, p, pint, pintfx] = avg_spectrum(v, fx/fs);

figure(1);
plot(f, 10*log10(p), f, 10*log10(pint), 'r');
xlabel('Normalized Frequency f/f_s');
ylabel('Amplitude in dBWN / Power in dBFS');
axis([0 0.5 -50 30]);
legend('Output Spectrum in dBWN', 'Total Noise in dBFS');

% NOTE: dBFS assumes full-scale DC input, not sinusoidal input

figure(2);
plot(f, 10*log10(p+eps), f, 10*log10(pintfx+eps), 'r', f, fs./(2*f+eps), [ fs/2/16 fs/2/16 ], [ -33 16 ], 'k');
xlabel('Normalized Frequency f/f_s');
ylabel('Amplitude in dBWN / Power in dBFS');
axis([0 0.2 -50 30]);
legend('output spectrum', 'quantization noise only', 'Oversampling ratio M');
