clear all;close all;clc;

s=tf('s');

P=(s^2+2*0.2*16*s+16^2)/( (s^2+2*0.5*20*s+20^2)*(s^2+2*0.05*50*s+50^2)*(s^2+2*0.08*120*s+120^2) * (1*s+1));
P=10*P/abs(freqresp(P,3));

omega=logspace(0,3,50)';

frP=freqresp(P,omega);
frP=frP(:)+0.001*randn(length(omega),1);
frP(omega<5)=frP(omega<5)+10*randn(length(omega(omega<5)),1);

st=1e-3;
freq_resp=idfrd(frP,omega,st); % Y(i*omega)/U(i*omega

bode_opts = bodeoptions('cstprefs');
bode_opts.PhaseWrapping = 'on';
hold on
bode(freq_resp,bode_opts)

wl=5;
wh=100;
peso=ones(length(freq_resp.Frequency),1);
peso(freq_resp.Frequency<wl)=1e-5;
peso(freq_resp.Frequency>wh)=1e-5;
opts=ssestOptions('WeightingFilter',peso,'EnforceStability',1);
md3 = ssest(freq_resp,3,'Ts',st,opts);
md5 = ssest(freq_resp,5,'Ts',st,opts);

bode(md3)
bode(md5)
legend('Measured','Model 3 order','Model 5 order')
grid on

%%
figure
compare(freq_resp,md5)
grid on
%%
idxs=and(freq_resp.Frequency>=wl,freq_resp.Frequency<=wh);

omega_interessante=freq_resp.Frequency(idxs);

measured=freqresp(freq_resp,omega_interessante);
measured=measured(:);
estimated=freqresp(md5,omega_interessante);
estimated=estimated(:);

corr(abs(estimated),abs(measured))

corr(angle(estimated),angle(measured))
