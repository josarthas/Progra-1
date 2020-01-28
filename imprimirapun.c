#include <stdio.h>
#include <stdlib.h>

void esc(char *pt, int y){
    int i = 0;

    while( i < y){

        printf("%c", *(pt+i));
        i++;
    }
    printf("\n");
}

void leer(char *pt, int y){
    int j=0, i = 0;
    char x;

    printf("\ninserta los datos\n ");

    

    scanf("%c", &x);

    *pt = x;

    while(j < y){
       scanf("%c", &x);

       *(pt+i) = x;

       i++;
       j++;
    }
}

int main(int argc, char *argv[]){
    int num = 0;

  while(num < 1 || num > 20){  
    printf("ingrese espacios que se deven reservar (menos de 20)?\n");
    scanf("%i", &num);

    if(num < 1 || num > 20){

        num = 0;
        printf("\nerror\n");

    }}

    char c[num];

    leer((c+0), num);

    printf("\nlos datos son: ");

    esc((c+0), num);


    return 0;
}

