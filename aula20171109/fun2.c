#include<iostream>
#include<stdio.h>
using namespace std;
void preencher (int*a,int*b,int*c,int*d)
{
	*c=*a / *b;
	*d=*a%*b;
	printf("valor c%d \n", *c);
	printf("valor d%d \n", *d);
}
void main ()
{
	int a, b,c,d;
	printf("Informe o numerador a.\n");
	scanf("%d", &a);
	printf("Informe o denominador b.\n");
	scanf("%d",&b);
	preencher(&a,&b,&c,&d);
	system("pause");
}

