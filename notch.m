clear all;close all;clc;


wf=150;

xi=0.7;
delta=0.2;


s=tf('s');

Filtro=(s^2+2*delta*wf*s+wf^2)/(s^2+2*xi*wf*s+wf^2);

bode(Filtro)