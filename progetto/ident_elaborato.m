clear all;
clc;
close all;
%addpath(['..',filesep,'modelli']) % aggiungi cartella path

nome_gruppo='X-ray';

% credo il sistema da controllare
% system è lo scara da controllare.
% rigid_robot è il modello che non considera l'elasticità. Si può (non
% obligatoriamente) utilizzare per fornire la coppia precalcolata
[system,rigid_robot]=getRoboticSystem(nome_gruppo);

% uso la funzione compilata per il calcolo della dinamica (arriverà anche
% per mac)
system.setForwardDynamics(@fdCodegen_ubuntu);
cs=ControlledSystem(system);

st=system.getSamplingPeriod;
controller=SimpleControllerFFW(st,5000,500,500,500,rigid_robot);
cs.setController(controller);

omega_portante=1;
ampiezza_portante=35;
T_portante=2*pi/omega_portante;
t=(0:st:(1.1*T_portante))';
portante=ampiezza_portante*sin(omega_portante*t);

exciting_signal=zeros(length(t),2);
reference=zeros(length(t),system.getOutputNumber);

im=2;
w0=30;
w1=300;
max_applitude=70;
n_harmonics=60;
omega=logspace(log10(w0),log10(w1),n_harmonics)';
omega=round(omega/omega_portante)*omega_portante; % arrotondo per avere le omega multiple della portante
omega=unique(omega); %scarto eventuali doppioni
multisine_signal=zeros(length(t),1);
for idx=1:length(omega)

    fase=rand*2*pi; % sfasamento random. sin(alpha-beta)= cos()sin()-sin()cos() wiki
    coeff_sin=sin(fase);
    coeff_cos=cos(fase);
    multisine_signal=multisine_signal+coeff_sin*sin(omega(idx)*t)+coeff_cos*cos(omega(idx)*t);
end
multisine_signal=multisine_signal/max(multisine_signal)*max_applitude;

exciting_signal(:,im)=portante+ multisine_signal;


cs.initialize
for idx=1:length(t)
    %    [process_output(idx,:),t(idx,1)]=cs.openloop(control_action(idx,:)');
    [process_output(idx,:),control_action(idx,:),t(idx,1)]=cs.step(reference(idx,:)',exciting_signal(idx,:)');

end

%%

process_output_coef=fourierCoefficients(t,process_output(:,2+im),omega_portante,omega);
control_action_coef=fourierCoefficients(t,control_action(:,im),omega_portante,omega);
%%
figure(1)
subplot(211)
plot(t,process_output(:,im+2))
subplot(212)
plot(t,exciting_signal(:,im))
hold on
plot(t,control_action(:,im))
%%
freq_resp=idfrd(process_output_coef./control_action_coef,omega,st); % Y(i*omega)/U(i*omega)
bode_opts = bodeoptions('cstprefs');
bode_opts.PhaseWrapping = 'on';
figure(2)
h=bodeplot(freq_resp,'--o', bode_opts);
grid on
hold on


%%

peso=ones(length(freq_resp.Frequency),1);
wpeso0=40;
wpeso1=200;
peso(freq_resp.Frequency<wpeso0)=1e-5;
peso(freq_resp.Frequency>wpeso1)=1e-5;
    
opts=ssestOptions('WeightingFilter',peso,'EnforceStability',1);
md = ssest(freq_resp,3,'Ts',st,opts);

figure
h=bodeplot(freq_resp,'o', bode_opts);
showConfidence(h,3)
hold on
bode(md, bode_opts)
plot([wpeso0 wpeso0],ylim,'--k')
plot([wpeso1 wpeso1],ylim,'--k')
grid on
legend('Identificazione','Modello discreto')
grid on

save(nome_gruppo,"freq_resp","md")