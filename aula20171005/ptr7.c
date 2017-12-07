#include<iostream>
#include<stdio.h>
using namespace std;
int main ()
{
	long int vetor[4]={0};
	int i;
	char *p;
	for(i=0;i<4;i++)
	{
		printf("Digite quatro numeros.\n", i+1);
			scanf("%ld", &vetor[i]);

	}

	p= (char *) &vetor;
	
	printf("\nO texto transformado eh:\n");
	for(i=0;i<sizeof(vetor);i++)
	{
		printf("%c",*(p+i));
	}
	printf("\n\n\n");
	return 0;
}

		