#include<stdio.h>
#include<stdlib.h>
#define MAX 1024
#define tard 80
#define tarn 110
struct nomina{
	char nombre[32];
	int horas;
	int turno;
	int selector;
};

int conversor(int tama){
	int i;
	char buffer[7];
	fflush(stdin);
	fgets (buffer, tama, stdin);
	i = atoi (buffer);
	fflush(stdin);
	return i;
}

void alta_empleados(struct nomina *empleados){
	int i=0;
		while (i<MAX && empleados[i].selector!=0)
		i++;
	if (i<MAX){
		printf("\nIngrese nombre de empleado: ");
		fflush(stdin);
		gets(empleados[i].nombre);
		do{
		printf("\nIngrese horas trabajadas ");
		fflush(stdin);
		empleados[i].horas=conversor(4);
		}while(empleados[i].horas<0);
		do{printf("\nIngrese turno (1=diurno, 2=nocturno)");
		empleados[i].turno=conversor(2);}
		while( empleados[i].turno<=0);
		empleados[i].selector=1;
	}
	else
		printf("\nEspacio insuficiente");
}

void consulta_empleados(struct nomina *empleados){
	int x;
	float sal;
	printf("\nEmpleadoss Registrados:");
	for (x=0; x<MAX; x++){
		if(empleados[x].selector==1){
			printf ("\nNombre: %s",empleados[x].nombre);
			printf ("\nHoras trabajadas: %i",empleados[x].horas);
			printf ("\nTurno: ");
			if(empleados[x].turno==1){
			printf ("Diurno\n");
			sal=empleados[x].horas*tard;
			printf("Salario= $%.2f",sal);
			}
			else{
			printf ("Nocturno\n");
			sal=empleados[x].horas*tarn;
			printf("Salario= $%.2f",sal);
			}
			if(empleados[x].horas<7)
				printf("\n----El empleado debe ser despedido----\n\n");
			printf("\n________________________________________________");
		}
	}
}


void menu(struct nomina *empleados){
	int bande=0;
	char opc;
	printf("\n\nMenu de nomina");
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
	case '1': {alta_empleados(empleados);
		menu(empleados);
		break;
		}
		
		case '2': {
			consulta_empleados(empleados);
			menu(empleados);
			break;
			}
		case '3':break;
			}
}

	

int main(int argc, char const *argv[]) {
	struct nomina empleados[MAX];
	int x;
	for (x=0; x<MAX; x++)
		empleados[x].selector=0;
	printf("Nomina de la empresa\n");
	menu(empleados);
	return 0;
	}

