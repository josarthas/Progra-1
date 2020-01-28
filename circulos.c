#include<stdio.h>
#include<math.h>
int main(){
float X,Y,x,y,R,r,recta,rrecta,s,a,b;
    printf("Dame x de la circunferencia 1 \n");
        scanf("%f",&X);
    printf("Dame y de la circunferencia 1\n");
        scanf("%f",&Y);
    do{printf("Dame el radio\n");
        scanf("%f",&R);}while(R<0);

    printf("Dame x de la circunferencia 2 \n");
        scanf("%f",&x);
    printf("Dame y de la circunferencia 2\n");
        scanf("%f",&y);
    do{printf("Dame el radio\n");
        scanf("%f",&r);}while(r<0);

s=R+r;
a=R-r;
recta=(x-X)*(x-X)+(y-Y)*(y-Y);
rrecta=sqrt(recta);
b=fabs(a);
    if(rrecta>s || b>rrecta){
        printf("las circunferencias no se intresectan \n");}
    else{
      printf("Las circunferencias  se intresectan \n");}
return 1;}
