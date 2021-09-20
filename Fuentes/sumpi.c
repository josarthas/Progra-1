#include <stdio.h>
int main (){
int a,b,c=0,d=0,e=0;
    printf("Dame el primer valor \n");
    scanf("%i",&a);
    printf("Dame el segundo valor \n");
    scanf("%i",&b);
        if(a>b){
            c=a;
            a=b;
            b=c;}
                while(a!=b){
                    while(a!=(a+b)/2 && b!=(a+b)/2){
                        a=a+1;
                        b=b-1;
                        if (a%2==0)
                            d=d+a;
                        if (b%2==0)
                            d=d+b;
                        if (a%2!=0)
                            e=e+a;
                        if (b%2!=0)
                            e=e+b;
                            }
                            }
                                        if(a%2==0)
                                            d=d-a;
                                        if(b%2==0)
                                            d=d-b;  
                                        if(a%2!=0)
                                            e=e-a;
                                        if(b%2!=0)
                                            e=e-b;  
    printf(" La suma de los pares es:%i \n",d);
    printf(" La suma de los impares es:%i \n",e);
return 1;
}
