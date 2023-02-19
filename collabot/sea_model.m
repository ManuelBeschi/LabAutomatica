function [A,B,C,D] = sea_model(Jm,Jl,k,c,cm,Ts)
% ODE function for computing state-space matrices as functions of parameters

A=[0 0 1 0;
    0 0 0 1;
    [-k k -cm-c c]/Jm;
    [k -k c -c]/Jl];
B=[0;
   0;
   1/Jm;
   0];
C=[1 0 0 0;
    0 1 0 0];
D=[0;0];