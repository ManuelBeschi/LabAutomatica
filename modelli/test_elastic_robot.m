clear all;
clc;
close all;

st=1e-3;
robot=getElasticRobot;
k=[0,10000,0,10000]';
h=[10,8,10,8]';
c=[10,0,10,0]';
umax=[500;500];
controlled_joints=[1 0 1 0]';
system=ElasticRoboticSystem(st,robot,k,h,c,controlled_joints,umax);


K=diag(k);
H=diag(h);
q=zeros(4,1);
J=robot.massMatrix(q);

A=[zeros(4) eye(4);
   -J\K -J\H];
B=[zeros(4);
   J\eye(4)];
C=eye(8);
D=zeros(8,4);
sys=ss(A,B,C,D);
damp(sys)
max_vel=4;
max_acc=20;
wpts = [0 .1 3 0;0 1 -2 -2];


[tvec,qsp,qsp_d,qsp_dd]=motionlaw(wpts,max_vel,max_acc,st);

q=zeros(size(qsp,1),size(qsp,2));
qd=zeros(size(qsp,1),size(qsp,2));
qdd=zeros(size(qsp,1),size(qsp,2));
tau=zeros(size(qsp,1),size(qsp,2));

full_q=zeros(2*size(qsp,1),size(qsp,2));
q(:,1)=qsp(:,1);

aval=-50+[0 -2];
A=[0 1;0 0];
B1=[0;1/(7.3+4.3)];
K1=place(A,B1,aval);
B2=[0;1/3.7+0.7];
K2=place(A,B2,aval);

Kp=diag([K1(1) K2(1)]);
Kv=diag([K1(2) K2(2)]);
timer_=tic;
for idx=1:length(tvec)-1
    y=system.computeOutput;
    full_q(:,idx)=system.fullJointPosition;
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

figure(3)
subplot(2,1,1)
plot(tvec,full_q(1:2:end,:))
subplot(2,1,2)
plot(tvec,full_q(2:2:end,:))
return
figure
for idx=1:20:length(tvec)
    show(robot,qsp(:,idx));
    drawnow
end
