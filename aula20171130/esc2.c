<<<<<<< HEAD
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
int main ()
{
	srand(time(0));
	FILE * firetruck;
	char nomearq[32];
	printf("OLÁ! DIGITE O NOME DO ARQUIVO: \n");
	fgets(nomearq, 32, stdin);
		nomearq[strlen(nomearq)-1]='\0';
	firetruck=fopen(nomearq, "w");
	int numeros, i;
	printf("Quantos numeros aleatorios?\n");
	
	scanf("%d", &numeros);
	for (i=0;i<numeros;i++)
		fprintf(firetruck, "%d\n",rand());
	
	fclose(firetruck);
	return 0;
=======
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
int main ()
{
	srand(time(0));
	FILE * firetruck;
	char nomearq[32];
	printf("OLÁ! DIGITE O NOME DO ARQUIVO: \n");
	fgets(nomearq, 32, stdin);
		nomearq[strlen(nomearq)-1]='\0';
	firetruck=fopen(nomearq, "w");
	int numeros, i;
	printf("Quantos numeros aleatorios?\n");
	
	scanf("%d", &numeros);
	for (i=0;i<numeros;i++)
		fprintf(firetruck, "%d\n",rand());
	
	fclose(firetruck);
	return 0;
>>>>>>> ba27b389aefb5fe736b943d7c7ff8179d5d4ccad

}