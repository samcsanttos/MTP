#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    int vetor[] = {0,1,2,4,8,16,1025};
    int tamanho=0,tam = sizeof(vetor)/sizeof(int);
    unsigned char * ponteiro = NULL;
    ponteiro = (unsigned char *)&vetor;

    for(; ponteiro < vetor + tam; ponteiro++)
    {
        printf("%p : %x\n",ponteiro, *ponteiro);
        if(*ponteiro == 0x0)
        {
            tamanho ++;        }

    }
    printf("%d",tamanho);
    return 0;
}