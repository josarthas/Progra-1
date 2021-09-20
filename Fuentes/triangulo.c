#include<stdio.h>
int main(){
 int a=1,b=1,c;
 printf("Ingresa la base\n");
 scanf("%i",&c);
 while(a<=c)
  {
  b=1;
  while(b<=a)
    {
    printf("*");
    b=b+1;
    } 
    printf("\n");
    a=a+1;
 }
 return 1;

}
