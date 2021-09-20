#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 1024
struct tienda{
	int tipo;
	char nombre[16];
	char raza[16];
	int edad;
	char propietario[32];
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

void alta_mascota(struct tienda *animales){
	int i=0;
		while (i<MAX && animales[i].selector!=0)
		i++;
	if (i<MAX){
		do{
		printf("\nIngrese el tipo de animal \n(1=Perro, 2=Gato, 3=Conejo, 4=Rata/Ratón \n5=Reptil, 6=Ave, 7=Anfibio, 8=Pez ");
		fflush(stdin);
		animales[i].tipo=conversor(2);
		}while(animales[i].tipo<=0);
		printf("\nIngrese nombre de mascota: ");
		gets(animales[i].nombre);
		printf("\nIngrese raza de mascota: ");
		gets(animales[i].raza);
		do{printf("\nIngrese edad");
		animales[i].edad=conversor(2);}
		while( animales[i].edad<=0);
		printf("\nIngrese nombre del propietario: ");
		gets(animales[i].propietario);
		animales[i].selector=1;
	}
	else
		printf("\nEspacio insuficiente");
}

int perros(struct tienda *animales){
	int x,tot;
	tot=0;
	for(x=0;x<MAX;x++){
		if(animales[x].tipo==1)
		tot++;
	}
	return tot;
}

void consulta_mascota(struct tienda *animales){
	int x;
	printf("\nMascotas Registradas:");
	for (x=0; x<MAX; x++){
		if(animales[x].selector==1){
			printf ("\n\nTipo: %d",animales[x].tipo);
			printf ("\nNombre: %s",animales[x].nombre);
			printf ("\nRaza: %s",animales[x].raza);
			printf ("\nfecha contrato: %i",animales[x].edad);
			printf ("\nPropietario: %s",animales[x].raza);
		}
	}
}
void menu(struct tienda *animales){
	int bande=0;
	int perr;
	char opc;
		perr=perros(animales);
		printf("\nHay %d perros en la tienda",perr);
		printf("\n\nMenu de tienda de animales");
		printf("\n1. Altas");
		printf("\n2. Mostrar todo");
		printf("\n3. Salir");
		
		do{
			printf("\n Opcion: ");
			fflush(stdin);
			opc=getchar();
			if(((int)opc==49)||((int)opc==50)||((int)opc==51))
				bande++;
			else
				bande=0;
}while (bande==0);
		switch (opc){
		case '1': {alta_mascota(animales);
		menu(animales);
		break;
		}
		
		case '2': {consulta_mascota(animales);
		menu(animales);
		break;
		}
		case '3':break;}
		}

	

int main(){
	struct tienda animales[MAX];
	int i, j;
	menu(animales);
	printf("Programa Finalizado");
	fflush(stdin);
	getchar();
	return 0;
}
