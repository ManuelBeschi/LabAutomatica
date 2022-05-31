s=tf('s');
tau_filtro=0.6/5;
filtro=1/(tau_filtro*s+1);

step(filtro)