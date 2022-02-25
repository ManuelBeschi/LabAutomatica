function qConfig = ikCodegen(endEffectorName,tform,weights,initialGuess)
	%#codegen
    
    robot=getScaraRobot;

	ik = inverseKinematics('RigidBodyTree',robot);
	
	[qConfig,~] = ik(endEffectorName,tform,weights,initialGuess); 
end 