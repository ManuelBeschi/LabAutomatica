function [A,B,C,D] = DOF2_sea_model(Jm1,Jl1,k1,c1,cm1,Jm2,Jl2,k2,c2,cm2,Ts)
% ODE function for computing state-space matrices as functions of parameters
%
% Jm motor inertia 
% Jl link inertia
% k spring stiffness
% c spring damping
% cm motor viscuous friction
%
% x=[motor_pos, link_pos, motor_vel, link_vel]
%
% u=motor_eff
%
% Jm*Derivative(motor_vel) = u - cm*motor_vel -k*(motor_pos-link_pos) - c*(motor_vel-link_vel)
%
% Jl*Derivative(link_vel)  = k*(motor_pos-link_pos) + c*(motor_vel-link_vel)

M=[Jm1 0 0 0
   0 Jl1 0 0
   0 0 Jm2 0;
   0 0 0 Jl2];

K=[-k1 k1 0 0;
    k1 -k1 0 0;
    0 0 -k2 k2;
    0 0 k2 -k2];
C=[-c1-cm1 c1 0 0;
    c1 -c1-cm2 cm2 0;
    0 cm2 -c2-cm2 c2;
    0 0 c2 -c2];

A=[zeros(4,4) eye(4,4);
   M\K M\C];

U=[1/Jm1 0;
   0  -1/Jl1;
   0  1/Jm2;
   0 0];
B=[zeros(4,2);
   M\U];

C=[eye(4,4) zeros(4,4)];
D=zeros(4,2);