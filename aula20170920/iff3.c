#include <iostream>
#include <stdio.h>
 int main() {
     int numero, i, fatorial;
     printf("Entre com um numero entre 12 e 20: ");
    scanf("%d",&numero);
     fatorial = 1;
     for(i = 12; i <= numero; i++)
        fatorial = fatorial*i;
    printf("Fatorial de %d = %d.\n",numero,fatorial);
return 0;
 }