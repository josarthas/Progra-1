#include<stdio.h>
#define PI 3.14159;
int main(){
  float rad,area;
  printf("Ingrese el radio del círculo, debe ser positivo\n");
  scanf("%f", &rad);
  if (rad<=0) {
    printf("El radio es negativo\n");
  }
  else{
    area=rad*PI;
    printf("El área es: %f\n",area );
  }
  getchar();
  return(0);
}
