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
void ordNom();
void ordNom(int a){
int i,j;
    for (i = 0; i < a; i++){
        for (j = 0; j < a; j++){
            if (strcmp (datos[i].nombre, datos[j].nombre)<0){
                datos2 = datos[i];
                datos[i] =datos[j];
                datos[j] = datos2;
                }}}}
void ordEda();
void ordEda(int a){
 int i,j;
    for (i = 0; i < a; i++){
        for (j = 0; j < a; j++){
            if (strcmp (datos[i].edad, datos[j].edad)<0){
                datos2 = datos[i];
                datos[i] =datos[j];
                datos[j] = datos2;
                }}}}

void orddirec();
void orddirec(int a){
int i,j;
    for (i = 0; i < a; i++){
        for (j = 0; j < a; j++){
            if (strcmp (datos[i].direccion, datos[j].direccion)<0){
                datos2 = datos[i];
                datos[i] =datos[j];
                datos[j] = datos2;
                }}}}

void ordtel();
void ordtel(int a){
int i,j;
    for (i = 0; i < a; i++){
        for (j = 0; j < a; j++){
            if (strcmp (datos[i].telefono, datos[j].telefono)<0){
                datos2 = datos[i];
                datos[i] =datos[j];
                datos[j] = datos2;
                }}}}
int main(){

int a=0,i,j,op,orr;

do{
do{
do{
    printf("Seleccione una opcion:\n1)ingresar datos\n2)ordenar\n3)mostrar\n4)salir\n");
    scanf("%i",op);
    if(op<1 || op>4);
    printf("opcion no valida");}while(op<1 || op>4);

    printf("Dame el numero de personas de las cuales quieres sacar datos generales\n");
    scanf("%i",&a);
if(a<0 || a>10)
    printf("error");}while(a<0 ||a>10);

if (op==1){
    ingresar(a);}
do{
if(op==3){
    printf("Seleccione una opcion:\n1)nombre\n2)edad\n3)direccion\n4)telefono");
    scanf("%i",orr);
if(orr==1){
    ordNom(a);}
if(orr==2){
    ordEda(a);}
if(orr==3){
    orddirec(a);}
if(orr==4){
    ordtel(a);}
}}while(a=!0);
do{    
if(op==4){
imprimir(a);    
    }}while(a=!0);
return 1;
}while (op==0);
}



