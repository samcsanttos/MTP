#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    int vetor[] = {0x0F,0xFF,0xFFFF,0xFFFFFF,0x80000001,0xFFFFFFFF};
    int tamanho=0,tam = sizeof(vetor)/sizeof(int);
    unsigned char * ponteiro = NULL;
    ponteiro = (unsigned char *) &vetor;

    for(; ponteiro < vetor + tam; ponteiro++)
    {
        printf("%p : %x\n",ponteiro, *ponteiro);
        if(*ponteiro != 0x0)
        {
            tamanho++;        }

    }
    printf("%d",tamanho);
    return 0;
}