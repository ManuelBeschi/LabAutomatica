classdef MechanicalSystem < handle
    properties  (Access = protected)
        x; % state vector
        x0; % initial value of the state vector
        st; % sampling periodi
        sigma_y=0; % noise standard deviation (if MIMO, it is a vector)
        t=0; % time
        umax=5; % maximum input
        
        order=2; % system order
        num_output=1; % number of system outputs
        num_input=1; % number of system inputs
    end
    
    methods  (Access = public)
        
        % obj=MechanicalSystem(st)
        % create a mechanical model with sampling period st
        function obj=MechanicalSystem(st)
            obj.st=st;
            obj.x=zeros(2,1);
            obj.x0=zeros(2,1);
            obj.order=2;
            obj.num_input=1;
            obj.num_output=1;
        end
        
        % (re)initialize the system to initial conditions
        function initialize(obj)
            obj.x=obj.x0;
            obj.t=0;
        end
        
        % compute y=g(x,u)
        function y=computeOutput(obj)
            y=obj.outputFunction();
        end
        
        % solve derivative(x)=f(x,u) during sampling period
        function updateState(obj,u)
            usat=obj.saturationControlAction(u);
            obj.odeSolver(usat,obj.st);
        end
        
        
        % return system sampling period
        function st=getSamplingPeriod(obj)
            st=obj.st;
        end
        
        % return number of system outputs
        function num_output=getOutputNumber(obj)
            num_output=obj.num_output;
        end
        
        % return number of system inputs
        function num_input=getInputNumber(obj)
            num_input=obj.num_input;
        end
    end
    
    methods  (Access = protected)
        
        % derivative(x)=f(x,u)
        function Dx=stateFunction(obj,x,u)
            Dx=0;
        end
        
        % ouput=g(x,u)
        function y=outputFunction(obj)
            y=obj.x+obj.sigma_y*randn(length(obj.sigma_y),1);
        end
        
        % ODE solver (using RK4 with integration step = 0.1 st)
        function odeSolver(obj,u,st)
            n=10;
            dt=st/10;
            % Runge Kutta 4
            for idx=1:n
                k_1 = obj.stateFunction(obj.x,u);
                k_2 = obj.stateFunction(obj.x+0.5*dt*k_1,u);
                k_3 = obj.stateFunction(obj.x+0.5*dt*k_2,u);
                k_4 = obj.stateFunction(obj.x+k_3*dt,u);
                obj.x=obj.x+(1/6)*(k_1+2*k_2+2*k_3+k_4)*dt;
            end
            
        end
        
        % saturate control action
        function usat=saturationControlAction(obj,u)
            if (u>obj.umax)
                usat=obj.umax;
            elseif (u<-obj.umax)
                usat=-obj.umax;
            else
                usat=u;
            end
        end
    end
end