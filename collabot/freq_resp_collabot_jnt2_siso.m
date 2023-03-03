clear all;close all;clc

load joint2_collabot_freqident_joint_2_test3.mat
%load joint2_collabot_freqident_joint_2.mat
Ts=1e-3;

fr=experiment_freqresp([1:2],1);

%%
peso=ones(length(experiment_freqresp.Frequency),1);
wpeso0=5;
wpeso1=100;
peso(experiment_freqresp.Frequency<wpeso0)=1e-5;
peso(experiment_freqresp.Frequency>wpeso1)=1e-5;

Jm=0.1; % motor inertia 
Jl=2; % link inertia
k=2000; % spring stiffness
c=10;  % spring damping
cm=0.2; % motor viscuous friction

parameters={
    'Jm',Jm;
    'Jl',Jl;
    'k',k;
    'c',c;
    'cm',cm
    };
sys = idgrey(@sea_model,parameters,'c');

for ip=1:length(sys.Structure.Parameters)
    sys.Structure.Parameters(ip).Minimum = 0;
end

grey_opt = greyestOptions('WeightingFilter',peso);
modello_grey=greyest(fr,sys,grey_opt)
bodemag(fr,modello_grey)
return
opts=ssestOptions('WeightingFilter',peso,'EnforceStability',1);
modello_continuo = ssest(experiment_freqresp,4,opts);
modello_discreto = ssest(experiment_freqresp,4,'Ts',Ts,opts);


figure
bode_opts = bodeoptions('cstprefs');
bode_opts.PhaseWrapping = 'on';

h=bodeplot(experiment_freqresp, bode_opts);
hold on
showConfidence(h,3)
bode(modello_continuo,modello_grey, bode_opts)

plot([wpeso0 wpeso0],ylim,'--k')
plot([wpeso1 wpeso1],ylim,'--k')

hold off
grid on
xlim([1e-1 1e4])

legend('Identification','Modello continuo','Modello grey')


%% validation
load joint3_validation.mat


figure
bode_opts = bodeoptions('cstprefs');
bode_opts.PhaseWrapping = 'on';

h=bodeplot(joint3_freq_resp_validation, bode_opts);
hold on
showConfidence(h,3)
bode(modello_continuo,modello_grey, bode_opts)

plot([wpeso0 wpeso0],ylim,'--k')
plot([wpeso1 wpeso1],ylim,'--k')

hold off
grid on
xlim([1e-1 1e4])

legend('Validation','Modello continuo','Modello grey')
