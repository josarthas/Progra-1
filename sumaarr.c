#include <stdio.h>
int main(){
int a[1000],b,c,n,z[1000],v[1000];
float d,p,ma,me;

    do{
        printf("Tamaño de los arreglos (valor maximo 1000): ");
        scanf("%i",&b);
        printf("\n");
        if(b<0 || b>1000)
            printf("Tamaño no valido \n");
      }while (b<0 || b>1000);
printf("\n");
      for (c=0;c<b;c++){
            printf("Dame el valor %i del primer arreglo: ",c+1);
            scanf("%i",&a[c]);}
printf("\n");      
      for (c=0;c<b;c++){
            printf("Dame el valor %i del segundo arreglo: ",c+1);
            scanf("%i",&z[c]);}
printf("\n");
      for (c=0;c<b;c++){
          v[c]=a[c]+z[c];}
for (c=0;c<b;c++){
    printf("la suma de los valores ubicados en la posicion %i de los dos arreglos es:%i\n",c+1 ,v[c]);}
printf("\n");
for (c=0;c<b;c++){
          v[c]=a[c]-z[c];}
for (c=0;c<b;c++){
    printf("la resta de los valores ubicados en la posicion %i de los dos arreglos es:%i\n",c+1 ,v[c]);}
      
      return 1;
}
