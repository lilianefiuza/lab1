#include <stdio.h> 
#include <stdlib.h> 

void palavra(char nome)
{
	char nome[30];
	for (i=0;i==1;i++)
	{
		if (nome[i] == {'a'})
		{
			printf("%s",&nome)
		}
		if(nome[i] == {'A'})
		{
			printf("%s",&nome)
		}
	}
}

int main() 
{ 

	int i; 
	char nome[30]; 

	printf("\n digite um nome: \n"); 
	scanf("%s",&nome);
	palavra(nome);
	retorn 0;
}