#include<stdio.h>
#include<stdlib.h>
void main ()
{
int n,i, maior, menor; 
int vetor[1000];
printf("Informe um numero de 1 a 1000.\n");
scanf("%d", &n);
for(i=0;i<n;i++)
{
  vetor[i]= rand()%10;
}
maior=vetor[0];
menor=vetor[0];
for(i=0;i<n;i++)
{
	if(maior<vetor[i])
		maior=vetor[i];
	if(menor>vetor[i])
		menor=vetor[i];
}
printf("\nO maximo eh:\n%d" "\nO minimo eh:\n%d\n", maior, menor);
system("pause");
}