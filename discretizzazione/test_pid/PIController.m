classdef PIController < BaseController 
    properties  (Access = protected)
        xi
        Kp
        Ki
    end
    methods
        function obj=PIController(st,Kp,Ki)
            assert(isscalar(Kp));
            assert(Kp>=0);
            assert(isscalar(Ki));
            assert(Ki>=0);
            assert(isscalar(st));
            assert(st>0);
            
            obj@BaseController(st);
            obj.xi=0;
            obj.Kp=Kp;
            obj.Ki=Ki;


        end
        
        function obj=initialize(obj)
            obj.xi=0;
        end

        function obj=starting(obj,reference,y,u)
            assert(isscalar(reference));
            assert(isscalar(y));
            assert(isscalar(u));
            
            % u=xi+Kp*e -> xi=u-Kp*e
            e=reference-y;
            obj.xi=u-obj.Kp*e;
        end

        function u=computeControlAction(obj,reference,y)
            assert(isscalar(reference));
            assert(isscalar(y));
            
            e=reference-y;
            
            u=obj.xi+obj.Kp*e;

            if (u>obj.umax)
                u=obj.umax;
                if (e<0)
                    obj.xi=obj.xi+obj.Ki*obj.st*e;
                end
            elseif (u<-obj.umax)
                u=-obj.umax;
                if (e>0)
                    obj.xi=obj.xi+obj.Ki*obj.st*e;
                end
            else
                obj.xi=obj.xi+obj.Ki*obj.st*e;
            end

        end
    end
end