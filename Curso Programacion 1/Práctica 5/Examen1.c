#include<stdio.h>
int main() {
  int a,b,max,min;
  max=0;
  printf("De numeros positivos, salida=0");
  printf("Ingrese un numero" );
scanf("%d",&a );
if (a>max)
  max=a;
  min=a;
  b=a;
  while (b>0) {
    do {
      printf("Ingrese otro numero, salida=0\n");
      scanf("%d",&b );
    } while(b<0);
    if (b>max)
      max=b;
    if (b<min)
    min=b;
  }
  printf("Número mayor= %d\n",max );
  printf("Numero menor= %d\n",min );
  return 0;
}
