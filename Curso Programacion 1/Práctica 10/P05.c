#include<stdio.h>

int conversor(int tama){
	int i;
	char buffer[7];
	fflush(stdin);
	fgets (buffer, tama, stdin);
	i = atoi (buffer);
	fflush(stdin);
	return i;
}

void triangulo(int l1, int l2, int l3){
	int tipo;
	int valida=0;
	if(l1>(l2+l3))
		valida++;
		else if(l2>(l1+l3))
			valida++;
			else if(l3>(l1+l2))
				valida++;
		printf("valido? %d\n",valida);
	
	if (valida==0){
		if(l1==l2){
			if (l2==l3){
				tipo=1;
			}
			else{
				tipo=2;
			}
		}
		else{
			if(l1==l3){
				tipo=2;
			}
			else{
				if(l2==l3){
					tipo=2;
				}
				else{
					tipo=3;
				}
			}
			
		}
		
	}
	else 
	{
	tipo=0;}
			printf("tipo= %d",tipo);
		switch(tipo){
			case 0:{
				printf("No es triangulo");
				break;
			}
			case 1:{
				printf("Triangulo Equilatero");
				break;
			}
			case 2:{
				printf("Triangulo Isosceles");
				break;
			}
			case 3:{
				printf("Triangulo Escaleno");
				break;
			}
		}
}

int main(){
	int rep=0;
	int a,b,c;
	
	do{
		printf("Ingrese longitud 1: ");
		a=conversor(6);
		printf("Ingrese longitud 2: ");
		b=conversor(6);
		printf("Ingrese longitud 3: ");
		c=conversor(6);
		
		
		triangulo(a,b,c);

		printf("\nRepetir? 0=Si");
		rep=conversor(2);
	}while(rep==0);
	printf("Programa finalizado");
	
	return 0;
}
