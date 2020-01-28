#include <stdio.h>
    void define();
    void define(char *x){
        char b;
            b= *x;
             if (b>=65 && b<=90)
        printf("Es mayuscula \n");
        else if (b>=97 && b<=122)
        printf("Es minuscula \n");
        else if (b>=48 && b<=57)
        printf ("Es numero \n");
    }
int main() {
char b;
    while(b!=0); {
        printf ("Dame valor \n");
        scanf ("%c",&b);
define(&b);
    } 
return 1;
}
