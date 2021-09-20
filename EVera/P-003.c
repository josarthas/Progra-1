#include<stdio.h>

int main() {
  int n1,n2;
  printf("Ingrese el número\n");
  scanf("%d",&n1);
  n2=n1%2;
  if (n2!=0) {
    printf("El número es impar\n");
  }
  else{
    printf("El numero es par\n");
  }
  getchar();
  return 0;
}
