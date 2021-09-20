#include <stdio.h>
#include <string.h>
#include <math.h>

void descomponer();
 void descomponer(int x,char a){
      int i=0,z,y=0,w;
 for(i=x-1;i>=0;i--){
    z=a[x-i-1]-48;
    w=z*pow(10,i);
    printf("%d *10^%d=%d\n",a[x-i-1]-48,i,w);
    y=y+z;
}}

int main(char *a[10]){
int i=0,x=0,z,y=0,w;
if(a>0){
    scanf("%s",a);
}
if (a<0){
    printf("No se ingreso nada");}
    x=strlen(a);
descomponer(x,a);
return 1;
}    

