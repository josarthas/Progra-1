#include<stdio.h>
#include<stdlib.h>
void tama(int *t){
 int aux=0;
 while(aux!=1){
  scanf("%i",t);
  if(*t<1){
   printf("Debe ser un valor positivo\nIngreselo de nuevo:\n");}
  if(*t>0){
   aux=1;}}}
   
void lect(int *a,int t){
 int i;
 for(i=0;i<t;i++){
  scanf("%d",a);
  a++;}}
  
void Sum(int *a,int *b,int *resta,int t){
 int i;
 for(i=0;i<t;i++){
  *resta=*a+*b;
  resta++;
  a++;
  b++;}}
  
void Res(int *a,int *b,int *resta,int t){
 int i;
 for(i=0;i<t;i++){
  *resta=*a-*b;
  resta++;
  a++;
  b++;}}
  
        void Imp(int *a,int t){
        int i;
        for(i=0;i<t;i++){
        printf("%d,",*a);
        a++;}}
  
int* memoria(int t){
  int *a;
  a=(int *)malloc(sizeof(int)*t);
  return a;}
  
            int main(){
            int t=0;
            printf("Ingrese el tamaño de los vectores:\n");
            tama(&t);
            int *a,*b,*resta;
            a=memoria(t);
            b=memoria(t);
            resta=memoria(t);
                    printf("Ingrese los valores del primer vector(A):\n");
                    lect(a,t);
                    printf("Ingrese los valores del segundo vector(B):\n");
                    lect(b,t);
            Sum(a,b,resta,t);
            printf("La suma del vector A+B=");
            Imp(resta,t);
            printf("\n");
            Res(a,b,resta,t);
            printf("La resta del vector A-B=");
            Imp(resta,t);
            printf("\n");

    return 1;
}

