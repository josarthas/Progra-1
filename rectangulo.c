#include <stdio.h>
int main ()
{
int a,b,c,d;
    do{printf("Dame la altura del rectangulo");
    scanf("%i",&a);}
    while(a<1);
   do{ 
       printf("Dame el ancho del rectangulo"); 
    scanf("%i",&b);
    }
    while(b<1);
        for(c=1; c<=a; c++)
        {
            for(d=1; d<=b; d++)
            {
            printf("* ");
            }
            printf("\n");
        }
        return 1;
        }
