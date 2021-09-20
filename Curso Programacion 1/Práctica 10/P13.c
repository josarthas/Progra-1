/*
El Ingeniero de Sistemas de un banco de crédito necesita conocer de una lista de 2500 cuentas, las cuales
 serán leídas y almacenadas en un archivo, cuál es la que posee mayor cantidad y cuál es la que posee menor 
 cantidad, de dinero. Codifique un programa en C que realice lo anterior, sin ordenar las cuentas.   
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 2500

struct banco{
	int no_cuenta;
	int saldo;
	int selector;
};

int conversor(int tama){
	int i;
	char buffer[16];
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
			cuentas[i].no_cuenta=i+1;
			printf("Ingrese Saldo en la cuenta %d",cuentas[i].no_cuenta);
			cuentas[i].saldo=conversor(15);
			cuentas[i].selector=1;		
		}		
	}	
}

void consulta_cuenta(struct banco *cuentas){
	int x,mx,mn;
	float cmax,cmex;
	cmax=0;
	printf("\nInforme del banco:");
	cmex=cuentas[0].saldo;
	mn=0;
	for (x=0; x<MAX; x++){
		if(cuentas[x].selector==1){
			if(cuentas[x].saldo>cmax){
				cmax=cuentas[x].saldo;
				mx=x+1;
			}
			if(cuentas[x].saldo<cmex){
				cmex=cuentas[x].saldo;
				mn=x+1;
			}
		}
	}
	printf("\n La cuenta con mayor cantidad es la #%d , $%.2f \n La cuenta con menor cantidad es: #%d, $%.2f \n",mx,cmax,mn,cmex );
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
	int cumax=0;
	int cumen=0;
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
	alta_cuenta(cuentas);
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
