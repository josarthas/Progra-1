#include<stdio.h>

int main(){
  float cam, mon, cos;
  printf("Ingrese el costo del producto\n");
  scanf("%f",&cos );
  if (cos<=0) {
    printf("El costo es incorrecto\n");
  }
  else{
    printf("Ingrese el monto pagado\n");
    scanf("%f",&mon);
    if (mon<cos){
      printf("Monto insuficiente\n");
    }
    else{
      cam=mon-cos;
      printf("El cambio es: %2f\n",cam);
    }
  }
  getchar();
  return(0);
}
