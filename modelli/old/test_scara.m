clear all;close all;clc

robot=getScaraRobot;


hm=[2 2];
JmInv=[5 5];
cm=[0 0];
dt=1e-3;
umax=[500; 500];


k=10000*[1 1];
h=200*[1 1];
Jm=[5 5];
system=RoboticSystem(dt,robot,hm,cm,umax,true,Jm,k,h);
system.setForwardDynamics(@fdCodegen_mex)

max_vel=4;
max_acc=20;
wpts = [0 .1 3 0;0 1 -2 -2];


[tvec,qsp,qsp_d,qsp_dd]=motionlaw(wpts,max_vel,max_acc,dt);

q=zeros(size(qsp,1),size(qsp,2));
qd=zeros(size(qsp,1),size(qsp,2));
qdd=zeros(size(qsp,1),size(qsp,2));
tau=zeros(size(qsp,1),size(qsp,2));
q(:,1)=qsp(:,1);

aval=-150+[0 -2];
A=[0 1;0 0];
B1=[0;1/(9.3)];
K1=place(A,B1,aval);
B2=[0;1/(7.09)];
K2=place(A,B2,aval);

Kp=diag([K1(1) K2(1)]);
Kv=diag([K1(2) K2(2)]);
timer_=tic;
for idx=1:length(tvec)-1
    y=system.computeOutput;
    q(:,idx)=y(1:2);
    qd(:,idx)=y(3:4);
    tau(:,idx)=Kp*(qsp(:,idx)-q(:,idx))+Kv*(qsp_d(:,idx)-qd(:,idx));
    system.updateState(tau(:,idx),tvec(idx));

    if mod(idx,100)==0
        system.show;
        drawnow
    end
end
fprintf('Executed in %f second\n',toc(timer_));

%%
figure(2)
subplot(4,1,1)
plot(tvec, qsp,'--',tvec,q)
xlabel('t')
ylabel('Positions')
legend('X','Y')
subplot(4,1,2)
plot(tvec, qsp_d,'--',tvec, qd)
xlabel('t')
ylabel('Velocities')
legend('X','Y')
subplot(4,1,3)
plot(tvec, qsp_dd, tvec, qdd)
xlabel('t')
ylabel('Acceleration')
legend('X','Y')
subplot(4,1,4)
plot(tvec, tau)
xlabel('t')
ylabel('Torques')
legend('X','Y')

return
figure
for idx=1:20:length(tvec)
    show(robot,qsp(:,idx));
    drawnow
end
