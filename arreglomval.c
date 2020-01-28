#include <stdio.h>
int main(){
int a[1000],b,c,n;
float d,p,ma,me;

    do{
        printf("Tamaño del arreglo (valor maximo 1000): ");
        scanf("%i",&b);
        printf("\n");
        if(b<0 || b>1000)
            printf("Tamaño no valido \n");
      }while (b<0 || b>1000);
    
      for (c=0;c<b;c++){
            printf("Dame el valor %i: ",c+1);
            scanf("%i",&a[c]);}
      d=0.0;
      for (c=0;c<b;c++){
                        d=d+a[c];}
      p=d/b;
 
      printf("El promedio es: %f\n",p);
      
        for(n=0;n<b;n++){
            if (n==0){
                ma=a[n];
                me=a[n];}
            if (n!=0){
            if (a[n]>ma)
                ma=a[n];
            if(a[n]<me)
                me=a[n];
                }}
      printf("El numero mayor es:%f \n",ma);
      printf("El numero menor es:%f \n",me);
      

      
      return 1;
}
