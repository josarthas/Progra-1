#include <stdio.h>

int main(){
    int a,b,d;
    float e;
    printf("Dame multiplicador\n");
    scanf("%i",&a);
    printf("Dame multiplicando \n");
    scanf("%i",&b);
        printf("multiplicador  multiplicando  ¿se sumara?  valor actual\n");
        if(a%2!=0)
        printf("%i                      %i           si        %i\n",a,b,b);
    else{
        printf("%i                      %i           no        0\n",a,b);}
    e=0;
    if(a%2!=0)
        e=e+b;
    do{
        a=a/2;
        b=b*2;
    if(a%2!=0)
        printf("%i                     %i           si       %f\n",a,b,e+b);
    else{
    printf("%i                      %i            no       %f\n",a,b,e);}
        if(a%2!=0)
            e=e+b;
    }while(a!=1);
    printf("\nLa multiplicacion es: %f \n",e);
    return 1;
}
