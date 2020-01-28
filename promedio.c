#include <stdio.h>
int main (){
int a,c,j,z;
float b,x,y;
printf("Dame el numero de calificaciones que se ingresaran");
printf("\n");
scanf("%d",&a);
c=0;
for (j=0;j<a;j++){
printf ("Dame la calificacion");
printf("\n");
scanf("%f",&b);
c=c+b;}
x=c/a;
z=int x;
y=x-z;
if(y<0.6){
z=z+1;}
if(z>=0 && z<=5){
printf("%i, es el promedio por  lo cual el resultado es: reprobado",z);
printf("\n");}
if(z>=6 && z<=8){
printf("%i, es el promedio por  lo cual el resultado es: suficiente",z);
printf("\n");}
if(z>=9){
printf("%i, es el promedio por  lo cual el resultado es:exelente",z);
printf("\n");}
return 1;
}

