#include <stdio.h>
int main (){
int a,b=1,c=0;
    printf("Dame el numero \n");
    scanf("%i",&a);
        while (b!=a){
            if(a%b==0)
                c=c+1;
                b=b+1;
                }
printf("El numero de divisores enteros es:%i",c);
printf("\n");
return 1;
}
