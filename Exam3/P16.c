#include<stdio.h>
#include<stdlib.h>
#include<string.h>

 void insert(int list[], int tama)
{
 int i,j,k,temp;
 for(i=0; i<tama; i++)
 {
	
 temp=list[i];
 j=i-1;
 while(j>=0 && list[j] >temp)
 {
 list[j+1] = list[j];
  printf("\n Vector:");
 for(k=0;k<tama;k++)
 	printf("%d ",list[k]);
 j--;
 }

 list[j+1] = temp;
 printf("\n Vector:");
 for(k=0;k<tama;k++)
 	printf("%d ",list[k]);
 }
}

int main(){
	int i,j;
	//Crea vector y archivo vector, para volver a probar, borrar archivo vector.txt
	int  vector[6]={3,9,38,6,21,10};
	FILE *fvector;

	if ((fvector=fopen("vector.txt","r"))==NULL)
	{
		fvector=fopen("vector.txt","w");
	}
	else
		{	
			for (j=0; j<6; j++)
				fread (&vector[j],sizeof(int),1,fvector);
			fclose(fvector);
		} 
	
	// llama funciones
	printf("\nVector: ");
	for(i=0;i<6;i++){
		
		printf("%d ",vector[i]);
	}
	insert(vector,6);
	printf("\nVector: ");
	for(i=0;i<6;i++){
		printf("%d ",vector[i]);
	}	
	
	// aqui ya no por que archivo guarda
	if ((fvector=fopen("vector.txt","w"))!=NULL)
	{ 
		for (j=0; j<6; j++)
		{
			
			fwrite(&vector[j],sizeof(int),1,fvector);
		}
		
		fclose(fvector);
	}
	else
		printf("\nError en archivo");

	fflush(stdin);
	getchar();
	return 0;
	
}
