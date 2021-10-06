//include "/usr/include/linux/math.h"
#include <stdio.h>
#include "test1.h"
#include "../glibc/math/math.h"
//#ifndef TEST1_H
//#define TEST1_H

struct vecteur {
    float x_v;
    float y_v;
    float phi_v;
};
/*
struct matrice {
    struct vecteur x_m;
    struct vecteur y_m;
    struct vecteur z_m;
};
struct vecteur multiplication_matrice_vecteur(struct matrice, struct vecteur) {
	multiplication_vecteur_vecteur();
	multiplication_vecteur_vecteur();
	multiplication_vecteur_vecteur();
};
*/
void main(void) {

// 09/12/2019 à 11:53 d'après le schéma numérique produit avec Maple 2019 entre le 04/12/2019 et le 09/12/2019
int V = 109;
int dt = 1;
int l = 5;
int x0 = 0;
int y0 = 0;
int phi0 = 0;
//fd = mopen(TMPDIR+'/text.txt','wt');
//mfprintf(fd,'hello %s %d.\n','world',1);
//mfprintf(fd,'hello %s %d.\n','scilab',2);
printf("ceci est un test.\n");
int i;
for (i=0; i<1000; i++) {
printf("ceci est un test..\n");
//for k = 0:100
// dphi/dt = tan(0.01*t)/l
float phi = (tan(0.01*i)/l)*dt + phi0;
printf("La valeur de l'orientation du vehicule vaut : %f\n", phi);
//disp(phi)
// dx/dt = V*cos(phi)
float x = V*cos(phi)*dt + x0;
printf("La valeur de la position en x du vehicule vaut : %f\n", x);
//plot(i,x);
//disp(x)
// dy/dt = V*sin(phi)
float y = V*sin(phi)*dt + y0;
printf("La valeur de la position en y du vehicule vaut : %f\n", y);
//disp(y)
//plot(x,y);//,'ro');
//X = [x; y; phi];
//U = [V; 0.01*i];

//disp("Etat du véhicule : ")
//disp(X)
//disp("Commande : ")
//disp(U)
/*
k = 1;
phi(i, k) = phi(i);
*/
// Linear approximation done here
//A = [1 ,0 ,-V*sin(phi)*dt; 0 ,1 ,V*cos(phi)*dt; 0 ,0 ,1];
float x_app = x -V*sin(phi)*dt*phi;
float y_app = y +V*cos(phi)*dt*phi;
float phi_app = phi;
printf("La valeur de l'approximation de la position en x du vehicule vaut : %f\n", x_app);
printf("La valeur de l'approximation de la position en y du vehicule vaut : %f\n", y_app);
printf("La valeur de l'approximation de la position en phi du vehicule vaut : %f\n", phi_app);
//B = [cos(phi)*dt, 0; sin(phi)*dt, 0; tan(0.01*i)*dt/l, V*dt/(l*cos(0.01*i)^2)];
float u_x = V*cos(phi)*dt;
float u_y = 0.01*i*sin(phi)*dt;
float u_phi = V*tan(0.01*i)*dt/l +0.01*i*V*dt/(l*cos(0.01*i)*cos(0.01*i));
printf("La valeur de l'approximation de la position en x du vehicule avec l'entree en x vaut : %f\n", x_app +u_x);
printf("La valeur de l'approximation de la position en y du vehicule avec l'entree en y vaut : %f\n", y_app +u_y);
printf("La valeur de l'approximation de la position en phi du vehicule avec l'entree en phi vaut : %f\n", phi_app +u_phi);
//C = [1, 0, 0; 0, 1, 0; 0, 0, 1];
//Xapp = A*X +B*U;
//plot(Xapp(1,:),Xapp(2,:),'g+-');
//disp("Etat approximé du véhicule : ")
//disp(Xapp)

//Y = C*X;
//disp(Y)
//end;

//mfprintf(fd,'This line is built with a column vector (26:28) %d.\n',[26:28].');
//mfprintf(fd,'This line is built with a row vector (26:28) %d.\n',[26:28]);
//mfprintf(fd,'This line is built with a matrix %.3f.\n',Xapp);
//mfprintf(fd,'This line is built with a matrix %.3f.\n',Y);
 }
//mclose(fd);

//plot(x,y,'ro');


}
//eof