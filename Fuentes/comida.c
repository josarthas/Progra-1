#include <stdio.h>
int main(){
int d=0,d1=0,c=0,c1=0,cien=0,cien1=0,op=0,total=0,cambio=0,p=0;
   do{ 
        printf("Menú\n");
        printf("Elija su producto\n");
        printf("1.-carnitas $270\n");
        printf("2.-carne asada $340\n");
        printf("3.-comida italiana $390\n");
        printf("4.-salir\n");
        scanf("%d",&op);
            if(op<1 || op>4)
                printf("Favor de elegir una opcion valida\n");}while (op<1 || op>4);
            if(op==1)
                p=270;
            if(op==2)
                p=340;
            if(op==3)
                p=390;
            if (op==4)
                p=0;
   if(p!=0){         
    do{
        do{printf("¿Cuantas monedas de $100 va a usar?\n");
        scanf("%d",&cien);}while(cien<0);
        
        do{printf("¿Cuantas monedas de $50 va a usar?\n");
        scanf("%d",&c);}while(c<0);
        do{printf("¿Cuantas monedas de $10 va a usar?\n");
        scanf("%d",&d);}while(d<0);
        total+=((100*cien)+(50*c)+(10*d));
        if(total<p){
        printf("pago insuficiente lleva %i de %i\n",total,p);
        printf("le faltan %i\n",p-total);}

    }while(total<p);
    if(total!=p){
    do{cambio=total-p;
                    cien1=cambio/100;
                    cambio=(cambio-(cien1*100));
                    c1=cambio/50;
                    cambio=(cambio-(c1*50));
                    d1=cambio/10;
                    cambio=(cambio-(d1*50));
                    printf("Su cambio es:\n");
                    printf("Monedas de $100: %d\n",cien1);
                    printf("Monedas de $50: %d\n",c1);
                    printf("Monedas de $10: %d\n",d1);}while(cambio>0);}
    else{
        printf("no tienes cambio\n");}
    printf("Gracias por su compra\n");}
return 1;}            
