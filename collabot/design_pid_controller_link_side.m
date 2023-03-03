clear all;close all;clc
load modello_greybox_jnt2.mat
%%
torque_to_link=[0 1]*modello_grey;

%bode(modello_grey)

wc=1;

Ti=1/(wc*0.1);
Td=1/(wc*40);
s=tf('s');
Co=1+1/(Ti*s)+Td*s;

Kp=1/abs(freqresp(torque_to_link*Co,wc));

C=Kp*Co;
figure(1)
margin(C*torque_to_link)
%%
figure(2)
subplot(2,1,1)
step(feedback(torque_to_link*C,1))
title('Setpoint response')
subplot(2,1,2)
step(feedback(torque_to_link,C))
title('Disturbance responce')
