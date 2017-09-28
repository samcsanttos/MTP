#include<stdio.h>
#include<math.h>
#include<iostream>
using namespace std;
void main()
{
	float n,b,logaritimo;
	printf("Informe um numero.\n");
	scanf("%f", &n);
	printf("Informe o valor da base.\n");
	scanf("%f", &b);
	logaritimo=(log10(n))/(log10(b));
	printf("O valor do logaririmo de n na base b eh:\n %f\n",logaritimo);
	system("pause");
}