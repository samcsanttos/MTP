#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;
void main ()
{
	int  creal, cimagi, real1, real2, im1, im2;
	printf("Digite a parte real do primeiro numero complexo.\n");
	scanf("%d", &real1);
	printf("Digite a parte imaginaria do primeiro numero complexo.\n");
	scanf("%d", &im1);
	printf("Digite a parte real do segundo numero complexo.\n");
	scanf("%d", &real2);
	printf("Digite a parte imaginaria do segundo numero complexo.\n");
	scanf("%d", &im1);
	creal= real1 + real2;
	cimagi= (im1 + im2);
	printf("A soma dos numeros complexos eh:\n %d + %d*i",creal,cimagi);
	system("pause");
}


