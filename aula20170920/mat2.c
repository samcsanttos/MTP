#include<stdio.h>
#include<math.h>
#include<iostream>
using namespace std;
int main()
{
	float a,b,c,ang;
	printf("Informe o valor do lado b do triangulo.\n");
	scanf("%f", &b);
	printf("Informe o valor do lado c do triangulo.\n");
	scanf("%f", &c);
	printf("Informe o valor do angulo em radianos.\n");
	scanf("%f", &ang);
	a=sqrt(pow(b,2)+pow(c,2)-(2*b*c*cos(ang)));
	printf("O valor do lado a eh:\n %f\n",a);
	return 0;
}