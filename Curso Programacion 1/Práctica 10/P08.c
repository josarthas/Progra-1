#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 2500

struct banco{
	int no_cuenta;
	char nombre[32];
	int saldo;
	int selector;
};

int conversor(int tama){
	int i;
	char buffer[2];
	fflush(stdin);
	fgets (buffer, tama, stdin);
	i = atoi (buffer);
	fflush(stdin);
	return i;
}

void alta_cuenta(struct banco *cuentas){
	int i;
	for(i=0;i<MAX;i++){
		if(cuentas[i].selector!=1){
			do{
			cuentas[i].no_cuenta=rand();
			}while(cuentas[i].no_cuenta<=0);
			strcpy(cuentas[i].nombre,"x");
			cuentas[i].saldo=rand();
			cuentas[i].selector=1;		
		}		
	}	
}

void consulta_cuenta(struct banco *cuentas){
	int x,canmax,canmen;
	canmax=0;
	canmen=0;
	printf("\nCuentas en el banco:");
	for (x=0; x<MAX; x++){
		if(cuentas[x].selector==1){
			if(cuentas[x].saldo==0){
			
				printf("Notificar al cliente %i",cuentas[x].no_cuenta);
				printf ("\nNombre: %s",cuentas[x].nombre);
				printf ("\nSaldo: %i",cuentas[x].saldo);
		}
		if(cuentas[x].saldo>5000)
		canmax++;
		if(cuentas[x].saldo<200)
		canmen++;
		}
	}
	printf("Cuentas con menos de $200: %i",canmen);
	printf("Cuentas con mas de $5000: %i",canmax);
}

void asignacion(struct banco *cuentas){
	int x,i,j=0,sumacuen=0;
	for(x=0;x<MAX;x++){
		sumacuen=sumacuen+cuentas[x].selector;
	}

}

int main(){
	
	struct banco cuentas[MAX];
	int i, j;
	FILE *bancuentas;
	srand(time(NULL));

	for (i=0; i<MAX; i++){
		cuentas[i].selector=0;
		}
	if ((bancuentas=fopen("cuentas.dat","r"))==NULL)
	{
		bancuentas=fopen("cuentas.dat","w");
	}
	else
		{	
			for (j=0; j<MAX; j++)
				fread (&cuentas[j],sizeof(struct banco),1,bancuentas);
			fclose(bancuentas);
		} 
	
	// llama funciones de estructura
consulta_cuenta(cuentas);
	// aqui ya no por que archivo guarda
	
	asignacion(cuentas);
	if ((bancuentas=fopen("cuentas.dat","w"))!=NULL)
	{ 
		for (j=0; j<MAX; j++)
		{
			
			fwrite(&cuentas[j],sizeof(struct banco),1,bancuentas);
		}
		
		fclose(bancuentas);
	}
	else
		printf("\nError en archivo del banco");

	fflush(stdin);
	getchar();
	return 0;
	
}
