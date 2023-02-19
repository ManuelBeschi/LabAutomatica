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

joint3_validation=iddata(output,input,Ts);


joint3_validation.OutputName={'Motor position','Link position'};
joint3_validation.InputName={'Motor torque'};


joint3_freq_resp_validation = spafdr(joint3_validation);


save joint3_validation joint3_freq_resp_validation joint3_validation
