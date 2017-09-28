#include<stdio.h>
#include<stdlib.h>
void main ()

{
	int vetor [10];
	int n,soma=0,produto=1,i;
	printf("Digite 10 numeros\n");
	for(i=0;i<10;i++)
	{
	scanf("%d", &n);
	vetor[i]=n;
	}
	for(i=0;i<10;i++)
	{
		soma= soma + vetor [i];
		produto= produto * vetor [i];
		
	}
	printf("\nA somatoria eh:\n%d\n" "\nO produto eh:\n%d\n", soma, produto);

	system("pause");
}