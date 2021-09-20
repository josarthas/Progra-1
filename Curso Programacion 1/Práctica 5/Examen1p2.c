#include<stdio.h>
int main(){
  int x,dec,bin,decaux,mult;
  mult=1;
  bin=0;
  printf("Ingrese número decimal \n" );
  scanf("%d",&dec);
  x=dec;
  do {
    decaux=dec/2;
    bin=bin+((dec%2)*mult);
    mult=mult*10;
    dec=decaux;
  } while(decaux>0);
  printf("El binario de %d es %d\n",x,bin);
}
