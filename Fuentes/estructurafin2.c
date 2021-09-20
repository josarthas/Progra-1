#include <stdio.h>
#include <string.h>

struct Datos datos2;
struct Datos datos3;
struct Datos{
char nombre[30];
int edad;
char direccion[50];
char telefono[15];
};

void imprimir();
void imprimir(int i,struct Datos datos[10]){
printf("\nPersona no.%d\n",i+1);     
printf("nombre=%s\n",datos[i].nombre);
printf("edad=%d\n",datos[i].edad);
printf("direccion=%s\n",datos[i].direccion);
printf("telefono=%s\n",datos[i].telefono);
}
void imprimira();
void imprimira(int a,struct Datos datos[10]){
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

void ingresar();
void ingresar(int *x,struct Datos datos[10])
{
    int i,a;
    a= *x;
    for(i=0;i<a;i++)
    {
        printf("\n");
        printf ("Dame el nombre\n");
        scanf("%s",datos[i].nombre);
        printf("Dame edad\n");
        scanf("%d",&datos[i].edad);
        printf("Dame direccion\n");
        scanf("%s",datos[i].direccion);
        printf("Dame telefono\n");
        scanf("%s",datos[i].telefono);
    }
}

void ordennom();
void ordennom(int *n,struct Datos datos[10])
{
int i,j,a;
a= *n;
for (i = 0; i < a; i++)
{
    for (j = 0; j < a; j++)
    {
        if (strcmp (datos[i].nombre, datos[j].nombre)<0)
        {
            datos2 = datos[i];
            datos[i] =datos[j];
            datos[j] = datos2;
        }
    }
}
}

void ordenedad();
void ordenedad(int *n,struct Datos datos[10]){
int i,j,a;
a= *n;
for (i = 0; i < a; i++)
{
    for (j =0; j < a; j++)
    {
        if  (datos[i].edad < datos[j].edad)
        {
            datos2 = datos[i];
            datos[i] =datos[j];
            datos[j] = datos2;
        }
    }
}
}

void ordendirect();
void ordendirect(int *n,struct Datos datos[10]){
int i,j,a;
a= *n;
    for (i = 0; i < a; i++)
{
    for (j = 0; j < a; j++)
    {
        if (strcmp (datos[i].direccion, datos[j].direccion)<0)
        {
            datos2 = datos[i];
            datos[i] =datos[j];
            datos[j] = datos2;
        }
    }
}
}

void ordentel();
void ordentel(int *n,struct Datos datos[10]){
int i,j,a;
a= *n;
for (i = 0; i < a; i++)
{
    for (j =0 ; j < a; j++)
    {
        if ( (datos[i].telefono > datos[j].telefono))
        {
        datos2 = datos[i];
        datos[i] =datos[j];
        datos[j] = datos2;
        }
    }
}
}

void buscarN();
void buscarN(int *n,struct Datos datos[10]){
int j,a;
    a= *n;
    printf("ingresa nombre para buscar\n");
    scanf("%s",datos3.nombre);
for (j =0 ; j < a; j++)
{
    if ( strcmp(datos3.nombre, datos[j].nombre) == 0)
{
printf("nombre=%s\n",datos[j].nombre);
printf("edad=%d\n",datos[j].edad);
printf("direccion=%s\n",datos[j].direccion);
printf("telefono=%s\n",datos[j].telefono);
                        }
                            }
}

void buscarE();
void buscarE(int *n,struct Datos datos[10]){
int j,a;
    a= *n;
    printf("ingresa edad para buscar\n");
    scanf("%i", &datos3.edad);
for (j =0 ; j < a; j++)
{
    if (datos3.edad ==   datos[j].edad)
{
printf("nombre=%s\n",datos[j].nombre);
printf("edad=%d\n",datos[j].edad);
printf("direccion=%s\n",datos[j].direccion);
printf("telefono=%s\n",datos[j].telefono);
                        }
                            }
}

void buscarD();
void buscarD(int *n,struct Datos datos[10]){
int j,a;
    a= *n;
    printf("ingresa direccion para buscar\n");
    scanf("%s",datos3.direccion);
for (j =0 ; j < a; j++)
{
    if ( strcmp(datos3.direccion, datos[j].direccion)==0)
{
printf("nombre=%s\n",datos[j].nombre);
printf("edad=%d\n",datos[j].edad);
printf("direccion=%s\n",datos[j].direccion);
printf("telefono=%s\n",datos[j].telefono);
                        }
                            }
}

void buscarT();
void buscarT(int *n,struct Datos datos[10]){
int j,a;
    a= *n;
    printf("ingresa direccion para buscar\n");
    scanf("%s",datos3.telefono);
for (j =0 ; j < a; j++)
{
    if ( strcmp(datos3.telefono, datos[j].telefono)==0)
{
printf("nombre=%s\n",datos[j].nombre);
printf("edad=%d\n",datos[j].edad);
printf("direccion=%s\n",datos[j].direccion);
printf("telefono=%s\n",datos[j].telefono);
                        }
                            }
}

int main()
{

    int orr=0,op=0,a=0,i,j,o=0, fo=0,or=0,z=0;
        
    struct Datos datos[10];

    do
    {
        do
        {
            printf("Seleccione una opcion:\n1)ingresar datos\n2)ordenar\n3)mostrar\n4)buscar\n5)salir\n");
            scanf("%d",&op);
            if(op<1 || op>5)
                printf("opcion no valida\n");
            else 
            {
switch(op)
    {    
        case 1:
            do
            {
                printf("Dame el numero de personas de las cuales quieres sacar datos generales\n");
                scanf("%d",&a);
                if(a<0 || a>10)
                    printf("error");
            }
            while(a<=0 ||a>10);
            ingresar(&a, datos);
            break;
        case 2:
            if (a==0){
            printf ("no hay datos que ordenar\n");
            }
            else{
            printf("Seleccione una opcion:\n1)nombre\n2)edad\n3)direccion\n4)telefono\n");
            scanf("%d", &orr);
            do
            {
                switch(orr)
                {
                        case 1:
                        ordennom(&a, datos);       
                        fo=1;
                        break;
                
                        case 2:
                        ordenedad(&a, datos);
                        fo=1;
                        break;
                    
                case 3:
                ordendirect(&a, datos);
                fo=1;
                 break;
                    
                case 4:
                       ordentel(&a, datos);
                    fo=1;
                    break;
                
                case 5:
                        fo=1;
                        break;
                }
            }while (fo==0);
            break;
            }
    
            case 3:
                
                    if(a==0)
                        printf("no hay nada que imprimir \n");
                    else   
                    do{
                    printf("Elija una opcion:\n1)en pantalla\n2)en archivo:registro1.txt");
                    scanf("%i",&z);
                    }while(z<1 || z>2);
                      if(z==1){
                          for (j=0; j<a; j++)
                            imprimir(j, datos);}
                    if(z==2){
                        imprimira(a, datos); }
            break;
            
            
case 4:
            if (a==0){
            printf ("no hay datos que para buscar\n");
            }
            else{
            printf("Seleccione una opcion:\n1)nombre\n2)edad\n3)direccion\n4)telefono\n");
            scanf("%d", &or);
            do
            {
                switch(or)
                {
                        case 1:
                        buscarN(&a, datos);       
                        fo=1;
                        break;
                
                        case 2:
                        buscarE(&a, datos);
                        fo=1;
                        break;
                    
                case 3:
                buscarD(&a, datos);
                fo=1;
                 break;
                    
                case 4:
                       buscarT(&a, datos);
                    fo=1;
                    break;
                
                case 5:
                        fo=1;
                        break;
                }
            }while (fo==0);
            break;
            }            

            case 5:
                o=1;
            break;
            }
        }    
    }while(op!=5);
    
    }
    while (o==0);
    return 0;
}
