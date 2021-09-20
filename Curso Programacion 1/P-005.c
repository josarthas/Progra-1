#include <stdio.h>

int main(){
  int mult,i;
  printf("Ingrese el número del cual desea ver la tabla\n");
  scanf("%d",&mult);
  if(mult<=0){
    printf("Tabla negativa \n");
    for (i = -1; i >= -10; i--){
      printf("%d X %d = %d \n",mult,i,i*mult );
    }
  }
  else{
      for (i = 1; i <= 10; i++)
      printf("%d X %d = %d \n",mult,i,i*mult);
  }
  return 0;
}
