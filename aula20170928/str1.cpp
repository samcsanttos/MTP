#include<stdio.h>
#include<stdlib.h>
void main ()

{
	int vetor [10]=0;
	int n,i,j,aux;
	for(i=0;i<10;i++)
	{
	printf("Digite 10 numeros\n");
	scanf("%d", &n);
	vetor[i]=n;
	}
	for(i=0;i<5;i++)
	{
		aux=vetor[j];
		vetor[j]=vetor[i];
		vetor[i]=aux;
		i--;
	}
			printf("O numero invertido eh \n\n");
			for(int k=0;k<10;k++)
			{
				printf("%d",vetor[k])
			}
	system("pause");
}