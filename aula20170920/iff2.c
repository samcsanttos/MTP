#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	int n;
	float somaf=0, invertf;
	double somad=0, invertd;
	printf("Informe um numero.\n");
	scanf("%d", &n);
	invertf= (1.0/n);
	invertd= (1.0/n);
	for(int i=0; i<729; i++)
		somaf= somaf + invertf;
	for(int i=0; i<729; i++)
		somad= somad + invertd;
	printf("O resultado eh:\n %.15f\n",somaf);
	printf("O resultado eh:\n %.15lf\n",somad);
	return 0;
}