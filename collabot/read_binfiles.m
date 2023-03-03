clear all;close all;

tests=findLoggedData;
complete_names={};
test_names={};
for itest=1:size(tests,1)
    if contains(tests.complete_name(itest),"joint_states")
        complete_names(end+1)=tests.complete_name(itest);
        test_names(end+1)=tests.test_name(itest);
    end
end

index_leading_jnt=2;

ijtn1=2;
ijtn2=3;
leading_joint=sprintf('joint%d',index_leading_jnt);
Ts=1e-3;

for itest=1:length(complete_names)
    filename=complete_names{itest};

    % time + (6 joints)*(pos+vel+acc)*(motor+link+spring)
    ncols=6*3*3+1;

    data_in=bin_convert(['~/.ros/' filename],ncols);
    data_out=bin_resampling({data_in},Ts);
    logged_data=data_out{1};

    t=logged_data(:,1);
    t=t-t(1);
    pos=logged_data(:,(1:18)+1);
    vel=logged_data(:,(1:18)+1+18);
    eff=logged_data(:,(1:18)+1+18*2);



    experiment_data=iddata([pos(:,(1:2)+(ijtn1-1)*3) ...
        vel(:,(1:2)+(ijtn1-1)*3) ...
        eff(:,3*(ijtn1-1)+1) ...
        pos(:,(1:2)+(ijtn2-1)*3) ...
        vel(:,(1:2)+(ijtn2-1)*3) ...
        eff(:,3*(ijtn1-1)+1) ], ...
        [eff(:,3*(ijtn1-1)+2) eff(:,3*(ijtn2-1)+2)],Ts);
    experiment_data.OutputName={'Jnt2 Motor position','Jnt2 Link position','Jnt2 Motor velocity','Jnt2 Link velocity','Jnt2 Motor torque FB',...
        'Jnt3 Motor position','Jnt3 Link position','Jnt3 Motor velocity','Jnt3 Link velocity','Jnt3 Motor torque FB',...
        };
    experiment_data.InputName={'Jnt2 Motor torque SP',...
        'Jnt3 Motor torque SP'
        };


    experiment_freqresp = spafdr(experiment_data);
    test_name=test_names{itest};
    save(sprintf('%s_%s',leading_joint,test_names{itest}),'experiment_freqresp','experiment_data','test_name','index_leading_jnt')
end