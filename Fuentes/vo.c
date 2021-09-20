#include <stdio.h>
#include <string.h>
int main (int a, char*b[]){
char cad[20];
char *aux;
int x,y[5];
y[0]=0;
y[1]=0;
y[2]=0;
y[3]=0;
y[4]=0;
    printf("Dame cadena \n");
    scanf("%s",cad);
for(x=0; x<strlen(cad);x++){

if(cad[x]==65 || cad[x]==97)
y[0]=y[0]+1;
    if(cad[x]==69 || cad[x]==101)
    y[1]=y[1]+1;
if(cad[x]==73 || cad[x]==105)
y[2]=y[2]+1;
    if(cad[x]==79 || cad[x]==111)
    y[3]=y[3]+1;
if(cad[x]==85 || cad[x]==117)
y[4]=y[4]+1;}

printf(" a=%i\n e=%i\n i=%i\n o=%i\n u=%i\n",y[0],y[1],y[2],y[3],y[4]);
return 1;}
