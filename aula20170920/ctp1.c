#include<stdio.h>
#include<ctype.h>
#include<iostream>
using namespace std;
void main()
{
	char Frase[200];
	printf("Escreva uma frase:\n");
		fgets(Frase,200,stdin);
		for(int i=0;Frase[i]!='\0';i++)
			Frase[i]=(toupper(Frase[i]));
		printf("A frase toda maiuscula eh:\n %s" , Frase);
		system("pause");
}