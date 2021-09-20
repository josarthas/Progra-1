#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 50

struct personas{
	int id;
	int edad;
	int sexo;
};

int conversor(int tama){
	int i;
	char buffer[9];
	fflush(stdin);
	fgets (buffer, tama, stdin);
	i = atoi (buffer);
	fflush(stdin);
	return i;
}

void alta_persona(struct personas *gente){
	int i;
	for(i=0;i<MAX;i++){
		gente[i].id=i+1;
		do{
			printf("\nIngrese la edad de la persona #%d: ",gente[i].id);
			gente[i].edad=conversor(3);
		}while(gente[i].edad<0);
		do{
			printf("\nIngrese sexo (mujer=1, hombre=2)");
			gente[i].sexo=conversor(2);
		}while((gente[i].sexo<1)||(gente[i].sexo>2));	
	}	
}


void informe(struct personas *gente){
	int i,fmeno,mmayo,totmay,totmen;
	fmeno=0;mmayo=0;
	totmay=0;totmen=0;
	for(i=0;i<MAX;i++){
		if(gente[i].edad>=18)
			totmay++;
			if(gente[i].sexo==2)
				mmayo++;
		}
		else{
			totmen++;
			if(gente[i].sexo==1)
				fmeno++;
		}
	}
	printf("\nMasculinos mayores de edad: %d",mmayo);
	printf("\nFemeninos menores de edad: %d",fmeno);
	printf("\nTotal mayores de edad: %d %%",totmay*2);
	printf("\nTotal menores de edad: %d %%",totmen*2);
}


int main(){
	int i,opc;
	struct personas gente[MAX];
	do{
		printf("\nMenu \n1- Capturar personas \n2-Informe \n0-Salir\n");
		opc=conversor(2);
		switch(opc){
			case 0:{
				break;
			}
			case 1:{
				alta_persona(gente);
				break;
			}
			case 2:{
				informe(gente);
				break;
			}
			
		}
	}while(opc!=0);
	return 0;
}
