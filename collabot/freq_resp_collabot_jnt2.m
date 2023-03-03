clear all;close all;clc

load joint2_collabot_freqident_joint_2_test3.mat
%load joint2_collabot_freqident_joint_2.mat
Ts=1e-3;

fr=experiment_freqresp([1:2 5+(1:2)],:);

%%
peso=ones(length(experiment_freqresp.Frequency),1);
wpeso0=5;
wpeso1=100;
peso(experiment_freqresp.Frequency<wpeso0)=1e-5;
peso(experiment_freqresp.Frequency>wpeso1)=1e-5;

Jm1=18.7; % motor inertia 
Jl1=8; % link inertia
k1=2957; % spring stiffness
c1=19;  % spring damping
cm1=609; % motor viscuous friction

Jm2=3.537; % motor inertia 
Jl2=2.874; % link inertia
k2=1082; % spring stiffness
c2=5.4;  % spring damping
cm2=255; % motor viscuous friction

parameters={
    'Jm1',Jm1;
    'Jl1',Jl1;
    'k1',k1;
    'c1',c1;
    'cm1',cm1;
    'Jm2',Jm2;
    'Jl2',Jl2;
    'k2',k2;
    'c2',c2;
    'cm2',cm2
    };
sys = idgrey(@DOF2_sea_model,parameters,'c');

for ip=1:length(sys.Structure.Parameters)
    sys.Structure.Parameters(ip).Minimum = 0;
    sys.Structure.Parameters(ip).Free=(ip<=5);
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
