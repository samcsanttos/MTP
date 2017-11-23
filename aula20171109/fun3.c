#include<iostream>
#include<stdio.h>
using namespace std;
void comparar(int A[], int B[],int n, int m)
{
	printf("Os elementos em comum sao:\n");
	for(int i=0;i<n;i++)
	for(int j=0;j<m;j++)
		if(A[i]==B[j])
			printf("%d",A[i]);
}
void main ()
{
	int A[]={1,3,5,7,9,11,13,15,17,19,21,23,25,27,29,21};
	int n=sizeof(A)/sizeof(int);
	int B[]={1,2,3,4,5,6,8,10,12,7,29};
	int m=sizeof(B)/sizeof(int);
	system("pause");
}

