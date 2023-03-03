clear all;close all;clc
load modello_greybox_jnt2.mat
%%
full_state=ss(modello_grey.A, ...
    modello_grey.B, ...
    eye(4), ...
    zeros(4,1));

Jl=modello_grey.Structure.Parameters(2).Value;
full_state_disturbo_sul_carico=ss(modello_grey.A, ...
    [modello_grey.B [0;0;0;1/Jl]], ...
    eye(4), ...
    zeros(4,2));
Ts=1e-3;
Pd=c2d(full_state,Ts);

Ad=Pd.A;
Bd=Pd.B;
Cd=Pd.C;
Dd=Pd.D;

n=order(Pd); % ordine del sistema
no=size(Cd,1); % numero di uscite
ni=size(Bd,2); % numero di ingressi

Ahat_d=[Ad zeros(n,ni);-Cd(2,:)*Ts 1];
Bhat_d=[Bd;zeros(ni,1)];


% lambda=[-10,-21,-22,-23,-24]*0.5;   % polo di sistema continuo % DA TARARE!!!
% aval_controllore=exp(Ts*lambda); 
% Khat=place(Ahat_d,Bhat_d,aval_controllore); % calcola Khat per avere gli autovalori aval_controllore
%%
% state2=T*x
% state2'*Q*state2= x'*T'*Q*T*x
T=[-1 1 0 0 0;
0 1 0 0 0;
0 0 -1 1 0;
 0 0 0 1 0;
0 0 0 0 1];

Q2=diag([1 1 2 0.1 10]);
Q=T'*Q2*T;
R=1e-6;
[Khat,S,e] = dlqr(Ahat_d,Bhat_d,Q,R);
damp(log(e)/1e-3)
K=Khat(:,1:n);
H=-Khat(:,n+1:end); % ricordarsi il meno

sys1=feedback(Pd,K);
s=tf('s');
Cint=c2d(1/s,Ts)*H;
reference_to_state=feedback(sys1*Cint*[0 1 0 0],eye(4))*[0;1;0;0];
figure(1)
step(reference_to_state)


%% no integral
Q=diag([0.01 10 0.001 0.1])
R=1e-5;
[K,S,e] = dlqr(Ad,Bd,Q,R)
H=0