#include <stdio.h>
int A[20][20],B[20][20],C[20][20],R[20][20];
int i,j,x,y;    
void Datos();
void Datos(int x, int A[20][20],int B[20][20]){
    for (i=0;i<=x-1;i++){
    for(j=0;j<=x-1;j++){
        printf("Dame el valor que se ubica en el espacio A[%d],[%d]\n",i,j);
scanf("%d",&A[i][j]);}}
for (i=0;i<=x-1;i++){
for(j=0;j<=x-1;j++){
printf("Dame el valor que se ubica en el espacio B[%d],[%d]\n",i,j);
scanf("%d",&B[i][j]);}}
}
void Suma();
void Suma(int A[20][20],int B[20][20],int x){
int i;
    printf("la suma de las matices A y B es:\n");
for (i=0;i<=x-1;i++){
    for(j=0;j<=x-1;j++){
C[i][j]=A[i][j]+B[i][j];}}

for (i=0;i<=x-1;i++){
    printf("\n");
    for(j=0;j<=x-1;j++){
        printf("%d   ",C[i][j]);}}
printf("\n");}  

void Resta();
void Resta(int A[20][20],int B[20][20],int x){
    int i;
printf("la resta de las matices A y B es:\n");
for (i=0;i<=x-1;i++){
    for(j=0;j<=x-1;j++){
R[i][j]=A[i][j]-B[i][j];}}

for (i=0;i<=x-1;i++){
    printf("\n");
    for(j=0;j<=x-1;j++){
        printf("%d   ",R[i][j]);}}
printf("\n"); }

    void diagonalA();
    void diagonalA(int A[20][20],int x){
                    int i;
    printf("la diagonal principal de la matriz A es:\n");
    for(i=0;i<x;i++){
    printf("%d \n",A[i][i]);
    printf("    ");}
    printf("\n");}    

void diagonalB();
void diagonalB(int B[20][20],int x){
int i;
printf("la diagonal principal de la matriz B es:\n");
for(i=0;i<x;i++){
printf("%d \n",B[i][i]);
printf("    ");}
printf("\n");} 
    
    void diagonalC();
    void diagonalC(int R[20][20],int x){
    int i;
    printf("la diagonal principal de la matriz suma es:\n");
    for(i=0;i<x;i++){
    printf("%d \n",R[i][i]);
    printf("    ");}
    printf("\n");} 

void diagonalD();
void diagonalD(int D[20][20],int x){
                    int i;
printf("la diagonal principal de la matriz resta es:\n");
for(i=0;i<x;i++){
printf("%d \n",D[i][i]);
printf("    ");}
printf("\n");} 
int main(){

    do{
        printf("Dame el numero tamaño que tendran las matrices\n");
        scanf("%d",&x); }while(x<1 || x>20);

Datos(x,A,B);


Suma(A,B,x);     

Resta(A,B,x);

diagonalA(A,x);

diagonalB(B,x);

diagonalC(C,x);

diagonalD(R,x);

return 1;}
