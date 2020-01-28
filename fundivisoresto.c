#include <stdio.h>
int c;
    int dt();
    int dt(int *x){
        int a,b,c=0;
        a= *x;
        
    for(b=1;b<=a;b++){
       if(a%b==0)     
        c=c+1;
    }
         return c;
         }        
        
int main (){
int a,b=1;
    printf("Dame el numero \n");
    scanf("%i",&a);
c=dt(&a);
    printf("El numero de divisores enteros es:%i",c);
    printf("\n");
    return 1;
    }
