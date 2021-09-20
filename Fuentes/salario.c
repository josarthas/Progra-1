#include <stdio.h>
int main (){
int c=0;
float a,b,d;
while(c!=1){
printf("Dame salario del trabajador \n");
scanf("%f",&a);
if (a<=0){
c=1;}
if(a<1000){
b=(15*a)/100;
d=a+b;
}
if(a>=1000){
b=(12*a)/100;
d=a+b;
}
if (c==0){
printf("El salario con aumento es: %f",d);
printf("\n");
}
}
return 1;
}
