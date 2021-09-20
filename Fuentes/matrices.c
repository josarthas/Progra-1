#include <stdio.h>
int main(){
int i,j,A[20][20],B[20][20],C[20][20],R[20][20],x,y;
    do{
        printf("Dame el numero de filas que tendran las matrices\n");
        scanf("%d",&x); }while(x<1 || x>20);

    do{
        printf("Dame el numero de columnas que tendran las matrices\n");
        scanf("%d",&y);
        if(y!=x)
        printf("las matices tienen que ser cuadradas\n"); }while(y!=x);

for (i=0;i<=x-1;i++){
    for(j=0;j<=y-1;j++){
        printf("Dame el valor que se ubica en el espacio A[%d],[%d]\n",i,j);
scanf("%d",&A[i][j]);}}

for (i=0;i<=x-1;i++){
    for(j=0;j<=y-1;j++){
        printf("Dame el valor que se ubica en el espacio B[%d],[%d]\n",i,j);
scanf("%d",&B[i][j]);}}

printf("la suma de las matices A y B es:\n");
for (i=0;i<=x-1;i++){
    for(j=0;j<=y-1;j++){
C[i][j]=A[i][j]+B[i][j];}}

for (i=0;i<=x-1;i++){
    printf("\n");
    for(j=0;j<=y-1;j++){
        printf("%d   ",C[i][j]);}}
printf("\n");       

printf("la resta de las matices A y B es:\n");
for (i=0;i<=x-1;i++){
    for(j=0;j<=y-1;j++){
R[i][j]=A[i][j]-B[i][j];}}

for (i=0;i<=x-1;i++){
    printf("\n");
    for(j=0;j<=y-1;j++){
        printf("%d   ",R[i][j]);}}
printf("\n"); 


printf("la diagonal principal de la matriz A es:\n");
for(i=0;i<=x-1;i++){
printf("%d \n",A[i][i]);
printf("    ");}
printf("\n"); 

printf("la diagonal principal de la matriz B es:\n");
for(i=0;i<=x-1;i++){
printf("%d  \n",B[i][i]);
printf("    ");}
printf("\n"); 

printf("la diagonal principal de la matriz suma es:\n");
for(i=0;i<=x-1;i++){
printf("%d \n",C[i][i]);
printf("    ");}
printf("\n"); 

printf("la diagonal principal de la matriz resta es:\n");
for(i=0;i<=x-1;i++){
printf("%d  \n",R[i][i]);
printf("    ");}
printf("\n"); 

return 1;}
