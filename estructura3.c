#include <stdio.h>
#include <string.h>

int main(){
struct Datos{
char nombre[30];
int edad;
char direccion[50];
char telefono[15];
};
struct Datos datos[10];
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
    
    }
                

for(i=0;i<a;i++){ 
printf("\nPersona no.%d\n",i+1);     
printf("nombre=%s\n",datos[i].nombre);
printf("edad=%d\n",datos[i].edad);
printf("direccion=%s\n",datos[i].direccion);
printf("telefono=%s\n",datos[i].telefono);}
return 1;
}
