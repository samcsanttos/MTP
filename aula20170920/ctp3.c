using namespace std;
void main()
{
	int cont=0;
	char Frase[200];
	printf("Digite uma frase:\n");
	fgets(Frase,200,stdin);
	for(int i=0;Frase[i]!='\0';i++)
	{
		if(isalpha(Frase[i]));
		cont++;
	}
	printf("O numero de caracteres contidos na frase eh:\n %d\n" , cont);
	system("pause");
}