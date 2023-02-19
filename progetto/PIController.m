classdef PIController < BaseController 
    properties  (Access = protected)
        xi
        Kp
        Ki
        Kaw;
        a
        u_filtrata
    end
    methods
        function obj=PIController(st,Kp,Ki)
            obj@BaseController(st);
            obj.xi=0;
            obj.Kp=Kp;
            obj.Ki=Ki;
            obj.a=exp(-st*200);
            obj.u_filtrata=0;
            obj.Kaw=0.1*Ki; % guadagno antiwindup da tarare
        end
        
        function initialize(obj)
            obj.xi=0;
        end

        function u=computeControlAction(obj,reference,y,uff)
            e=reference-y;
            
            u_no_filt=obj.xi+obj.Kp*e+uff;
            
            % 1/(Tfiltro*s+1) -> a=exp(-Tc/Tfiltro) circa= 1-Tc/Tfiltro, b=1-a
            % y(k)=a*y(k-1)+b*u(k)   
            % se u=1 all'infinito
            % y=1
            % 1=a*1+b*1 -> b=1-a

            obj.u_filtrata= obj.a*obj.u_filtrata+(1-obj.a)*u_no_filt;
            u=obj.u_filtrata;
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