#include<stdio.h>
int main(int argc, char const *argv[]) {
  int turno,tard,tarn,nextt,nomin;
  tard=10;
  tarn=20;
  nextt=1;
  printf("Nomina de la empresa\n" );
  do {
    do {
      printf("Ingrese turno (1=diurno, 2= nocturno)\n");
      scanf("%d",&turno );
      if ((turno<1)||(turno>2)) {
        turno=0;
        printf("Ingrese turno correcto (1 o 2)\n");
      }
    } while(turno==0);
    printf("Ingrese Horas trabajadas\n");
    scanf("%d",&nextt );
    if(nextt<0){
      do {
        printf("Horas incorrectas, reingrese horas\n" );
        scanf("%d",&nextt );
      } while(nextt<0);
    }
    printf("Adeudo de sueldo:\n");
    if(turno==1)
    nomin=nextt*tard;
    if(turno==2)
    nomin=nextt*tarn;
    printf("$ %d\n",nomin );
    if (nextt<15) {
      printf("ALERTA, el trabajador debe ser despedido\n");
    }
  } while(nextt!=0);
  return 0;
}
