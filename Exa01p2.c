#include <stdio.h>

int main() {
  int cant,res;
  res=0;
  printf("Ingrese la cantidad para dar cambio\n");
  scanf("%d",&cant);
  res=(cant / 1000);
  if (res>0) {
      printf("Se requieren %d billetes de 1000\n",res);
    }
  cant= cant % 1000;
  res=(cant / 500);
  if (res>0) {
    printf("Se requieren %d billetes de 500\n",res);
    }
  cant= cant % 500;
  res=(cant / 200);
      if (res>0) {
          printf("Se requieren %d billetes de 200\n",res);
        }
  cant= cant % 200;
  res=(cant / 100);
        if (res>0) {
            printf("Se requieren %d billetes de 100\n",res);
          }
  cant= cant % 100;
  res=(cant / 50);
          if (res>0) {
              printf("Se requieren %d billetes de 50\n",res);
            }
  cant= cant % 50;
  res=(cant / 20);
  if (res>0) {
      printf("Se requieren %d billetes de 20\n",res);
    }
  cant= cant % 20;
  res=(cant / 10);
    if (res>0) {
        printf("Se requieren %d billetes de 10\n",res);
      }
  cant= cant % 10;
  res=(cant / 5);
    if (res>0) {
        printf("Se requieren %d billetes de 5\n",res);
      }
  cant= cant % 5;
  res=(cant / 1);
    if (res>0) {
        printf("Se requieren %d billetes de 1\n",res);
      }
  return 0;
}
