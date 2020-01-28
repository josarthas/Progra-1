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

printf("\nPersona no.%d\n",i+1);     
printf("nombre=%s\n",datos[i].nombre);
printf("edad=%d\n",datos[i].edad);
printf("direccion=%s\n",datos[i].direccion);
printf("telefono=%s\n",datos[i].telefono);
}
void ingresar();
void ingresar(int *x){
    int i,a;
    a= *x;
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

switch(op){
    
    case 1:
            do{
            printf("Dame el numero de personas de las cuales quieres sacar datos generales\n");
            scanf("%d",&a);
            if(a<0 || a>10){
            printf("error");
            }
            }while(a<=0 ||a>10);
            ingresar(&a);
        break;
    case 2:
            printf("Seleccione una opcion:\n1)nombre\n2)edad\n3)direccion\n4)telefono\n");
            scanf("%d", &orr);
            do{
            switch(orr){
                case 1:
  
                    for (i = 0; i < a; i++){
                    for (j = 0; j < a; j++){
                    if (strcmp (datos[i].nombre, datos[j].nombre)<0){
                    datos2 = datos[i];
                    datos[i] =datos[j];
                    datos[j] = datos2;
                    }}}
                    break;
                
                case 2:
                        for (i = 0; i < a; i++){
                        for (j =0; j < a; j++){
                        if  (datos[i].edad > datos[j].edad){
                        datos2 = datos[i];
                        datos[i] =datos[j];
                        datos[j] = datos2;
                        }}}
                    break;
                    
                case 3:
                        for (i = 0; i < a; i++){
                        for (j = 0; j < a; j++){
                        if (strcmp (datos[i].direccion, datos[j].direccion)<0){
                        datos2 = datos[i];
                        datos[i] =datos[j];
                        datos[j] = datos2;
                        }}}
                    break;
                    
                case 4:
                        for (i = 0; i < a; i++){
                        for (j =0 ; j < a; j++){
                        if ( (datos[i].telefono > datos[j].telefono)){
                        datos2 = datos[i];
                        datos[i] =datos[j];
                        datos[j] = datos2;
                        }}}
                    break;
                }
            }while(a>0);
        break;
    
    case 3:
        if(a>0){
     for(i=0;i<a;i++){    
            imprimir(a); 
        }
        }
    if(a==0){
        printf("no hay nada que imprimir");
    }
        break;
    case 4:
        o=1;
        break;
    
    }
}while (o==0);
return 0;
}
