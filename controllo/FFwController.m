classdef FFwController < BaseController
    properties  (Access = protected)
        idyn
    end
    methods
        function obj=FFwController(st,idyn)
            obj@BaseController(st);
            obj.idyn=idyn;

            % crea il control vel jnt2
        end

        function setUMax(obj,umax)
            obj.umax=umax;

            umax_jnt1=umax(1);
            umax_jnt2=umax(2);
            
          
        end
        function u=starting(obj,reference,y,u)
            reference_position=reference(1:2);
            reference_velocity=reference(3:4);
            reference_acceleration=reference(5:6);
            position=y(1:2);
            velocity=y(3:4);
            
            
            tau_ff=idynRigid(reference_position(1),reference_position(2),...
                reference_velocity(1),reference_velocity(2),...
                reference_acceleration(1),reference_acceleration(2),...
                0); % payload (massa del carico trasportato)

            % fare lo starting dei control 

        end
        function u=computeControlAction(obj,reference,y)

            reference_position=reference(1:2);
            reference_velocity=reference(3:4);
            reference_acceleration=reference(5:6);
            position=y(1:2);
            velocity=y(3:4);

            tau_ff=idynRigid(reference_position(1),reference_position(2),...
                reference_velocity(1),reference_velocity(2),...
                reference_acceleration(1),reference_acceleration(2),...
                0);

            % calcolo dell'azione di feedback
            

            u(1,1)=tau_ff(1);
            u(2,1)=tau_ff(2);


        end
    end
end