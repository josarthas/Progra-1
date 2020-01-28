#include<stdio.h>
void tri();
void tri(int *x){
    int a=1,b=1,c;
    c= *x;
    while(a<=c){
    b=1;
    while(b<=a){
    printf("*");
    b=b+1;} 
    printf("\n");
    a=a+1;}}
    
int main(){
 int c;
 printf("Ingresa la base\n");
 scanf("%i",&c);
 
 tri(&c);
 return 1;

}
