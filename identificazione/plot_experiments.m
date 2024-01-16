%clear all;close all;%clc

lista=dir('experiment_*.mat');

bode_opts = bodeoptions('cstprefs');
bode_opts.PhaseWrapping = 'on';
figure(1)
for idx=1:length(lista)
    if idx==1
        test=load(lista(idx).name);
        h=bodeplot(test.experiment_freqresp(1,1), bode_opts);
        hold on
        grid on
        showConfidence(h,3)
    else
        test(idx)=load(lista(idx).name);
        bodeplot(test(idx).experiment_freqresp(1,1), bode_opts);
    end
end
hold off