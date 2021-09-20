#include <string.h>
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {
int i,j,aux,min,x,v[6];

x=atoi(argv[1]);
if(argc<x+3){
printf("Error: faltan datos\n");
return 1;
}

if(argc>x+3){
printf("Error: sobran datos\n");
return 1;
}


printf("¿Cuanto datos quieres introducir? %s\n",argv[1]);
if(atoi(argv[1])<1 || atoi(argv[1])>6){
printf("Error: dato debe ser positivo menor o igual que 6\n");
return 1;
}


if(atoi(argv[2])<1 || atoi(argv[2])>3){
printf("Error: esa opcion no existe\n");
return 1;
}

//Cambio a array
for(i=3;i<x+3;i++){
v[i-3]=atoi(argv[i]);
}
for(i=0;i<x;i++){
printf("%i ",v[i]);}


//Insercion
if(atoi(argv[2])==1){
printf("Metodo de ordenamiento: Insercion\n");

for(i=0;i<x;i++){
aux=v[i];
j=i-1;
while(j>=0 && v[j]>aux){
v[j+1]=v[j];
j--;}
v[j+1]=aux;}

printf("\nOrdenados:\n");
for(i=0;i<x;i++){
printf("%i ",v[i]);}
printf("\n\n");
}

//Burbuja
if(atoi(argv[2])==2){
printf("Metodo de ordenamiento: Burbuja\n");
for(i=0;i<x;i++){
for(j=i+1;j<x;j++){
  if(v[i]>v[j]){
    aux=v[i];
    v[i]=v[j];
    v[j]=aux;}
}
}
printf("\nOrdenados:\n");
for(i=0;i<x;i++){
printf("%i ",v[i]);}
printf("\n\n");
return 1;
}

//Seleccion
if(atoi(argv[2])==3){
printf("Metodo de ordenamiento: Seleccion\n");

for(i=0;i<x-1;i++){
min=i;
for(j=i+1;j<x;j++){
  if(v[min]>v[j]){
  min=j;}
}
aux=v[min];
v[min]=v[i];
v[i]=aux;
}

printf("\nOrdenados:\n");
for(i=0;i<x;i++){
printf("%i ",v[i]);}
printf("\n\n");
return 1;
}


}
