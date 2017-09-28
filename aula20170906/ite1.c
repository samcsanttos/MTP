#include <stdio.h>
int main() {
    int i;
    int numero, fatorial = 1;
    printf("O fatorial eh: ");
    scanf("%d",&numero);
    for(i = 2; i <= numero; i++)
        fatorial = fatorial * i;
    printf("O fatorial de %d eh %d\n",numero,fatorial);
    return 0;
}