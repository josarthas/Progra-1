#include <stdio.h>
int main(){
int b=0;
float c,ma,me;
    while (c!=0){
        printf("Dame la calificacion");
        scanf("%f",&c);
            if (b==0){
                ma=c;
                me=c;
                b=1;}
    if(c!=0){
    if (c>ma)
        ma=c;
    if(c<me)
        me=c;}}
printf("La mayor calificacion es:%f",ma);
printf("\n");
printf("La menor calificacion es:%f",me);
printf("\n");
    return 1;
}
