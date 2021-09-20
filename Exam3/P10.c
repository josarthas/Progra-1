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
int conversor(int tama){
	int i;
	char buffer[2];
	fflush(stdin);
	fgets (buffer, tama, stdin);
	i = atoi (buffer);
	fflush(stdin);
	return i;
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

}

void busca(int **mat, int fil,int col){
	int numb,i,j,x,y,si,sj;
	printf("Introduce número");
	numb=conversor(4);
	for(i=0;i<fil;i++){
		for(j=0;j<col;j++){
			if (mat[i][j]==numb){
			
			x=i;
			y=j;
			break;
			}
		}
	}
	i=x;
	si=0;
	sj=0;
	j=y;
	printf("\nSuma(");
	for (x=0;x<fil;x++){
		printf(" %d + ",mat[x][j]);
		si=si+mat[x][j];
	}
	printf(")= %d",si);
	printf("\nSuma(");
	for (y=0;y<col;y++){
		printf(" %d ",mat[i][y]);
		sj=sj+mat[i][y];
	}
	printf(")= %d",sj);	
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
	busca(mat,n,m);
	return 0;
}
