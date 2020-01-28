#include <stdio.h>
void quince();
void quince(float *x){
    float b,d,o;
    o= *x;
    b=(15*o)/100;
    d=o+b;
    printf("El salario con aumento es: %f",d);
    printf("\n");
    }
void doce();
void doce(float *x){
    float b,d,o;
    o= *x;
    b=(12*o)/100;
    d=o+b;
    printf("El salario con aumento es: %f",d);
    printf("\n");
    }
int main (){
int c=0;
float a,b,d;
do{
printf("Dame salario del trabajador \n");
scanf("%f",&a);
if(a<1000 && a>0){
quince(&a);
}
if(a>=1000){
doce(&a);
}
if (a<=0){
c=1;}

}while(c!=1);

return 1;
}
