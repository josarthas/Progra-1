#include <stdio.h>
int main (){
int a;
float b,c,d;
do{printf ("Dame la cantidad de vehiculos\n");
scanf("%i",&a);}while(a<1);
if(a>0){
printf("Dame la cantidad de litros de gasolina que necesita 1 tanque para estar lleno\n");
scanf ("%f",&b);
printf ("Dame el precio de la gasolina\n");
scanf("%f",&c);}
d=(a*b)*c;
printf("\n La cantidad de gasolina necesaria es:%f Litros", a*b);
printf("\n la cantidad de dinero que se gastara es:%f",d-(d*.16));
printf("\n la cantidad que se gastara en iva es:%f",d*.16);
printf("\n");
return 1;
}
