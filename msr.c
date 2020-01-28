#include <stdio.h>
    void Suma();
    void Suma(int A[20][20],int B[20][20],int C[20][20],int y, int x){
        int i,j;
        printf("la suma de las matices A y B es:\n");
        for (i=0;i<=x-1;i++){
        for(j=0;j<=y-1;j++){
        C[i][j]=A[i][j]+B[i][j];}}
        for (i=0;i<=x-1;i++){
        printf("\n");
        for(j=0;j<=y-1;j++){
        printf("%d   ",C[i][j]);}}
        printf("\n");       
        }
        void Resta();
        void Resta(int A[20][20],int B[20][20],int R[20][20],int y, int x){
        int i,j;
        printf("la suma de las matices A y B es:\n");
        for (i=0;i<=x-1;i++){
        for(j=0;j<=y-1;j++){
        R[i][j]=A[i][j]-B[i][j];}}
        for (i=0;i<=x-1;i++){
        printf("\n");
        for(j=0;j<=y-1;j++){
        printf("%d   ",R[i][j]);}}
        printf("\n");       
        }

int main(){
int A[20][20],B[20][20],C[20][20],R[20][20];
int i,j,x,y;    

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


Suma(A,B,C,y,x);

Resta(A,B,R,y,x);

return 1;}
