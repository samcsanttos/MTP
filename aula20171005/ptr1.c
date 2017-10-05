#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    unsigned int valor = 0xFACA8421;
    unsigned char * valorc = NULL;

    printf("Valor em decimal: 0x%p : %u\n", &valor, valor);

    valorc = (unsigned char *)&valor;
    printf("0x%p : %X\n",valorc, *(valorc));
    printf("0x%p : %X\n",valorc+1, *(valorc+1));
    printf("0x%p : %X\n",valorc+2, *(valorc+2));
    printf("0x%p : %X\n",valorc+3, *(valorc+3));

    printf("\n\n\n\n0x%p : %X\n",valorc, *(valorc));
    valorc++;
    printf("0x%p : %X\n",valorc, *(valorc));
    valorc++;
    printf("0x%p : %X\n",valorc, *(valorc));
    valorc++;
    printf("0x%p : %X\n",valorc, *(valorc));

    valorc = valorc-3;
    printf("\n\n\n\n0x%p : %X\n",valorc[0], valorc[0]);
    printf("0x%p : %X\n",valorc[1], valorc[1]);
    printf("0x%p : %X\n",valorc[2], valorc[2]);
    printf("0x%p : %X\n",valorc[3], valorc[3]);


    return 0;
}