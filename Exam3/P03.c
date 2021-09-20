#include <stdio.h>
#include <stdlib.h>
int reser(int fil, int col){
	int i,**matr;
	matr=(int**)malloc(fil*sizeof(int*));
	if (matr == NULL){
			printf("Error reservando");
			exit(1);
	}
	for(i=0;i<fil;i++){
		matr[i]=(int*)malloc(col*sizeof(int));
		if(matr==NULL){
			printf("Error reservando");
			exit(1);
		}
	}
	return matr;
}

void llena(int **mat, int fil, int col){
	int x, y;
	int *xtot,*ytot;
	xtot=(int*)malloc(fil*sizeof(int));
	ytot=(int*)malloc(col*sizeof(int));
	for (x=0;x<fil;x++){
		for(y=0;y<col;y++){
			printf("Ingrese valor de la posicion %d,%d: ",x,y);
			scanf("%d",&mat[x][y]);
		}
	}
	for (x=0;x<fil;x++){
		xtot[x]=0;
		for(y=0;y<col;y++){
			xtot[x]=xtot[x]+mat[x][y];
		}
		printf("\nEl valor total de la suma de la columna %d, es= %d",x,xtot[x]);
	}
		for (y=0;y<col;y++){
			ytot[y]=0;
		for(x=0;x<fil;x++){
			ytot[y]=ytot[y]+mat[x][y];	
		}
		printf("\nEl valor total de la suma de la fila %d, es= %d",y,ytot[y]);
	}
}

int main(){
	int n,m,i;
	int **mat;
	printf("Ingrese el valor de N: ");
	scanf("%d",&m);
	printf("Ingrese el valor de M: ");
	scanf("%d",&n);

	mat=reser(n,m);
	llena(mat,n,m);
	return 0;
}
