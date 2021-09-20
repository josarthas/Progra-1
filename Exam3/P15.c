#include<stdio.h>
#include<stdlib.h>

void div_res(int a, int b){
	int c;
	int d=0;
	if(a<b){
		c=a;
		printf("\n Division %d / %d: %d",a,b,d);
		printf("\n Residuo: %d",c);
	}
	else{
		c=a;
		do{
			c=c-b;
			d++;
		}while (c>=b);
		printf("\n Division %d / %d: %d",a,b,d);
		printf("\n Residuo: %d",c);
	}

}

int main(){
	int a1,a2;
	printf("Ingrese numero: ");
	scanf("%d",&a1);
	printf("Ingrese numero: ");
	scanf("%d",&a2);
	div_res(a1,a2);
	return 0;
}
