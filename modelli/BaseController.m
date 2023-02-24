classdef BaseController < handle
    properties  (Access = protected)
        st
        umax
    end
    methods
        function obj=BaseController(st)
            obj.st=st;
        end
        function obj=inizialize(obj)
        end

        function obj=starting(obj,reference,y,u)
        end

        function obj=stopping(obj,reference,y)
        end
        
        function setUMax(obj,umax)
            obj.umax=umax;
        end
        function u=computeControlAction(obj,reference,y)
            u=0*obj.umax;
        end
        function st=getSamplingPeriod(obj)
            st=obj.st;
        end
    end
end