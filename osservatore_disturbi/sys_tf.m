clear all;
syms A B C L Ld K H s x y v xd u r

v=H*(r-y)/s;
u=v-K*x;
eq=  s*x == A*x+B*u+L*y-L*C*x-B*xd;

x_sol=solve(eq,x)

u=simplify(v-K*x_sol)

Fdt_u_y=subs(u,[r xd y],[0 0 1])
Fdt_u_r=subs(u,[r xd y],[1 0 0])
Fdt_u_xd=subs(u,[r xd y],[0 1 0])