#include <stdio.h>
void SUMA(double *z, double *y, int *n){
    double r,s,o,c,b;
    b=*n;
    r=*z;
    s=*y;
    o=r+s;
     for(c=0;c<b;c++){
    printf("la suma es:%lf\n",o);
    }
   }
void resta(double *z,double *y){
    double r,s,o;
    r=*z;
    s=*y;
    o=r-s;
    printf("la resta es:%lf\n",o);
    }
int main(){
double n;
int c,b;
double d,p,ma,me;
double *a, *v;
            do{
            printf("Tamaño de los arreglos (valor maximo 1000): ");
            scanf("%lf",&b);
            printf("\n");
            if(b<0 || b>1000)
            printf("Tamaño no valido \n");}while (b<0 || b>1000);
            printf("\n");
for (c=0;c<b;c++){
	printf("Dame el valor %d del primer arreglo: ",c+1);
	scanf("%lf", *a);
}
printf("\n");      
            for (c=0;c<b;c++){
            printf("Dame el valor %d del segundo arreglo: ",c+1);
            scanf("%lf",*v);}
            printf("\n");

SUMA(a,v,b);
printf("\n");
        for(c=0;c<b;c++){
        resta(&a,&v);}
        printf("\n");
return 1;
}
