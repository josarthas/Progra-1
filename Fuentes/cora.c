#include <stdio.h>
int main(){
int a,r,c=0;
float h,k,b;
char x;
while(c!=1){
do{
printf("Dame tu altura \n");
scanf("%f",&h);
if(h<=0)
printf("dame un valor posible\n mayor a cero\n");
}while(h<1);
    do{
    printf("Dame tu peso en kg \n");
    scanf("%f",&k);
    if(k<=0)
    printf("dame un valor posible\n mayor a cero\n");
    }while(k<1);
do{
printf("Dame tu edad \n");
scanf("%i",&a);
if(a<=0)
printf("dame un valor posible\nmayor a cero\n");    
}while(a<1);
b=k/(h*h);
printf("Tu IMC es:%f\n",b);
if(a<45){
if(b<22.0)
printf(" tu riesgo de enfermedades al corazon es bajo \n");
if(b>=22.0)
printf(" tu riesgo de enfermedades al corazon es medio \n");
}
if(a>45){
if(b<22.0)
printf(" tu riesgo de enfermedades al corazon es medio \n");
if(b>=22.0)
printf(" tu riesgo de enfermedades al corazon es alto \n");
}
if(a==45)
printf("No puedes consultar este programa, consulta a un medico \n");
do{printf("¿Desea sacar otro calculo? \n(1)si\n(2)no\n");
scanf("%i",&r);
if(r<1 || r>2)
    printf("Valor no posible intentelo de nuevo");}while(r<1 || r>2);
if(r==2)
c=1;
}
return 1;
}
