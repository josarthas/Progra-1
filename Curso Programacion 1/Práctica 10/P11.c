#include<stdio.h>


//La funcion misterio debe llamarse "cuadrado"

int misterio(int n){
	int i,s;
	s=0;
	for(i=1;i<=(n*2);i=i+2){
		s=s+i;
	}
	return s;
}
int main(){
	int x;
	x=misterio(5);
	printf("%d",x);
	return 0;
}
