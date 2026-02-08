function [ f, p, pint, pintfx ] = avg_spectrum(y, fx)
% AVG_SPECTRUM average power spectrum. Uses a Hodie window.
% Inputs:
%    Y  K x N matrix. Each of K columns is interpreted as a separate signal. 
%       A hodie window is applied to each column and the K spectra are averaged.
%    FX Frequency of fundamental, relative to sampling rate (in range 0 ...
%       0.5). Used to calculate PINTFX. Optional parameter.
% Outputs:
%    F  Frequency vector, 0 ... 0.5, length N/2 + 1.
%    P  Averaged power spectrum, length N/2 [dBWN].
%    PINT Integrated power spectrum, length N/2. PINT(end) is the power of the
%       signal.
%    PINTFX Same as PINT, except that the signal power is excluded from the
%       integral. Computed only when fx is specified.

[ N, K ] = size(y);

% frequency vector
f = linspace(0, 0.5, N/2+1)';

% window
w = hodiewindow(N);
w = w*ones(1, K);

% average magnitude from 0 to fs/2
p = fft(y .* w);                  % windowed spectrum
p(end/2+2:end, :) = [];               % frequencies 0 to fs/2
p = p .* conj(p);                     % power
if K > 1
     p = sum(p')' / K;                % average
end
p(1) = 0.5*p(1);                      % dc fix
p(end) = 0.5*p(end);
p = p/N;

% noise power integral
pint = 2/N*cumsum(p);                 % noise integral

if nargin > 1
    nx = round(N * fx + 1);           % fundamental center bin
    pp = 2/N*p;
    x1 = max([1, nx-7]);
    x2 = min([length(pp), nx+7]);
    pp(x1:x2) = 0;                    % zero out fundamental
    pp(1) = 0;                        % zero out dc term
    pintfx = cumsum(pp);
end
