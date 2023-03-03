clear all;close all;

load joint2_ident.mat
fr1=joint2_freq_resp_ident;
load joint2_ident2.mat
fr2=joint2_freq_resp_ident;
load joint2_ident3.mat
fr3=joint2_freq_resp_ident;

figure
bode_opts = bodeoptions('cstprefs');
bode_opts.PhaseWrapping = 'on';

h=bodeplot(fr1, bode_opts);
hold on
showConfidence(h,3)
bodeplot(fr2, bode_opts);
bodeplot(fr3, bode_opts);

legend('esteso','ripiegato senza controllo sul 3','ripiegato')
xlim([1 200])