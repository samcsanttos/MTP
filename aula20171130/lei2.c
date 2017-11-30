<<<<<<< HEAD
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Ponto{
	float x;
	float y;
};
int main (){
	FILE * inner_circle;
	struct Ponto * vetor;
	int n, i;
	printf("Quantos pontos deseja registrar?\n");
	scanf("%d", &n);
	printf("Entre com coordenadas separadas por espaço,\n");
	vetor=(struct Ponto *)malloc(n*sizeof(struct Ponto));
	for(i=0;i<n;i++){
printf("Coordernadas %d:\n", i+1);
scanf("%f%f", &vetor[i].x, &vetor[i].y);
	}
	printf("Qual o nome do arquivo?\n");
	char nomearq[32];
	getchar();
	gets(nomearq);
	inner_circle=fopen(nomearq, "wb");
	fwrite(vetor,sizeof(struct Ponto), n, inner_circle);
	fclose(inner_circle);

return 0;
=======
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Ponto{
	float x;
	float y;
};
int main (){
	FILE * inner_circle;
	struct Ponto * vetor;
	int n, i;
	printf("Quantos pontos deseja registrar?\n");
	scanf("%d", &n);
	printf("Entre com coordenadas separadas por espaço,\n");
	vetor=(struct Ponto *)malloc(n*sizeof(struct Ponto));
	for(i=0;i<n;i++){
printf("Coordernadas %d:\n", i+1);
scanf("%f%f", &vetor[i].x, &vetor[i].y);
	}
	printf("Qual o nome do arquivo?\n");
	char nomearq[32];
	getchar();
	gets(nomearq);
	inner_circle=fopen(nomearq, "wb");
	fwrite(vetor,sizeof(struct Ponto), n, inner_circle);
	fclose(inner_circle);

return 0;
>>>>>>> ba27b389aefb5fe736b943d7c7ff8179d5d4ccad
}