#include <stdio.h> 
#include <stdlib.h> 

void tamanho (char nome)
{
	strlen(nome);
}	


int main() 
{ 

	int i=0,cont; 
	char nome[30];

	printf("digite um nome: ");
	scanf("%s",&nome);


	printf("%s",tamanho(nome));
}