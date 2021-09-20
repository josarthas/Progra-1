#include<stdio.h>
#include<string.h>
int palindromo(){
	char cadena[64], compara1[64], compara2[64];
	int i,j,pal;
	int k=0;
	printf("Ingrese texto: ");
	fflush(stdin);
	fflush(stdout);
	gets(cadena);
	j=strlen(cadena);
	for(i=0;i<j;i++){
		if(cadena[i]!=32){
		compara1[k]=cadena[i];
		k++;
		}
	}
	printf("%d",k);
	j=k-1;
	for(i=0;i<k;i++){
		compara2[i]=compara1[j];
		j--;
	}
	j=0;
	pal=0;
	for(i=0;i<=k;i++){
		if(compara2[i]!=compara1[i])
			pal++;
	}
	return pal;
}

int main(){
	int pal;
	pal=palindromo();
	if(pal==0)
		printf("Es palíndromo");
	else
		printf("No es palíndromo");
	
	return 0;
}
