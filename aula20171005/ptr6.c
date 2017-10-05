#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[16];
    int i;
    int *p;
    printf("Digite o texto : ");
    fgets(str,16,stdin);
    p = (int *) str;
    printf("\nEm decimal: ");
    for (i=0;i<sizeof(p);i++)
    {
        printf("%d  ",p[i]);
    }
    printf("\nEm hexadecimal: ");
    for (i=0;i<sizeof(p);i++)
    {
        printf("%x ",p[i]);
    }
    return 0;
}