#include<stdio.h>
#include<stdlib.h>
void main ()

{
	int vetor [1000],n,i,j,soma=0,media;
	printf("Digite um numero inteiro e positivo\n");
	scanf("%d", &n);
	for(i=0;i<1000;i++)
	{
		vetor[i]=rand()%n;
	}
	for(j=0;j<1000;j++)
	{
		soma=soma+vetor[j];
		media=soma/1000;
	}
	printf("A media eh:%d \n\n",media);
	system("pause");
}