#include<stdio.h>
int main(){
    int p,a;
    float d,s=0,b=1;
do{
printf("Dame la potencia fraccionaria de 2 con la que deseas trabajar \n");
scanf("%i",&p);
if(p<0)
    printf("Potencia inexistente\n");
}while(p<0);
printf("potencia    fraccion    suma\n");
for(a=1;a<=p;a++){
b=b*2;  
d=1/b;
s=s+d;
printf("%i       %f      %f\n",a,d,s);}
return 1;}
