function robot=getElasticRobot()

J_motor=[0.1 0.1 3 0 0 0];
m_motor=0.5;

J_link=[0.1 0.1 0.6 0 0 0];
m_link=0.5;

link_length=0.3;


robot = rigidBodyTree('MaxNumBodies',5,'DataFormat','column');


motor1 = rigidBody('motor1');
motor1.Mass=m_motor;
motor1.CenterOfMass=[0,0,0];
motor1.Inertia=J_motor;

jnt_motor1 = rigidBodyJoint('jnt_motor1','revolute');
jnt_motor1.HomePosition = 0;
tform = trvec2tform([0,0,0]); % User defined
setFixedTransform(jnt_motor1,tform);
motor1.Joint = jnt_motor1;

addBody(robot,motor1,'base')

link1 = rigidBody('link1');
link1.Mass=m_link;
link1.CenterOfMass=[0,0.5*link_length,0];
link1.Inertia=J_link;

jnt_link1 = rigidBodyJoint('jnt_link1','revolute');
jnt_link1.HomePosition = 0;
tform = trvec2tform([0,0,0]); % User defined
setFixedTransform(jnt_link1,tform);
link1.Joint = jnt_link1;

addBody(robot,link1,'motor1')

motor2 = rigidBody('motor2');
motor2.Mass=m_motor;
motor2.CenterOfMass=[0,0,0];
motor2.Inertia=J_motor;

jnt_motor2 = rigidBodyJoint('jnt_motor2','revolute');
jnt_motor2.HomePosition = 0;
tform = trvec2tform([0,link_length,0]); % User defined
setFixedTransform(jnt_motor2,tform);
motor2.Joint = jnt_motor2;

addBody(robot,motor2,'link1')

link2 = rigidBody('link2');
link2.Mass=m_link;
link2.CenterOfMass=[0,0.5*link_length,0];
link2.Inertia=J_link;

jnt_link2 = rigidBodyJoint('jnt_link2','revolute');
jnt_link2.HomePosition = 0;
tform = trvec2tform([0,0,0]); % User defined
setFixedTransform(jnt_link2,tform);
link2.Joint = jnt_link2;

addBody(robot,link2,'motor2')


bodyEndEffector = rigidBody('endeffector');
tform_ee = trvec2tform([0,link_length,0]); % User defined
setFixedTransform(bodyEndEffector.Joint,tform_ee);
bodyEndEffector.Mass=1;
bodyEndEffector.Inertia=zeros(1,6);

addBody(robot,bodyEndEffector,'link2'); % Add body2 to body1
