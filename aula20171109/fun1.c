#include<iostream>
#include<stdio.h>
using namespace std;
void fracao (int* a, int* b, int* c, int* d)
{
	*a=*a**d + *b**c;
	*b=*c**d;
	printf("valor a=%d \n", *a);
	printf("valor b=%d \n", *b);
}
void main()
{
	int a,b,c,d;
	    printf("Informe o valor do numerador a.\n");
		scanf("%d",&a);
		printf("Informe o valor do denominador c.\n");
		scanf("%d", &c);
		printf("Informe o valor do numerador b.\n");
		scanf("%d",&b);
		printf("Informe o valor do denominador d.\n");
		scanf("%d",&d);
		fracao(&a,&b,&c,&d);
		printf("O valor do numerador eh: a=%d\n", a);
		printf("O valor do denominador eh: b=%d\n",b);
		system("Pause");
}

		


