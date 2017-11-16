#include <stdio.h>
#include <stdlib.h>
float** modificar (float ** matriz, float **transposta, int l, int c);
int main ()
{
	int l, c, i, j;
	printf("Digite o numero de linhas e de colunas da sua matriz: ");
	scanf("%d %d", &l, &c);
	float ** matriz, **transposta;
	matriz= (float **)calloc(l, sizeof(float*));
	for (i=0; i<l; i++)
		matriz[i]=(float*)calloc(c, sizeof(float));	
	transposta= (float **)calloc(c, sizeof(float*));
	for (i=0; i<c; i++)
	transposta[i]=(float*)calloc(l, sizeof(float));	
	for (i=0; i<l; i++)
		for(j=0;j<c;j++)
		{
		printf("Preencha matriz na posicao %dx%d\n", i+1, j+1);
			scanf("%f", &matriz[i][j]);
		}
		 transposta=modificar (matriz, transposta, l, c);
		 printf("A transposta e':\n");
		for (i=0; i<c;i++)
		{
		printf(" ");
			for(j=0;j<l;j++)
	printf("%g",transposta[i][j]);
	printf("\n");
}
	
	for(i=0;i<l;i++)
	{
		free(matriz[i]);

	}
	for(i=0;i<c;i++)
	{
		free(transposta[i]);

	}
	
	free(matriz);
	free(transposta);
	return 0;
	
}
float** modificar(float ** matriz, float **transposta, int l, int c)
{	
	int i, j;
	for (i=0; i<c;i++)
	for(j=0;j<l;j++)
	transposta[i][j]=matriz[j][i];
	return transposta;
}