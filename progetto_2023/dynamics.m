%**************************************************************************
%       User documentation of any code that uses this code must cite the
%       Authors in both following articles:
%
%       (1) M. H. Korayem and S. R. Nekoo, �Finite-time state-dependent
%       Riccati equation for time-varying nonaffine systems: Rigid and
%       flexible joint manipulator control,� ISA transactions (54)
%       125-144, 2015.
%
%       (2) M. H. Korayem and S. R. Nekoo, �State-dependent differential
%       Riccati equation to track control of time-varying systems with
%       state and control nonlinearities,� ISA transactions (57)
%       117-135 2015.
%
%       Permission to modify this file (ONLY) and to distribute modified
%       code is granted, provided the above notices are retained, and a
%       notice that the code was modified is included with the above
%       statements.
%
%       NOTE: This MATLAB code is provided free of charge.
%       You may make copies of the codes, but this NOTICE must appear in
%       all copies.
%**************************************************************************
clc
clear
close all
% -------------------------------------------------------------------------
% This program was checked with the following versions
% MATLAB R2006a 7.2.0.232
% MATLAB R2008a 7.6.0.324
% MATLAB R2013b 8.2.0.7016
% This file is near to Schillig's notation:
% Schilling, R. J., "Fundamentals of Robotics: Analysis and Control,"
% Prentice Hall, 1990.
% Number of links----------------------------------------------------------
fprintf('Please select your robot number (a number between 1 to 9) in the following and press "Enter",\n');
Robot=input('Robot=');
switch Robot
    case 1
        n=1;
    case 2
        n=2;
    case 3
        n=3;
    case 4
        n=3;
    case 5
        n=5;
    case 6
        n=5;
    case 7
        n=5;
    case 8
        n=6;
    case 9
        n=3;
end
% Defining symbolic parametrs----------------------------------------------
alpha=sym(zeros(1,n));
x=sym(zeros(1,n));
a=sym(zeros(1,n));
ac=sym(zeros(1,n));
d=sym(zeros(1,n));
dc=sym(zeros(1,n));
Ixx=sym(zeros(1,n));
Iyy=sym(zeros(1,n));
Izz=sym(zeros(1,n));
m=sym(zeros(1,n));
kesi=sym(zeros(1,n));
i3=sym(zeros(1,n));
q=sym(zeros(1,n));
dq=sym(zeros(1,n));
RR=cell(1,n);
R=cell(1,n);
D=cell(1,n);
Ju=cell(1,n);
Jd=cell(1,n);
JJd=cell(1,n);
A=cell(1,n);
Ac=cell(1,n);
T=cell(1,n);
Tc=cell(1,n);
c_bar=cell(1,n);
D_bar=cell(1,n);
b=cell(1,n);
for i=1:n
    alpha(i)=sym(['alpha',int2str(i)],'real');
    x(i)=sym(['x',int2str(i)],'real');
    a(i)=sym(['a',int2str(i)],'real');
    ac(i)=sym(['ac',int2str(i)],'real');
    d(i)=sym(['d',int2str(i)],'real');
    dc(i)=sym(['dc',int2str(i)],'real');
    Ixx(i)=sym(['Ixx',int2str(i)],'real');
    Iyy(i)=sym(['Iyy',int2str(i)],'real');
    Izz(i)=sym(['Izz',int2str(i)],'real');
    kesi(i)=sym(['kesi',int2str(i)],'real');
    i3(i)=sym(['i3',int2str(i)],'real');
    m(i)=sym(['m',int2str(i)],'real');
    q(i)=sym(['q',int2str(i)],'real');
    dq(i)=sym(['dq',int2str(i)],'real');
end
g0=sym(zeros(1,3));
for i=1:1:3
    g0(i)=sym(['g0',int2str(i)],'real');
end
syms g mp real
% Switch Robot-------------------------------------------------------------
switch Robot
    case 1
        % D-H of 1 link planar arm n=1
        % D-H from: Schillig's book, page 226
        d(1)=0;
        dc(1)=0;
        alpha(1)=0;
        x(1)=q(1);
        kesi(1)=1;
        g0(1)=0;
        g0(2)=g;
        g0(3)=0;
        
    case 2
        % D-H of 2 links planar arm n=2
        % D-H from: Schillig's book, page 208
        d(1)=0;
        dc(1)=0;
        d(2)=0;
        dc(2)=0;
        alpha(1)=0;
        alpha(2)=0;
        x(1)=q(1);
        x(2)=q(2);
        kesi(1)=1;
        kesi(2)=1;
        g0(1)=0;
        g0(2)=g;
        g0(3)=0;
        
    case 3
        % D-H of 3 links SCARA n=3
        % D-H from: Schillig's book, page 213
        d(2)=0;
        dc(2)=0;
        a(3)=0;
        ac(3)=0;
        alpha(1)=pi;
        alpha(2)=0;
        alpha(3)=0;
        x(1)=q(1);
        x(2)=q(2);
        x(3)=0;
        d(3)=q(3);
        dc(3)=q(3);
        kesi(1)=1;
        kesi(2)=1;
        kesi(3)=0;
        g0(1)=0;
        g0(2)=0;
        g0(3)=g;
        
    case 4
        % D-H of 3 links Spherical n=3
        % D-H and constant parameters from: Korayem, M. H., Khademi, A. and
        % Nekoo, S. R., "A comparative study on SMC, OSMC and SDRE for robot
        % control," Proc. IEEE Second RSI/ISM International Conference on
        % Robotics and Mechatronics, Tehran, Iran, pp. 13-18, 2014.
        a(1)=0;
        ac(1)=0;
        a(2)=0;
        ac(2)=0;
        a(3)=0;
        ac(3)=0;
        alpha(1)=-pi/2;
        alpha(2)=pi/2;
        alpha(3)=0;
        x(1)=q(1);
        x(2)=q(2);
        x(3)=0;
        d(3)=q(3);
        dc(3)=q(3);
        kesi(1)=1;
        kesi(2)=1;
        kesi(3)=0;
        g0(1)=0;
        g0(2)=0;
        g0(3)=g;
        
    case 5
        % D-H of 5 links the Alpha II robot n=5
        % D-H from: Schillig's book, page 55-56
        d(2)=0;
        dc(2)=0;
        d(3)=0;
        dc(3)=0;
        d(4)=0;
        dc(4)=0;
        a(1)=0;
        ac(1)=0;
        a(4)=0;
        ac(4)=0;
        a(5)=0;
        ac(5)=0;
        alpha(1)=-pi/2;
        alpha(2)=0;
        alpha(3)=0;
        alpha(4)=-pi/2;
        alpha(5)=0;
        x(1)=q(1);
        x(2)=q(2);
        x(3)=q(3);
        x(4)=q(4);
        x(5)=q(5);
        kesi(1)=1;
        kesi(2)=1;
        kesi(3)=1;
        kesi(4)=1;
        kesi(5)=1;
        g0(1)=0;
        g0(2)=0;
        g0(3)=g;
        
    case 6
        % D-H of 5 links the RHINO XR3 robot n=5
        % D-H from: Schillig's book, page 62-64
        d(2)=0;
        dc(2)=0;
        d(3)=0;
        dc(3)=0;
        d(4)=0;
        dc(4)=0;
        a(1)=0;
        ac(1)=0;
        a(5)=0;
        ac(5)=0;
        alpha(1)=0;
        alpha(2)=-pi/2;
        alpha(3)=pi/2;
        alpha(4)=0;
        alpha(5)=-pi/2;
        x(1)=q(1);
        x(2)=q(2);
        x(3)=q(3);
        x(4)=q(4);
        x(5)=q(5);
        kesi(1)=1;
        kesi(2)=1;
        kesi(3)=1;
        kesi(4)=1;
        kesi(5)=1;
        g0(1)=0;
        g0(2)=0;
        g0(3)=g;
        
    case 7
        % D-H of 5 links the ATLAS II robot n=5
        % D-H and constant parameters from: Korayem, M. H. and Omoumi, A. K.,
        % "A novel experimental setup for Atlas II robot using Visual Basic,"
        % IEEE Proceedings of the Fourth Annual Conference on Mechatronics and
        % Machine Vision in Practice, 1997.
        d(2)=0;
        dc(2)=0;
        d(4)=0;
        dc(4)=0;
        a(1)=0;
        ac(1)=0;
        a(3)=0;
        ac(3)=0;
        a(4)=0;
        ac(4)=0;
        a(5)=0;
        ac(5)=0;
        alpha(1)=-pi/2;
        alpha(2)=pi/2;
        alpha(3)=-pi/2;
        alpha(4)=pi/2;
        alpha(5)=0;
        x(1)=q(1);
        x(2)=q(2);
        x(3)=0;
        d(3)=q(3);
        dc(3)=q(3);
        x(4)=q(4);
        x(5)=q(5);
        kesi(1)=1;
        kesi(2)=1;
        kesi(3)=0;
        kesi(4)=1;
        kesi(5)=1;
        g0(1)=0;
        g0(2)=0;
        g0(3)=g;
        
    case 8
        % D-H of 6 links the 6R robot n=6
        % D-H and constant parameters from: Korayem, M. H., Irani, M. and Nekoo,
        % S. R., "Analysis of manipulators using SDRE: A closed loop nonlinear
        % optimal control approach," Journal of Sciatica Iranica Transaction B:
        % Mechanical Engineering, vol. 17, no. 6, pp. 456-467, 2010.
        d(2)=0;
        dc(2)=0;
        d(3)=0;
        dc(3)=0;
        d(4)=0;
        dc(4)=0;
        d(5)=0;
        dc(5)=0;
        a(5)=0;
        ac(5)=0;
        a(6)=0;
        ac(6)=0;
        alpha(1)=-pi/2;
        alpha(2)=0;
        alpha(3)=0;
        alpha(4)=pi/2;
        alpha(5)=-pi/2;
        alpha(6)=0;
        x(1)=q(1);
        x(2)=q(2);
        x(3)=q(3);
        x(4)=q(4);
        x(5)=q(5);
        x(6)=q(6);
        kesi(1)=1;
        kesi(2)=1;
        kesi(3)=1;
        kesi(4)=1;
        kesi(5)=1;
        kesi(6)=1;
        g0(1)=0;
        g0(2)=0;
        g0(3)=g;
        
    case 9
        % D-H of 3 links the 3R robot n=3
        % D-H and constant parameters from: Korayem, M. H. and Nekoo,
        % S. R., "Finite-time state-dependent Riccati equation for time-varying
        % nonaffine Systems Rigid and flexible joint manipulator control,"
        % ISA Transactions, vol. 54, pp. 125-144, 2015.
        d(2)=0;
        dc(2)=0;
        d(3)=0;
        dc(3)=0;
        alpha(1)=-pi/2;
        alpha(2)=0;
        alpha(3)=0;
        x(1)=q(1);
        x(2)=q(2);
        x(3)=q(3);
        kesi(1)=1;
        kesi(2)=1;
        kesi(3)=1;
        g0(1)=0;
        g0(2)=0;
        g0(3)=g;
end
% Defining transformation matrices A---------------------------------------
fprintf('1- D-H parameters received\n');
for i=1:1:n
    A{i}=[cos(x(i)),-cos(alpha(i))*sin(x(i)),sin(alpha(i))*sin(x(i)),a(i)*cos(x(i));...
        sin(x(i)),cos(alpha(i))*cos(x(i)),-sin(alpha(i))*cos(x(i)),a(i)*sin(x(i));...
        0,sin(alpha(i)),cos(alpha(i)),d(i);...
        0,0,0,1];
    Ac{i}=[cos(x(i)),-cos(alpha(i))*sin(x(i)),sin(alpha(i))*sin(x(i)),ac(i)*cos(x(i));...
        sin(x(i)),cos(alpha(i))*cos(x(i)),-sin(alpha(i))*cos(x(i)),ac(i)*sin(x(i));...
        0,sin(alpha(i)),cos(alpha(i)),dc(i);...
        0,0,0,1];
    RR{i}=[cos(x(i)),-cos(alpha(i))*sin(x(i)),sin(alpha(i))*sin(x(i));...
        sin(x(i)),cos(alpha(i))*cos(x(i)),-sin(alpha(i))*cos(x(i));...
        0,sin(alpha(i)),cos(alpha(i))];
end
fprintf('2- Transformation matrices have been built\n');
T{1}=A{1};
Tc{1}=Ac{1};
R{1}=RR{1};
for i=2:1:n
    T{i}=T{i-1}*A{i};
    Tc{i}=T{i-1}*Ac{i};
    R{i}=R{i-1}*RR{i};
end
fprintf('3- Transformation matrix (base to tool) has been built\n');
% Derivation of dynamics---------------------------------------------------
for i=1:1:n
    c_bar{i}=simplify([Tc{i}(1,4);Tc{i}(2,4);Tc{i}(3,4)]);
    D_bar{i}=diag([Ixx(i);Iyy(i);Izz(i)]);
    D{i}=R{i}*D_bar{i}*R{i}';
    Ju{i}=jacobian(c_bar{i},q);
end
c_bar_e=simplify([T{n}(1,4);T{n}(2,4);T{n}(3,4)]);
Ju_e=jacobian(c_bar_e,q);
fprintf('4- Center of masses and upper part of J have been computed\n');
b{1}=[0;0;1]*kesi(1)*i3(1);
for i=2:1:n
    b{i}=R{i-1}(:,3)*kesi(i)*i3(i);
end
for i=1:1:n
    JJd{i}=jacobian(b{i},i3);
end
Jd{1}=JJd{1};
for i=2:1:n
    Jd{i}=Jd{i-1}+JJd{i};
end
fprintf('5- Lower part of J has been computed\n');
for i=1:1:n
    MM{i}=Ju{i}'*m(i)*Ju{i}+Jd{i}'*D{i}*Jd{i};
end
M{1}=MM{1};
for i=2:1:n
    M{i}=M{i-1}+MM{i};
end
M{n}=M{n}+Ju_e'*mp*Ju_e;
fprintf('6- Inertia matrix has been computed\n');
for i=1:1:n
    for k=1:1:3
        for j=i:1:n
            G{i}(k,j)=g0(k)*m(j)*Ju{j}(k,i);
        end
    end
end
fprintf('7- Gravity vector has been computed\n');
for i=1:1:n
    for k=1:1:n
        for j=1:1:n
            C{i}(k,j)=(diff(M{n}(i,j),q(k))-1/2*diff(M{n}(k,j),q(i)))*dq(k)*dq(j);
        end
    end
end
fprintf('8- Coriolis-centrifugal vector has been computed\n');
% Generating final matrices and vectors------------------------------------
for i=1:1:n
    C{i}=C{i};
    cc(i)=sum(sum(C{i}));
    G{i}=G{i};
    gg(i)=sum(sum(G{i}));
end
G_mp=g0*mp*Ju_e;
gg=gg'+G_mp';
fprintf('9- Simplified form of robot matrix and vectors have been computed\n');
if n<5
    Matrix_M=simplify(M{n})
    Vector_g=simplify(gg)
    Vector_c=simplify(cc')
else
    Matrix_M=M{n}
    Vector_g=gg
    Vector_c=cc'
end
for i=1:1:n
    for j=1:1:n
        CCm{i}=sum(C{i});
        CCd(i,j)=(CCm{i}(j)/dq(j));
    end
end
if n<5
    Matrix_C=simplify(CCd)
else
    Matrix_C=CCd
end
diary('Output_Manipulator_Dynamics.txt');
Matrix_M
Vector_g
Vector_c
Matrix_C
diary off