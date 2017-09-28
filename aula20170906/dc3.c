#include <stdio.h>
#include <time.h>
int main() {
    srand(time(0));
    int dado1, dado2, dado3, soma;
    dado1 = rand()%6 + 1;
    printf("Resultado do dado 1\n: %d\n", dado1);
    dado2 = rand()%6 + 1;
    printf("\nResultado do dado 2\n: %d\n", dado2);
    dado3 = rand()%6 + 1;
    printf("\nResultado do dado 3\n: %d\n", dado3);
    soma= dado1 + dado2 + dado3;
    printf("\nResultado da soma dos dados\n: %d", soma);
if(soma == 7 || soma == 11)
    printf("\nJogador ganhou!\n");
else
        printf("\nJogador perdeu!\n");
    return 0;
}