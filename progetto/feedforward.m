clear all;
clc;
close all;
addpath(['..',filesep,'modelli']) % aggiungi cartella path

nome_gruppo='Bravo';

% credo il sistema da controllare
% system è lo scara da controllare.
% rigid_robot è il modello che non considera l'elasticità. Si può (non
% obligatoriamente) utilizzare per fornire la coppia precalcolata
[system,rigid_robot]=getRoboticSystem('Bravo');


q_sp=zeros(2,1);
dq_sp=zeros(2,1);
ddq_sp=zeros(2,1);

tau_ffw=rigid_robot.inverseDynamics(q_sp,dq_sp,ddq_sp)
