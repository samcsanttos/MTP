#include <stdio.h>

int main()
{
    int numero;

    printf("Entre com um numero: ");
    scanf("%d", &numero);
    if(numero%2 == 0)
        printf("O numero eh par!\n");
        else
        printf("O numero eh impar!\n");
        if(numero%3 == 0)
        printf("Eh multiplo de 3\n");
    if(numero%5 == 0)
        printf("Eh multiplo de 5\n");
    if(numero%7 == 0)
        printf("Eh multiplo de 7!\n");

    return 0;
}