#include<stdio.h>
#include<stdlib.h>
#include<time.h>
//Sin conio.h
void alarma_temperatura(int temp, int alarma, int *sal){
	*sal=0;
	printf("\nTemperatura: %d°C, la alarma se activa despues de %d°C",temp,alarma);
	
	if (temp==-243)
		printf("\n-ALERTA: TEMPERATURA CERO ABSOLUTO-"); 
	if (temp>=100)
		printf("\n-ALERTA: TEMPERATURA MAYOR A 100°C-"); 
	if (temp<=0)
		printf("\n-ALERTA: TEMPERATURA Menor a 0°C-");
	if (temp>=alarma){
		printf("\n\a      ------!!!ALARMA!!!------\n------La temperatura ha superado el rango de alarma------\n");
		*sal=1;
	}
}

void sensor(int *ex, int init){

	int tem,num,sig,al;
	char opc;
	clock_t t,s;

	if(init==1){
	*ex=0;
	do{
	printf("Ingrese temperatura de alarma: ");
	scanf("%d",&al);
	}while((al<-243)||(al>243));
	t=clock();
	while(*ex==0){
		//vamos a comernos el procesador por que podemos y por que nadie dijo que no
		t=clock() - t;
		if(t==1000){	
			t=clock();
			num=rand() % 243;
			sig=rand() % 20;
			if(sig==0)
				tem=num*-1;
			else
				tem=num;
			alarma_temperatura(tem,al,ex);
			if(*ex==1)
				break;
			
		}
		if(*ex==1)
		break;
	}
	}
	

}

int main(){
	int init;
	int *ex;
	char opc;
	srand(time(NULL));
	
	do{
	init=0;
	printf("Ingrese orden ((I)niciar / (S)alir): ");
	fflush(stdin);
	opc=getchar();
	if((opc==73)||(opc==105))
	init=1;
	sensor(&ex,init);
	}while(init!=0);	

	return 0;
}
