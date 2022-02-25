classdef system2 < MechanicalSystem
    properties  (Access = protected)
        A
        B
        C
        static_friction
    end
    
    methods  (Access = public)
        function obj=system2(st)
            obj@MechanicalSystem(st);
            obj.st=st;
            obj.x=zeros(4,1);
            obj.x0=zeros(4,1);
            
            Jm=2e-2;
            Jc=8e-2;
            obj.umax=20;
            k=500;
            h=.2;
            km=100;
            hm=.03;
            hc=.01;
            
            obj.static_friction=0.3;
            
            obj.A=[0 0 1 0;
                0 0 0 1;
                -(k+km)/Jm k/Jm -h/Jm-hm/Jm h/Jm;
                k/Jc -k/Jc h/Jc -(h+hc)/Jc];
            obj.B=[0;
                0;
                1/Jm;
                0];
            obj.C=[1 0 0 0];
            
            obj.order=size(obj.A,2);
            obj.num_input=size(obj.B,2);
            obj.num_output=size(obj.C,1);
            obj.sigma_y=[1e-6;1e-3];
        end
        
    end
    
    methods  (Access = protected)
        function Dx=stateFunction(obj,x,u)
            Dx=obj.A*x+obj.B*(u-obj.static_friction*tanh(obj.x(3)*30));
        end
        function y=outputFunction(obj)
            y=obj.C*obj.x+obj.sigma_y.*randn(length(obj.sigma_y),1);
        end
    end
end