clear all;
clc;
close all;


[system,rigid_robot]=getRoboticSystem('Alfa');
%system.setForwardDynamics(@fdCodegen_ubuntu);
% bugfix mac momentaneo
system.setForwardDynamics(@fdCodegenMac)  
st=system.getSamplingPeriod;
cs=ControlledSystem(system);

t=(0:st:1)';

tau=[0*ones(length(t),1) 0*ones(length(t),1)];
output=zeros(length(t),4);

tic
for it=1:length(t)
    output(it,:)=cs.openloop(tau(it,:)');
end
toc
pos1=output(:,1);
pos2=output(:,2);

vel1=output(:,3);
vel2=output(:,4);

tau1=tau(:,1);
tau2=tau(:,2);
%%
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
