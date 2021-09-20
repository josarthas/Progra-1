#include <stdio.h>
#include <string.h>
void contarPalabras();
void contarPalabras(char *cadena)
{
    int contador = 0;
    int i = 0;
    int largo = strlen(cadena);
    int bolle =0;
    char actual,previa;
    for( i = 0; i < largo ; i++){
        if(cadena[i] == ' ' && cadena[i-1] != ' ' && i >=0){
            contador ++;
        }
        
        
    }
 
    printf("la cantidad de palabras es %d \n", contador+1);
}
int main(){
    char cad[100];
printf("Ingrese la cadena\n");
fgets(cad,100,stdin);
    
contarPalabras((cad+0));


return 0;
}
