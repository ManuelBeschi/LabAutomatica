clear all;close all;clc;

s=tf('s');

C=1.5*(2*s^3+2*s^2+s+1)/(s*(s^2+0.5*s+2));

num=C.Numerator{1};
den=C.Denominator{1};

[coeff_fratti,poli,guadagno] = residue(num,den);

% individuo il polo