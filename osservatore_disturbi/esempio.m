clc;close all;clear;

m=0.01;
k=100;
h=10;

A=[0 1;[-k -h]/m];
B=[0;1/m];
C=[1 0];
D=0;

n=length(B);
Ao=[A -B;zeros(1,n) 0];
Bo=[B;0];
Co=[C 0];
Do=D;

Qo=diag([1 100 k^2]);
Ro=1e-6;
[L]=lqe(Ao,eye(3),Co,Qo,Ro)
% po=[-41,-42,-43]*10;
% 
% L=place(Ao',Co',po)'



Aa=[A zeros(n,1);-C 0];
Ba=[B;0];
Ca=[C 0;0*C 1];
Da=[D;0];
pc=[-20;-21;-22];

Ka=place(Aa,Ba,pc);
K=Ka(1:n);
H=-Ka(n+1:end);
% 
% K=place(A,B,pc(1:n));
% H=1e-50;


Q=diag([1e-6;1e-6;10000])
R=1e-3;

Ka=lqr(Aa,Ba,Q,R);
K=Ka(1:n);
H=-Ka(n+1:end);

Qy=diag([.001 1000]);
Ry=1e-3;
Ka=lqry(ss(Aa,Ba,Ca,Da),Qy,Ry);
K=Ka(1:n);
H=-Ka(n+1:end);
%sim('test_observer')

Ac=[Ao-Bo*[K 0]-L*Co Bo*H;-Co 0];
Bc=[[0;0;0;1] [L;0]];
Cc=[-[K 0] H];
Dc=[0 0];
regulator=ss(Ac,Bc,Cc,Dc)*[1 0;1 -1];
tmp=zpk(regulator);
Cr=tmp(1);
Ce=tmp(2);
step(feedback(ss(A,B,C,D)*Ce,1))