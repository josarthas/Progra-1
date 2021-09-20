#include <stdio.h>
#include <string.h>
#include <math.h>
char a[10];
void descomponer();
 void descomponer(int x){
      int i=0,z,y=0,w;
 for(i=x-1;i>=0;i--){
    z=a[x-i-1]-48;
    w=z*pow(10,i);
    printf("%d *10^%d=%d\n",a[x-i-1]-48,i,w);
    y=y+z;
}}

int main(){

int i=0,x=0,z,y=0,w;
    printf("Introduce numero\n");
    scanf("%s",a);
    x=strlen(a);
descomponer(x);
return 1;
}    

