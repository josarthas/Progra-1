#include <stdio.h>
#include <string.h>
#include <math.h>
int main(){
char a[10];
int i=0,x=0,z,y=0,w;
    printf("Introduce numero\n");
    scanf("%s",a);
    x=strlen(a);
for(i=x-1;i>=0;i--){
    z=a[x-i-1]-48;
    w=z*pow(10,i);
    printf("%d *10^%d=%d\n",a[x-i-1]-48,i,w);
    y=y+z;
}
return 1;
}
