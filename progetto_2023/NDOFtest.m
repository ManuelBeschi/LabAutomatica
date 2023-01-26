function y = NDOFtest(alpha,a,d,theta,rob,m,varargin)
%%%%%%%%    The vector rob should be defined such that rob(i)=1 if the i_th joint
%%%%%%%%    is prismatic (q_i=d_i) and rob(i)=0 if i_th joint is revolute
%%%%%%%%    (q_i=theta_i):
%%%%%%%%    Joint i: revolute ==> rob(i)=0
%%%%%%%%    Joint i: prismatic ==> rob(i)=1
%%%%%%%%    Hence, rob must only contain 0 or 1 and has the same length as other vectors have.
%% PARAMETERs AND SYMBOLs
g=sym('g');
N = length(rob);  % Degrees of Freedom
for i=1:N
   pc{i}=varargin{i};
end
for i=1:N
    if alpha(i)==0
        Salpha(i)=0;
        Calpha(i)=1;
    elseif abs(alpha(i))==pi/2
        Calpha(i)=0;
        if alpha(i)==pi/2
            Salpha(i)=1;
        elseif alpha(i)==-pi/2
            Salpha(i)=-1;
        end
    elseif abs(alpha(i))==pi
        Salpha(i)=0;
        Calpha(i)=-1;
    else
        Salpha(i)=sin(alpha(i));
        Calpha(i)=cos(alpha(i));
    end
end
q=sym('q',[1,N]);       % 1st group of state variables (joints' angle or position)
dq=sym('dq',[1,N]);     % 2nd group of state variables (joints' velocity)
%% ROTATION MATRICEs
for i=1:N
    if rob(i)==0    % Rotation matrix of revolute joints
        R{i}=[cos(q(i)) -sin(q(i)) 0;
             sin(q(i))*Calpha(i) cos(q(i))*Calpha(i) -Salpha(i);
             sin(q(i))*Salpha(i) cos(q(i))*Salpha(i)  Calpha(i)];
    elseif rob(i)==1    % Rotation matrix of prismatic joints
        R{i}=[cos(theta(i)) -sin(theta(i)) 0;
             sin(theta(i))*Calpha(i) cos(theta(i))*Calpha(i) -Salpha(i);
             sin(theta(i))*Salpha(i) cos(theta(i))*Salpha(i)  Calpha(i)];
    end
end
%% POSITION VECTORs
for i=1:N
    if rob(i)==0    % Position vector of revolute joints
        p{i}=[a(i);-Salpha(i)*d(i);Calpha(i)*d(i)];
    elseif rob(i)==1    % Position vector of prismatic joints
        p{i}=[a(i);-Salpha(i)*q(i);Calpha(i)*q(i)];
    end
end
%% COMs' POSITION VECTORs
for i=1:N
    pic{i}=p{i}+R{i}*pc{i};     % pic{i}={i-1}pc_i: position vector of ith link's CoM, expressed in frame {i-1}.
end
poc{1}=pic{1};
for i=2:N
    nic=pic{i};      % poc{i}={o}pc_i: position vector of ith link's CoM, expressed in base frame {o}.
    for j=i-1:-1:1
        nic=p{j}+R{j}*nic;
    end
    poc{i}=nic;
end
Pee = poc{N};
%% ROTATION MATRICEs FROM BASE
R0{1}=R{1};
for i=2:N
    R0{i}=simplify(R0{i-1}*R{i});
end
Ree = R0{N};
%% LINEAR PART of JACOBIANs
for i=1:N
    Jv{i}=simplify(jacobian(poc{i},q));
end
%% ANGULAR PART of JACOBIANs
if rob(1)==0
    Jo{1}=simplify([R0{1}(:,3),zeros(3,N-1)]);
elseif rob(1)==1
    Jo{1}=zeros(3,N);
end
for i=2:N
    if rob(i)==1
        Jo{i}=zeros(3,N);
    elseif rob(i)==0
        Jo{i}=Jo{i-1};
        Jo{i}(:,i)=R0{i}(:,3);
    end
end
Jee = [Jv{N};Jo{N}];
%% ROBOT's INERTIA (MASS) MATRIX
for i=N+1:2*N
    In{i-N}=varargin{i};
end
for i=1:N
    Mass{i}=simplify(m(i)*Jv{i}.'*Jv{i}+Jo{i}.'*R0{i}*In{i}*R0{i}.'*Jo{i});
end
M=0;
for i=1:N
    M=simplify(Mass{i}+M);
end
% M=M{N};
%% CORIOLIS and CENTRIFUGAL MATRIX
for k=1:N
   for s=1:N
       c(1)=.5*((diff(M(k,s),q(1))+diff(M(k,1),q(s))-diff(M(1,s),q(k)))*dq(1));
      for i=2:N
       c(i)=.5*((diff(M(k,s),q(i))+diff(M(k,i),q(s))-diff(M(i,s),q(k)))*dq(i))+c(i-1);
      end
      C(k,s)=simplify(c(N));
   end
end
%% POTENTIAL ENERGIES and GRAVITY VECTOR
P(1)=m(1)*[0,0,g]*poc{1};
for i=2:N
    P(i)=P(i-1)+m(i)*[0,0,g]*poc{i};
end
P=simplify(P(N));
%G=[];
for i=1:N
    G(i)=simplify(diff(P,q(i)));
end
%% DYNAMIC EQUATIONs of MOTION
% % % % %           M(q)*ddq + C(q,dq)dq + G(q) = u
save ('RobotMatrices.mat','Pee','Ree','Jee','M','C','G');
clear
y = 0;
end