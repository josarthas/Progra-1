#include <stdio.h>
#include <string.h>
struct Datos{
char nombre[30];
int edad;
char direccion[50];
char telefono[15];
};
struct Datos datos[10];
void imprimir(int a);
        
int main(){
struct Datos datos2;
int a,i,j;
do{
    printf("Dame el numero de personas de las cuales quieres sacar datos generales\n");
    scanf("%d",&a);
if(a<0 || a>10)
    printf("error");}while(a<0 ||a>10);

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

    for (i = 0; i < a; i++){
        for (j = 0; j < a; j++){
            if (strcmp (datos[i].nombre, datos[j].nombre)<0){
                datos2 = datos[i];
                datos[i] =datos[j];
                datos[j] = datos2;
                
            }
            
        }
imprimir(a);    
    }
return 1;
}


void imprimir(int a){
    int i;
    FILE *reg1;
    reg1 = fopen ("registro1.txt", "w");
for(i=0;i<a;i++){ 

fprintf(reg1, "\nPersona no.%d\n",i+1);     
fprintf(reg1, "nombre=%s\n",datos[i].nombre);
fprintf(reg1, "edad=%d\n",datos[i].edad);
fprintf(reg1, "direccion=%s\n",datos[i].direccion);
fprintf(reg1, "telefono=%s\n",datos[i].telefono);}
fclose(reg1);
}

