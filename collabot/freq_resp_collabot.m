clear all;close all;clc

load joint_3.mat

y=js_pos(:,7:8);
t=js_time-js_time(1);
u=js_eff(:,7);

ts=timeseries([y u],t);

Ts=1e-3;
time=(t(1):Ts:t(end)-Ts)';

ts_resample=resample(ts,time);

output=ts_resample.Data(:,1:2);
input=ts_resample.Data(:,3);

idxs=find(time>35,1,'first'):find(time>155,1,'first');
identification=iddata(output(idxs,:),input(idxs,:),Ts);
identification.OutputName={'Motor position','Link position'};
identification.InputName={'Motor torque'};
figure(1)
plot(identification)
grid on

freq_resp_ident = spafdr(identification);
figure(2)
bode_opts = bodeoptions('cstprefs');
bode_opts.PhaseWrapping = 'on';

h=bodeplot(freq_resp_ident, bode_opts);
hold on
showConfidence(h,3)
grid on

%%
peso=ones(length(freq_resp_ident.Frequency),1);
wpeso0=5;    ;
wpeso1=50;
peso(freq_resp_ident.Frequency<wpeso0)=1e-5;
peso(freq_resp_ident.Frequency>wpeso1)=1e-5;

Jm=0.1;
Jl=2;
k=2000;
c=10;
cm=0.2;
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
modello_grey=greyest(freq_resp_ident,sys,grey_opt);

opts=ssestOptions('WeightingFilter',peso,'EnforceStability',1);
modello_continuo = ssest(freq_resp_ident,4,opts);
modello_discreto = ssest(freq_resp_ident,4,'Ts',Ts,opts);


figure
bode_opts = bodeoptions('cstprefs');
bode_opts.PhaseWrapping = 'on';

h=bodeplot(freq_resp_ident, bode_opts);
hold on
showConfidence(h,3)
bode(modello_continuo,modello_grey, bode_opts)

plot([wpeso0 wpeso0],ylim,'--k')
plot([wpeso1 wpeso1],ylim,'--k')

hold off
grid on
xlim([1e-1 1e4])

legend('Identification','Modello continuo','Modello grey')