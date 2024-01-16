clear all;close all;clc;

ident=load('experiment_progetto0_jtn2_003.mat');
validation1=load('experiment_progetto0_jtn2_001.mat');
validation2=load('experiment_progetto0_jtn2_002.mat');
Jm=2.5; % motor inertia 
Jl=3.2; % link inertia
k=10000; % spring stiffness
c=3;  % spring damping
cm=0; % motor viscuous friction

parameters={
    'Jm',Jm;
    'Jl',Jl;
    'k',k;
    'c',c;
    'cm',cm
    };
sea_grey_model = idgrey(@elastic_model,parameters,'c');

for ip=1:length(sea_grey_model.Structure.Parameters)
    sea_grey_model.Structure.Parameters(ip).Minimum = 0;
end


peso=ones(length(ident.experiment_freqresp.Frequency),1);
wpeso0=10;
wpeso1=1000;
peso(ident.experiment_freqresp.Frequency<wpeso0)=1e-5;
peso(ident.experiment_freqresp.Frequency>wpeso1)=1e-5;
grey_opt = greyestOptions('WeightingFilter',peso);

modello_greybox=greyest(ident.experiment_freqresp([2 4],2),sea_grey_model,grey_opt);
%%
figure
bode_opts = bodeoptions('cstprefs');
bode_opts.PhaseWrapping = 'on';

h=bodeplot(ident.experiment_freqresp([2 4],2), bode_opts);
hold on
grid on
bodeplot(validation1.experiment_freqresp([2 4],2), bode_opts);
bodeplot(validation2.experiment_freqresp([2 4],2), bode_opts);
hmg=bodeplot(modello_greybox, bode_opts,'-o');
showConfidence(hmg,3)
legend('Identification','Validation1','Validation2','Grey-box model')
hold off
xlim([1 3000])

modello_giunto=ss(modello_greybox)