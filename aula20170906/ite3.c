#include <stdio.h>

int main()
{
    int contaletra, contapalavra;
    char c;

    printf("Digite o texo terminado por '.': \n");
    scanf("%c", &c);

    contaletra = 0;
    contapalavra = 1;

    while(c != '.')
       {
           if(c != ' ' && c!= '1' && c!= '2' && c!= '3' && c!= '4' && c!= '5' && c!= '6' && c!= '7' && c!= '8' && c!= '9' && c!= '0')
              contaletra++;

           if(c == ' ')
              contapalavra++;


          scanf("%c", &c);
       }


     printf("A quantidade de Letras eh: %d e a quantidade de Palavras eh: %d ",contaletra, contapalavra);

     return 0;

}