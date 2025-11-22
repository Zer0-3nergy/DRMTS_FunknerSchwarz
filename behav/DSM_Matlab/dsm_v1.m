% DSM V1
clc;
clear;
close all;

% Specs
N = 2^10;
A = 0.49;
fs = 1;
fx = 0.10001;
ofs = 1/22;
Ts = 1/fs;


% Signal

t = 0:Ts:(N-1)/fs;
u = A * sin(2*pi*fx*t + 2*pi*rand(1));

%% Sim
model = 'dsm_v1_no_deci';
sim_out = sim(model);

y = sim_out.y;
v = sim_out.v;

%% plot
L = 50;
figure();
stairs(v(1:L));
grid();
xlabel('Time t/T'); ylabel('Output')
axis([0 L -1.1 1.1]);
