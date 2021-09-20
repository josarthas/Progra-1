#include <stdio.h>

int main() {
  int votos[10],tot=0,opc,i;
  for (i = 0; i < 9; i++) {
    votos[i]=0;
  }
  do {
    printf("Ingrese opcion de voto\n");
    printf("0 - Terminar conteo");
    scanf("%d",&opc );
    if (opc!=0) {
      votos[opc-1]++;
    }

  } while(opc!=0||tot<10000);





  return 0;
}
