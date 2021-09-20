#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void ord_selc(char vtr[max], int limit){
    int i, j, aux=0, min;

    for(i=0 ;i<limit ;i++){

        min = i;

        for(j=(i+1) ;j<limit ;j++){

            if(vtr[j] < vtr[min])
                min = j;
        }

        aux = vtr[i];
        vtr[i] = vtr[min];
        vtr[min] = aux;
    }

    printf("\nEste es el arreglo ordenado: ");

    for(i=0 ;i<limit ;i++)
        printf("[%c] ", vtr[i]);
}

void ord_incer(char vtr[max], int limit){
    int i, j;
    int aux;


    for(i=0 ;i<limit ;i++){

        j = i;
        aux = (int)vtr[i];

        while((j > 0) && (aux < (int)vtr[j-1])){

            vtr[j] = vtr[j-1];

            j--;
        }

        vtr[j] = aux;
    }

    printf("\nEste es el arreglo ordenado: ");

    for(i=0 ;i<limit ;i++)
        printf("[%c] ", vtr[i]);
}

void ord_burb(char vtr[max], int limit){
    int i, j, aux=0, poc;

    for(i=0 ;i<limit ;i++){

        for(j=0 ;j<limit ;j++){

            if(vtr[j] > vtr[j+1]){

                aux = vtr[j];
                vtr[j] = vtr[j+1];
                vtr[j+1] = aux;
            }
        }
    }

    printf("\nEste es el arreglo ordenado: ");

    for(i=1 ;i<(limit+1) ;i++)
        printf("[%c] ", vtr[i]);
}

int val_vtr(char vtr[max], int limit){
    int i, flag=0, bad=0;

    for(i=0 ;i<limit ;i++){

        if((int)vtr[i] >= 48 && (int)vtr[i] <= 57){
            flag++;

        }
        else{

            if((int)vtr[i] >= 65 && (int)vtr[i] <= 90){
                flag++;

            }    
            else{

                if((int)vtr[i] >= 97 && (int)vtr[i] <= 122){
                    flag++;

                }
            }
        }
    }

    printf("\nlimit = %i, flag = %i, bad = %i\n", limit, flag, bad);



    if(flag == limit) return 0;
}

char ini(char vtr[max], int limit){
    int i;

    for(i=0 ;i<limit ;i++){
        vtr[i] = 0;
    }

    return (vtr[limit]);
}

int main(int a, char *b[]){
    int i, comand=0, nbr=0, back=0;
    char aux_pass[3], aux_arg[max], pass[3], arg[max];

    aux_pass[3] = ini(aux_pass, strlen(b[1]));
    aux_arg[max] = ini(aux_arg, strlen(b[2]));
    pass[3] = ini(pass, strlen(b[1]));
    arg[max] = ini(arg, strlen(b[2]));



    if(a != 3){

        printf("\nerror\n");
        exit(EXIT_FAILURE);
    }

    if(strlen(b[1]) == 2){

        strcpy(aux_pass, b[1]);

        for(i=0 ;i<=strlen(b[1]) ;i++){

                pass[i] = (char)aux_pass[i];

                if(i == strlen(b[1]))
                    pass[i] = '\0';
        }

    }
    else{

        printf("\nno valido %s\n", b[1]);
            exit(EXIT_FAILURE);
    }

    if(*b[2] == 0 || (strlen(b[2]) > 10)){

        printf("\ncadena inexistente\n");
        exit(EXIT_FAILURE);

    }
    else{

            strcpy(aux_arg, b[2]);

            for(i=0 ;i<strlen(b[2]) ;i++){

            if(i == strlen(b[2]))
                arg[i] = '\0';

            arg[i] = (char)aux_arg[i];
        }
    }

    for(i=0 ;i<strlen(b[2]) ;i++){

        if(arg[i] >= 33 && arg[i] <= 47){

            printf("\nno valido' %c '.\n", arg[i]);
            exit(EXIT_FAILURE);
        }
        if(arg[i] >= 58 && arg[i] <= 64){

            printf("\nno validp ' %c '.\n", arg[i]);
            exit(EXIT_FAILURE);
        }
        if(arg[i] >= 91 && arg[i] <= 96){

            printf("\nno valido ' %c '.\n", arg[i]);
            exit(EXIT_FAILURE);
        }
        if(arg[i] >= 123 && arg[i] <= 126){

            printf("\nno valido ' %c '.\n", arg[i]);
            exit(EXIT_FAILURE);
        }
    }



    if(strlen(b[1]) == 2){

        if(strcmp(aux_pass, "-s") == 0)
            comand = 1;

        if(strcmp(aux_pass, "-i") == 0)
            comand = 2;

        if(strcmp(aux_pass, "-b") == 0)
            comand = 3;
    }
    else{

        printf("\nno encontrado\n");
        printf("Solo se acepta: '-s', '-i', '-b'.\n");
        exit(EXIT_FAILURE);
    }

    if(strlen(b[2]) > 1 || strlen(b[2]) < 10){

        if(comand != 0){

            nbr = strlen(b[2]);

            back = val_vtr(arg, nbr);

            if(back == 0){

                if(comand == 1) ord_selc(arg, nbr);

                if(comand == 2) ord_incer(arg, nbr);

                if(comand == 3) ord_burb(arg, nbr);
            }
        }

    }
    else{

        printf("\nsobrepaso de valores\n");
        exit(EXIT_FAILURE);
    }

    printf("\n\n");
    return 0;
}
