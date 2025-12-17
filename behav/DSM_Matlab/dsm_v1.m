% DSM V1
clc;
clear;
close all;


%% Specs
N = 2^10;
A = 0.49;
fs = 1;
fx = 0.10001;
ofs = 1/22;
Ts = 1/fs;
%% Specs
N = 2^10;
A = 2.5;
fs = 500000;
fx = 10000;
ofs = 2.4;
Ts = 1/fs;

%% Signal
t = 0:Ts:(N-1)/fs;
x = A * sin(2*pi*fx*t + 2*pi*rand(1));

%% Sim
model = 'dsm_v1_no_deci';
sim_out = sim(model);
y = sim_out.y;
v = sim_out.v;

%% plot
L = 50;
figure();
plot(t,x,'rx-');
hold on;
plot(y(1:L),'g')
stairs(v(1:L),'b');
hold off;
grid();
xlabel('Time t/T'); ylabel('Signal')
legend('Input Signal', 'Signal after loop-Filter', 'Out Signal');
%axis([0 L -1.1 1.1]);
%% Filter 

