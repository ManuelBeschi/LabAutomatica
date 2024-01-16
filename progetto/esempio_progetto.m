clear all;
clc;
close all;
%addpath(['..',filesep,'modelli'])

% creo sistema
[system,rigid_robot]=getRoboticSystem('Alfa');
system.setForwardDynamics(@fdCodegen_ubuntu);

% creo sistema controllato
st=system.getSamplingPeriod;
cs=ControlledSystemScara(system,'Alfa');

% posso settare accerazione massima 
cs.setMaxAcceleration(15);
% posso settare rest time (>=0.1)
cs.setRestTime(0.1);


% creo un controllore in cui i due giunti sono controllati da due PI con
% ingresso l'errore di posizione e uscita la coppia
Kp_jnt1=5000;
Ki_jnt1=5;

Kp_jnt2=5000;
Ki_jnt2=5;

ctrl=SimpleController(st,Kp_jnt1,Ki_jnt1,Kp_jnt2,Ki_jnt2,rigid_robot);

% setto il controllore
cs.setController(ctrl);

% simulo il sistema per la valutazione
% "fast" fa 5 esecuzioni
% "complete" le fa 5 x 5 esecuzioni

tic
[score,results]=cs.evalution("fast");
computation_time=toc;
simulated_time=sum([results.Ttot]);
fprintf('Real-time factor = %f',simulated_time/computation_time)

% grafico i risultati
fprintf('lo score è %f\n',score);
cs.showResults(results)
