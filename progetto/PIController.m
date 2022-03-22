classdef PIController < BaseController 
    properties  (Access = protected)
        xi
        Kp
        Ki
        Kaw;
    end
    methods
        function obj=PIController(st,Kp,Ki)
            obj@BaseController(st);
            obj.xi=0;
            obj.Kp=Kp;
            obj.Ki=Ki;
            obj.Kaw=0.1*Ki; % guadagno antiwindup da tarare
        end
        function initialize(obj)
            obj.xi=0;
        end
        function u=computeControlAction(obj,reference,y)
            e=reference-y;
            
            u=obj.xi+obj.Kp*e;
            if (u>obj.umax)
                usat=obj.umax;
            elseif (u<-obj.umax)
                usat=-obj.umax;
            else
                usat=u;
            end
            obj.xi=obj.xi+obj.Ki*obj.st*e+obj.Kaw*obj.st*(usat-u);
            
            u=usat;
        end
    end
end