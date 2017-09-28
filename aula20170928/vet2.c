#include<stdio.h>
#include<stdlib.h>
void main ()

{
	int vetor [10];
	int n,i,j,aux;
	printf("Digite 10 numeros\n");
	for(i=0;i<10;i++)
	{
	scanf("%d", &n);
	vetor[i]=n;
	}
	for(j=0;j<5;j++)
	{
		i--;
		aux=vetor[j];
		vetor[j]=vetor[i];
		vetor[i]=aux;
		
	}
	printf("O numero invertido eh: \n\n");
	for(int k=0;k<10;k++)
	{
		printf("%d",vetor[k]);
	}
	system("pause");
}
