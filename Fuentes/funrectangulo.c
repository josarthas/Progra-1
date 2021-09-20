#include <stdio.h>
void rec();
void rec(int *x,int*y){
    int a,b,c,d;
    a= *x;
    b=*y;
    for(c=1; c<=a; c++)
        {
            for(d=1; d<=b; d++)
            {
            printf("* ");
            }
            printf("\n");
        }
}
    
int main ()
{
int a,b,c,d;
    do{printf("Dame la altura del rectangulo\n");
    scanf("%i",&a);}
    while(a<1);
   do{ 
       printf("Dame el ancho del rectangulo\n"); 
    scanf("%i",&b);
    }
    while(b<1);
rec(&a,&b);        
        return 1;
        }
