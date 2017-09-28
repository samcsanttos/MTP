#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a, b, c, d, e, peso2, peso3, peso5, media;

    printf("Entre com o valor da primeira nota: ");
    scanf("%f", &a);
    printf("Entre com o peso da primeira nota: ");
    scanf("%f", &peso2);
    printf("Entre com o valor da segunda nota: ");
    scanf("%f", &b);
    printf("Entre com o peso da segunda nota: ");
    scanf("%f", &peso2);
    printf("Entre com o valor da terceira nota: ");
    scanf("%f", &c);
    printf("Entre com o peso da terceira nota: ");
    scanf("%f", &peso2);
    printf("Entre com o valor da quarta nota: ");
    scanf("%f", &d);
    printf("Entre com o peso da quarta nota: ");
    scanf("%f", &peso3);
    printf("Entre com o valor da quinta nota: ");
    scanf("%f", &e);
    printf("Entre com o peso da quinta nota: ");
    scanf("%f", &peso5);
    media = (a*peso2 + b*peso2 + c*peso2 + d*peso3 + e*peso5)/(peso2+peso3+peso5);
    printf("A media ponderada eh: %.2f \n\n", media);

    system("pause");
    return 0;
}