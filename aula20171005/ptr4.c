#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    double real1,real2,soma;
    printf("Informe dois valores reais seguidos de um espaço: ");
    scanf("%lf %lf",&real1,&real2);

    soma = real1 + real2;

    printf("Endereço de memoria Real =  0x : Valor real\n\n" );
    printf("Real 1 0x%p : %g\n",&real1,real1);
    printf("Real 2 0x%p : %g\n",&real2,real2);
    printf("Soma   0x%p : %g\n\n\n", &soma, soma);

    return 0;
}