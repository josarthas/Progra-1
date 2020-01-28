#include <stdio.h>
void DOLAR();
void DOLAR(float*x){
    float y,z;
    y=*x;
    z=y/19.61;
    printf("la cantidad de dolares que tienes es: %f", z);
    printf("\n");}
void EURO();
void EURO(float*x){
    float y,z;
    y=*x;
    z=y/21.76;
    printf("la cantidad de euros que tienes es:%f",z);
    printf("\n");}
int main (){
float a;
    printf("Dame la cantidad de pesos:\n");
    scanf("%f",&a);
DOLAR(&a);
    EURO(&a);
return 1;
}
