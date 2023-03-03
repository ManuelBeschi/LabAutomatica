clear all;clc;close all

% Questo codice MATLAB esegue un test su un controllore a retroazione di stato basato su un controllore proporzionale-integrale (PI) per un sistema dinamico discreto.
%
% In particolare, il test genera casualmente un valore per il guadagno proporzionale (Kp), il guadagno integrale (Ki) e la saturazione massima dell'ingresso (umax) del controllore PI, quindi genera un sistema dinamico casuale di ordine arbitrario e ne calcola la retroazione di stato discreta.
%
% Il test esegue quindi la simulazione del sistema in anello chiuso utilizzando sia la retroazione di stato calcolata tramite MATLAB che quella implementata manualmente utilizzando il controllore PI. La simulazione viene eseguita utilizzando moto browniano come ingresso di riferimento, quindi viene confrontato l'output del processo e l'azione di controllo tra le due simulazioni, verificando che siano uguali fino alla saturazione.
%
% Il test viene quindi ripetuto 100 volte con diversi valori casuali per il controllore PI e il sistema dinamico.

for itest=1:100
    st=1e-3;
    Kp=5*rand; % setto dei valori random
    Ki=5*rand; % setto dei valori random
    umax=10*rand;

    ctrl=PIController(st,Kp,Ki);
    ctrl.setUMax(umax);


    %% TEST CLOSE LOOP
    s=tf('s');

    ctrl_continuo=Kp+Ki/s;
    ctrl_discreto=c2d(ctrl_continuo,st);

    P_continuo=rss(4); % genero sistema random

    % considero solo sistemi strettamente proprio
    numero_poli=length(pole(P_continuo));
    numero_zeri=length(zero(P_continuo));

    ordine_relativo=numero_poli-numero_zeri;

    if (ordine_relativo==0) % non strettamente proprio, aggiungo un polo
        P_continuo=P_continuo/s;
    end


    P_discreto=c2d(P_continuo,st);
    [A,B,C,D]=ssdata(P_discreto);

    Y_over_R_discreto=feedback(P_discreto*ctrl_discreto,1);
    U_over_R_discreto=feedback(ctrl_discreto,P_discreto);

    Y_over_R_continuo=feedback(P_continuo*ctrl_continuo,1);
    U_over_R_continuo=feedback(ctrl_continuo,P_continuo);

    time=(0:st:30)';

% DA ChatGPT:    Il codice crea una sequenza di riferimento per un controllo a ciclo chiuso (closed-loop control) utilizzando una funzione di integrazione numerica.
% 
% In particolare, la funzione cumtrapz integra numericamente una sequenza di numeri casuali (generati da randn(length(time),1)), restituendo una sequenza di numeri che rappresentano la posizione (o lo stato) di un sistema che sta seguendo il percorso tracciato dalla sequenza di numeri casuali.
% 
% In altre parole, la sequenza di riferimento reference rappresenta un percorso casuale che il sistema deve seguire, e la funzione di integrazione numerica viene utilizzata per generare una sequenza di posizioni (o stati) corrispondenti a tale percorso. Tale sequenza verrà poi utilizzata per valutare le prestazioni del controllore a ciclo chiuso che viene testato nel resto del codice.
% 
% 
% 

    reference=cumtrapz(time,randn(length(time),1));

    y_close_loop_matlab_discreto=lsim(Y_over_R_discreto,reference,time);
    u_close_loop_matlab_discreto=lsim(U_over_R_discreto,reference,time);

    y_close_loop_matlab_continuo=lsim(Y_over_R_continuo,reference,time);
    u_close_loop_matlab_continuo=lsim(U_over_R_continuo,reference,time);


    x_processo=zeros(order(P_discreto),1);
    ctrl.initialize;

    y_close_loop_class=nan(length(time),1);
    u_close_loop_class=nan(length(time),1);
    for idx=1:length(time)
        y_close_loop_class(idx,1)=C*x_processo;
        u_close_loop_class(idx,1)=ctrl.computeControlAction(reference(idx),y_close_loop_class(idx,1));
        x_processo=A*x_processo+B*u_close_loop_class(idx,1);
    end


    figure(3)
    subplot(2,1,1)
    stairs(time,y_close_loop_matlab_discreto)
    hold on
    stairs(time,y_close_loop_matlab_continuo)
    stairs(time,y_close_loop_class)
    hold off
    grid on
    xlabel('time')
    ylabel('process output')
    legend('matlab discreto','matlab continuo','class')

    subplot(2,1,2)
    stairs(time,u_close_loop_matlab_discreto)
    hold on
    stairs(time,u_close_loop_matlab_continuo)
    stairs(time,u_close_loop_class)
    hold off
    grid on
    xlabel('time')
    ylabel('control action')
    legend('matlab discreto','matlab continuo','class')

    drawnow

    % check if control action is the same until saturation;
    idx_saturation=find(abs(u_close_loop_class)>=umax,1)-1;
    assert(norm(y_close_loop_matlab_discreto(1:idx_saturation)-y_close_loop_class(1:idx_saturation))<1e-4)
    assert(norm(u_close_loop_matlab_discreto(1:idx_saturation)-u_close_loop_class(1:idx_saturation))<1e-4)

end