
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void convierte(long x){
    float num = 0;
    double cpr = 0;
            printf("\n inserta valores: ");
            scanf("%f", &num);
            if(num == 0){
                printf("\n error\n");
                exit(EXIT_FAILURE);}
            cpr = (double)x / num;
            printf("\n es: %.1f\n\n", cpr);}

int main(int a, char *x[]){
                int i, j=0, exp = 0, flag = 0, cero_cont = 0, num = 0;
                char vector[10], cadena[10];
                long suma = 0, aux[10];
    strcpy(cadena,x[1]);

    for(i=0 ;i<strlen(cadena) ;i++)
    vector[i] = (char)cadena[i];

    num = strlen(vector);

    if(vector[0] < 48 || vector[0] > 57){
        if(vector[0] == 45){
        if(vector[1] != 48){
        flag = 1;
        j = 1;}
        else{
            vector[0] = '0';}
            }
            else{

        printf("\nerror\n", vector[0]);
        exit(EXIT_FAILURE);
        }
    }else j=0;

    if(num == 2){
        if(vector[0] >= 48 || vector[0] <= 57){
            if(vector[1] < 48 || vector[1] > 57){
                    num = 1;
                }else num = 2;}
            else{
                 printf("\nerror\n", vector[i]);
                exit(EXIT_FAILURE);
        }
    }

    for(i=j ;i<num ;i++){

        if(vector[i] < 48 || vector[i] > 57){
            printf("\nerror\n", vector[i]);
        exit(EXIT_FAILURE);
        }
    }

    if(flag == 1) j = 10;

    else j = 9;

    if(num > j){
        printf("\nexede parametros\n");
        exit(EXIT_FAILURE);
    }

    if(flag == 1){

        j = 1;
        exp = num-2;

    }else{

        j = 0;
        exp = num-1;
    }

    for(i=j ;i<num ;i++){

        if(vector[i] == 48) aux[j] = 0;

        if(vector[i] == 49) aux[j] = 1;

        if(vector[i] == 50) aux[j] = 2;

        if(vector[i] == 51) aux[j] = 3;

        if(vector[i] == 52) aux[j] = 4;

        if(vector[i] == 53) aux[j] = 5;

        if(vector[i] == 54) aux[j] = 6;

        if(vector[i] == 55) aux[j] = 7;

        if(vector[i] == 56) aux[j] = 8;

        if(vector[i] == 57) aux[j] = 9;

            j++;
    }


    if(flag == 1) j = 1;

    else j = 0;

    for(i=j ;i<num ;i++)
        if(aux[i] == 0)
            cero_cont++;


    if(flag == 1){

        if(cero_cont == num-1){

            printf("\nEs: 0\n");
                    exit(EXIT_SUCCESS);
        }

    }
    else{

        if(cero_cont == num){

                    printf("\nes: 0\n");
                    exit(EXIT_SUCCESS);
            }
    }

    if(flag == 1) j = 1;

    else j = 0;

    for(i=j ;i<num ;i++){

        if(flag == 1)
                    aux[i] = aux[i] * pow(10,exp--);

        else
            aux[i] = aux[i] * pow(10,exp--);
    }

    if(flag == 1) j = 1;

    else j = 0;

    for(i=j ;i<num ;i++) suma += aux[i];

    if(flag == 1) suma *= -1;

    printf("\n tu numero: %li", suma);

    convierte(suma);

    return 0;
}
