clear all

robot=getScaraRobot;

q=robot.randomConfiguration;
ndof=length(q);
qd=randn(ndof,1);
tau=randn(ndof,1);

codegen fdCodegen -args {q,qd,tau}

time=0;
mexTime=0;
for idx=1:1%00
    q=randn(2,1);
    qd=randn(2,1);
    tau=randn(2,1);

    time = time + timeit(@() fdCodegen(q,qd,tau));
    mexTime = mexTime + timeit(@() fdCodegen_mex(q,qd,tau));
end

fprintf('speed up with code gen %f\n',time/mexTime);