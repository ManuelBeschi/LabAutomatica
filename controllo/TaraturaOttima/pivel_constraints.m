function [cin,ceq]=pivel_constraints(x,P,w_vector,MS,wh,Fh_max,wl,Dl_max)
% cin<=0
% ceq==0

ceq=[];


Kp=x(1);
Ki=x(2);
C=tf([Kp Ki],[1 0]);


C_fr=freqresp(C,w_vector); % frequency response
P_fr=freqresp(P,w_vector);
C_fr=C_fr(:); % reshaping da 1x1xn a nx1
P_fr=P_fr(:); % reshaping da 1x1xn a nx1

L_fr=C_fr.*P_fr; % L=C*P
S_fr=1./(1+L_fr); % S=1/(1+L)
F_fr=L_fr.*S_fr; % F = L/(1+L)=L*S
DY_fr=P_fr.*S_fr; %DY=Y/D=P/(1+L)=P*S


% max(abs(F_fr(w_vector>wh))) <= Fh_max
% max(abs(F_fr(w_vector>wh))) - Fh_max <= 0
cin(1)=max(abs(F_fr(w_vector>=wh)))-Fh_max;

cin(2)=max(abs(DY_fr(w_vector<=wl)))-Dl_max;

% S<=MS
cin(3)=max(abs(S_fr))-MS;
