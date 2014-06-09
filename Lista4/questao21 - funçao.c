#include<stdio.h>
#include<conio.h>
#include<string.h>

void maiuscula(char palavra)
{
	char palavra;
	strlwr(palavra);

}


int main()
{	
	char palavra[30];
	int i,j;
	printf("digite uma palavra em letras maiusculas: ");
	scanf("%s",&palavra);


	printf("palavra em maiuscula eh: %s", maiuscula(palavra) );
	return 0;
}