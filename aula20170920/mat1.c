#include<stdio.h>
#include<math.h>
#include<iostream>
using namespace std;
void main()
{
	float dist,x1,y1,x2,y2;
	printf("Informe o valor da cooordenada x1.\n");
	scanf("%f", &x1);
	printf("Informe o valor da coordenada y1.\n");
	scanf("%f", &y1);
	printf("Informe o valor da cooordenada x2.\n");
	scanf("%f", &x2);
	printf("Informe o valor da coordenada y2.\n");
	scanf("%f", &y2);
	dist=sqrt(pow((x2-x1),2)+pow((y2-y1),2));
	printf("A distancia entre os dois pontos eh:\n %f\n",dist);
	system("pause");
}