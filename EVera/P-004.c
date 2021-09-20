#include <stdio.h>

int main() {
  int a,b,c,r1,r2;
  printf("Éste programa resuelve un sistema de ecuaciones cuadráticas usando la forma general\n");
  printf("Debe identificar los valores de a,b y c en la ecuación dada\n");
  printf("Ingrese el valor del término cuadrático a: ");
  scanf("%d",&a);
  printf("Ingrese el valor del término lineal b: ");
  scanf("%d",%b);
  printf("Ingrese el valor del término independiente c: ");
  scanf("%d",&c);

  if (a!=0) {
    if ((b*b)<(4*a*c))) {
      printf("%s\n", );
    }

  }
  else{
    printf("La ecuacion no tiene solucion\n");
  }


  return 0;
}
