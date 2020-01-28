#include <stdio.h>
     void imprimir();
    void imprimir(float *c,float *v){
        float ma,me;
        ma= *c;
        me= *v;
        printf("La mayor calificacion es:%f",ma);
    printf("\n");
    printf("La menor calificacion es:%f",me);
    printf("\n");}
int main(){
int b=0;
float c,ma,me;
    while (c!=0){
        printf("Dame la calificacion y si desea acabar de intriducir calificaciones ingrese 0 \n ");
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
imprimir(&ma,&me);

    return 1;
}
