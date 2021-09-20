#include<stdio.h>
#include<stdlib.h>
#define arrsize 2500
void cuentmaymen(float cuents[], float may, float men ){
	int i=0;
	int mx,mn;
	may=0;
	fflush(stdin);
	printf("\nIngrese cantidad en la cuenta No. %d :", i+1);
	scanf("%f",&cuents[i]);
	men=cuents[i];
	mn=i+1;
	if(cuents[i]>may){
		may=cuents[i];
		mx=i+1;
	}
	i++;
	printf("\n La cuenta con mayor cantidad es la #%d , $%.2f \n La cuenta con menor cantidad es: #%d, $%.2f \n",mx,may,mn,men );
	do{
		printf("\nIngrese cantidad en la cuenta No. %d :", i+1);
		scanf("%f",&cuents[i]);
		if(cuents[i]>may){
			may=cuents[i];
			mx=i+1;
		}
		if(cuents[i]<men){
			men=cuents[i];
			mn=i+1;
		}
		fflush(stdin);
		i++;
		printf("\n La cuenta con mayor cantidad es la #%d , $%.2f \n La cuenta con menor cantidad es: #%d, $%.2f \n",mx,may,mn,men );
	}while(i<arrsize);
	return;
}
int main(){
	float cuentas[arrsize];
	int mayx, menx,i;
	fflush(stdin);
	cuentmaymen(cuentas,mayx,menx);
	for(i=0;i<arrsize;i++)
		printf("\nCuenta #%d: $%.2f",i+1,cuentas[i]);
	return 0;
}	
