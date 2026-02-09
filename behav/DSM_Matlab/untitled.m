% clear all
clc;
clear;
close all;

data = readtable('spice_data/data.csv');
%%
t = data.time; v = data.vout; u = data.vin;

figure();
plot(t,v, 'x-')
hold on;
plot(t,u);

%% test values
[val, ~, idx] = unique(t);
count = accumarray(idx,1);
result = table(val, count);