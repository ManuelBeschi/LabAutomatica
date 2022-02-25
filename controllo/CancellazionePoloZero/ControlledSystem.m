classdef ControlledSystem < handle
    properties  (Access = protected)
        model
        controller
        time
        st
    end
    methods
        function obj=ControlledSystem(model)
            obj.model=model;
            obj.controller=[];
            obj.time=0;
            obj.st=model.getSamplingPeriod;
        end
        
        function setController(obj,controller)
            obj.controller=controller;
            assert(obj.controller.getSamplingPeriod==obj.model.getSamplingPeriod,'Controller sampling period is wrong');
        end
        
        function initialize(obj)
            obj.model.initialize;
            if ~isempty(obj.controller)
                obj.controller.inizialize;
            end
            obj.time=0;
        end
        
        function [y,t]=openloop(obj,control_action)
            t=obj.time;
            obj.time=obj.time+obj.st;
            y=obj.model.computeOutput;
            obj.model.updateState(control_action);
        end
        
        function [y,u,t]=step(obj,reference)
            t=obj.time;
            obj.time=obj.time+obj.st;
            y=obj.model.computeOutput;
            assert(~isempty(obj.controller),'Controller is not set');
            u=obj.controller.computeControlAction(reference,y);
            obj.model.updateState(u);
        end
        
        function st=getSamplingPeriod(obj)
            st=obj.st;
        end
        
        function score=evalution(obj)
            score=rand*100;
        end
    end
end