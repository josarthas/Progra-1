#include <stdio.h>
int main(){
int a=0,b=0,x,p=0,im=0;
    while(a<=0){
printf("Dame numero de inicio\n");
scanf("%i",&a);
if (a<0)
printf("El numero debe ser positivo\n");}

 while(b<=0 || b<a) {
printf("Dame numero para finalizar\n");
scanf("%i",&b);
if (b<0)
printf("El numero debe ser positivo\n");
if(b<a)
printf("El numero debe ser mayor a:%i\n",a);
    
}

for(x=a;x<=b;x++){
if (x%2==0)
p++;
else{
im++;}
    
}
printf("El total de numeros pares e:%i\n",p);
printf("El total de numeros impares es:%i\n",im);
return 1;}
