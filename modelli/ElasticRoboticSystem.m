classdef ElasticRoboticSystem < MechanicalSystem
    properties  (Access = protected)
        robot
        njoints
        n_controlled_joints
        h
        c
        k
        controlled_joints
        forwardDynamics
    end

    methods  (Access = public)
        function obj=ElasticRoboticSystem(st,robot,k,h,c,controlled_joints,umax)
            obj@MechanicalSystem(st); % uso il costruttore parente
            robot.DataFormat = 'column';
            obj.robot=robot;

            obj.njoints=length(robot.randomConfiguration);
            obj.n_controlled_joints=sum(controlled_joints);
            obj.num_input=obj.n_controlled_joints;
            obj.num_output=obj.n_controlled_joints;

            obj.h=diag(h);
            obj.c=c;
            obj.k=diag(k);
            obj.umax=umax;
            obj.controlled_joints=controlled_joints;

            obj.order=obj.njoints*2; % pos vel del link

            obj.x0=zeros(obj.order,1);
            obj.x=zeros(obj.order,1);
            obj.forwardDynamics=@(q,qd,tau)forwardDynamics(obj.robot,q,qd,tau); % usa la dinamica diretta non autogenerata (lenta)
        end

        function setForwardDynamics(obj,forwardDynamics)  % usa la din.diretta autogenerata
            obj.forwardDynamics=forwardDynamics;
        end

        function show(obj) % visualizzare il robot
            ql=obj.x(1:obj.njoints);
            show(obj.robot,ql);
        end

        function output_names=getOutputName(obj)
            for idx=1:obj.n_controlled_joints
                output_names{idx}=sprintf('position_%d',idx);
                output_names{idx+obj.n_controlled_joints}=sprintf('velocity_%d',idx);
            end
        end

        function input_names=getInputName(obj)
            for idx=1:obj.n_controlled_joints
                input_names{idx}=sprintf('torque_%d',idx);
            end
        end

        function full_pos=fullJointPosition(obj)
            full_pos=obj.x(1:obj.njoints);
        end

    end



    methods  (Access = protected)
        function Dx=stateFunction(obj,x,u,t)

            ql=x(1:obj.njoints);  % pos
            qld=x((1:obj.njoints)+obj.njoints); %vel
            u=max(min(obj.umax,u),-obj.umax);
            tau=zeros(obj.njoints,1);
            tau(obj.controlled_joints>0)=u;

            tau=tau-obj.k*ql-obj.h*qld;
            qldd = obj.forwardDynamics(ql,qld,tau); %% din.diretta   acc=.......()
            Dx=[qld;qldd];
        end
        function y=outputFunction(obj)
            y=obj.x([obj.controlled_joints;obj.controlled_joints]>0);
        end
    end
end