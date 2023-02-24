clear all;close all;
filename='collabot_freqident_JointState__joint_states.bin';

ncols=6*3*3+1;


Ts=1e-3;
tic

data_in=bin_convert(['~/.ros/' filename],ncols);
toc

data_out=bin_resampling({data_in},Ts);

logged_data=data_out{1};

t=logged_data(:,1);
t=t-t(1);
pos=logged_data(:,[(1:18)+1]);
vel=logged_data(:,[(1:18)+1+18]);
eff=logged_data(:,[(1:18)+1+18*2]);

iax=3;
subplot(2,1,1)
plot(t,pos(:,(1:2)+(iax-1)*3))
subplot(2,1,2)
plot(t,eff(:,3*(iax-1)+1))


joint3_identification=iddata(pos(:,(1:2)+(iax-1)*3),eff(:,3*(iax-1)+1),Ts);


joint3_identification.OutputName={'Motor position','Link position'};
joint3_identification.InputName={'Motor torque'};


joint3_freq_resp_ident = spafdr(joint3_identification);


figure
bode_opts = bodeoptions('cstprefs');
bode_opts.PhaseWrapping = 'on';

h=bodeplot(joint3_freq_resp_ident, bode_opts);
hold on
showConfidence(h,3)

save joint3_ident joint3_freq_resp_ident joint3_identification
