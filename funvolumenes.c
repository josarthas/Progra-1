#include <stdio.h>
void esfera();
void esfera(){
    float r,v;
    printf("Dame el radio \n");
    scanf("%f",&r);
    r=r*r*r;
    v=3/4*3.14*r;
    printf("\n El volumen de la esfera es:%f \n",v);
    }

void cilindro();
void cilindro(){
    float r,v,h;
    printf("Dame el radio \n");
    scanf("%f",&r);
    printf("Dame la altura \n");
    scanf("%f",&h);
    r=r*r;
    v=3.14*r*h;
    printf("\n El volumen del cilindro es:%f \n",v);
    }
void cubo();
void cubo(){
    float r,v,h;
      printf("\n Dame la longitud del cubo \n");
                scanf("%f",&r);
                r=r*r;
                h=6*r;
                v=h*h*h;
                printf("\n El volumen del cubo es %f \n",v);
}
int main (){
int a=0,b;
float r,v,h;
    while(a!=4){
        printf("Elija la opcion que desea");
        printf("\n 1.-Vol.esfera \n 2.- Vol.cilindro \n 3.-Vol.cubo \n 4.-salir \n");
        scanf("%i",&a);
            if(a==1){
                esfera();
            }
            if(a==2){
                cilindro();
            }
            if(a==3){
              cubo();
                }
            }
        return 1;
}
