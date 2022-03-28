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

% uso la funzione compilata per il calcolo della dinamica (arriverà anche
% per mac)
system.setForwardDynamics(@fdCodegen_win);
%%
n_output=length(system.getOutputName);
for io=1:n_output
    fprintf('output %d: %s\n',io,system.getOutputName{io});
end

n_input=system.getInputNumber;
u_max=system.getUMax;
for ii=1:n_input
    fprintf('input %d: %s. valore massimo coppia %f\n',ii,system.getInputName{ii},u_max(ii));
end

% tempo di campionamento 1ms
st=system.getSamplingPeriod;

% definisco il sistema di controllo
cs=ControlledSystemScara(system,'Alfa');

% simulo un secondo
t=(0:st:1)';

%% definisco segnale di ingresso
% per le prove di identificazione occore definire il segnale
tau=[50*ones(length(t),1) 50*ones(length(t),1)];
output=zeros(length(t),n_output);

%% prova in anello aperto
for it=1:length(t)
    output(it,:)=cs.openloop(tau(it,:)');
end

%% grafico risultati
pos1=output(:,1);
pos2=output(:,2);

vel1=output(:,3);
vel2=output(:,4);

tau1=tau(:,1);
tau2=tau(:,2);


figure
tiledlayout(3,2)
nexttile
plot(t,pos1)
grid on
xlabel('t');
ylabel('pos 1')

nexttile
plot(t,pos2)
grid on
xlabel('t');
ylabel('pos 2')


nexttile
plot(t,vel1)
grid on
xlabel('t');
ylabel('vel 1')

nexttile
plot(t,vel2)
grid on
xlabel('t');
ylabel('vel 2')



nexttile
plot(t,tau1)
grid on
xlabel('t');
ylabel('torque 1')

nexttile
plot(t,tau2)
grid on
xlabel('t');
ylabel('torque 2')
