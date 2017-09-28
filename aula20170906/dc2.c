#include <stdio.h>
#include <time.h>
int main() {
    srand(time(0));
    int numerousuario, numeroaleat, soma, par, impar;
    numeroaleat = rand()%10;
    printf("Resultado\n: %d\n", numeroaleat);
    printf("Entre com um numero: ");
    scanf("%d", &numerousuario);
    if(numerousuario>0)
        soma = numerousuario + numeroaleat;
        printf("\nResultado da soma dos numeros\n: %d", soma);
if(soma%2 == 0)
    printf("\nNumero eh par!\n");
else
        printf("\nNumero eh impar!\n");

    return 0;
}