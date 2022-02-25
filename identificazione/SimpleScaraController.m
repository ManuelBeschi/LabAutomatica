classdef SimpleScaraController < BaseController
    properties  (Access = protected)
        Kp=diag([100 100]);
        Kv=diag([100 100]);
    end
    methods
        function u=computeControlAction(obj,reference,y)
            reference_position=reference(1:2);
            reference_velocity=reference(3:4);
            position=y(1:2);
            velocity=y(3:4);
            u=obj.Kp*(reference_position-position)+...
                obj.Kp*(reference_velocity-velocity);
            u=min(max(u,-obj.umax),obj.umax);
        end
    end
end