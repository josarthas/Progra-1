#include <stdio.h>
#include <string.h>

struct Datos datos2;
struct Datos{
char nombre[30];
int edad;
char direccion[50];
char telefono[15];
};
struct Datos datos[10];
void imprimir(int a);
void imprimir(int a){
    int i;
for(i=0;i<a;i++){ 
printf("\nPersona no.%d\n",i+1);     
printf("nombre=%s\n",datos[i].nombre);
printf("edad=%d\n",datos[i].edad);
printf("direccion=%s\n",datos[i].direccion);
printf("telefono=%s\n",datos[i].telefono);}
}
void ingresar();
void ingresar(int a){
    int i;
for(i=0;i<a;i++){
printf("\n");
printf ("Dame el nombre\n");
scanf("%s",datos[i].nombre);
    printf("Dame edad\n");
    scanf("%d",&datos[i].edad);
printf("Dame direccion\n");
scanf("%s",datos[i].direccion);
    printf("Dame telefono\n");
    scanf("%s",datos[i].telefono);}
}

int main(){

int orr=0,op=0,a=0,i,j,o=0;

do{

do{
    printf("Seleccione una opcion:\n1)ingresar datos\n2)ordenar\n3)mostrar\n4)salir\n");
    scanf("%d",&op);
    if(op<1 || op>4){
    printf("opcion no valida\n");
    }
}while(op<1 || op>4);



if (op==1){
    do{
    printf("Dame el numero de personas de las cuales quieres sacar datos generales\n");
    scanf("%d",&a);
    if(a<0 || a>10){
    printf("error");
    }
    }while(a<=0 ||a>10);
    ingresar(a);}
do{
if(op==2){
    printf("Seleccione una opcion:\n1)nombre\n2)edad\n3)direccion\n4)telefono\n");
    scanf("%d", &orr);
if(orr==1){
        for (i = 0; i < a; i++){
        for (j = 0; j < a; j++){
            if (strcmp (datos[i].nombre, datos[j].nombre)<0){
                datos2 = datos[i];
                datos[i] =datos[j];
                datos[j] = datos2;
                }}}
}
if(orr==2){
    for (i = 0; i < a; i++){
        for (j =i+1; j < a; j++){
            if ( (datos[i].edad > datos[j].edad)){
                datos2 = datos[i];
                datos[i] =datos[j];
                datos[j] = datos2;
                }}}}
if(orr==3){
    for (i = 0; i < a; i++){
        for (j = 0; j < a; j++){
            if (strcmp (datos[i].direccion, datos[j].direccion)<0){
                datos2 = datos[i];
                datos[i] =datos[j];
                datos[j] = datos2;
                }}}}
if(orr==4){
    for (i = 0; i < a; i++){
        for (j =i+1 ; j < a; j++){
            if ( (datos[i].telefono > datos[j].telefono)){
                datos2 = datos[i];
                datos[i] =datos[j];
                datos[j] = datos2;
                }}}}
}}while(a=!0);
    
if(op==3){
do{
    imprimir(a);    
}while(a=!0);
}
if(op==4){
    o=1;
}
}while(o==0);
return 0;
}
