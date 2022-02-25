function qdd = fdCodegen(q,qd,tau)
	%#codegen
    robot=getScaraRobot;
	qdd = forwardDynamics(robot,q,qd,tau);

end 