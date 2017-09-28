#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;
void main ()
{
	int  real, imaginario, conj, multR, multI, multA, soma;
	printf("Digite a parte real do  numero complexo.\n");
	scanf("%d", &real);
	printf("Digite a parte imaginaria do numero complexo.\n");
	scanf("%d", &imaginario);
	conj= imaginario*(-1);
	multR= real*real;
	multI= real + imaginario + real*conj;
	multA= imaginario*conj;
	soma= multR + multA*(-1);
	printf("O resultado eh:\n %d + %d*i",soma,multI);
	system("pause");
}