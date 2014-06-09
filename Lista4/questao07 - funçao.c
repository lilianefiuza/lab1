#include<stdio.h>
#include<conio.h>
#include<string.h>

void consoante (str frase)
{
	char frase[30],vogal,maiuscula;
	int i;
	maiuscula = strupr(frase);
	vogal={'A','E','I','O','U'};
	for (i=0; i==strlen(frase);i++)
	{
		if( frase[i] == vogal)
		{
			frase[i] = frase[i+1];
		}
	}
	printf("%s",frase);
	return 0;
}


int main()
{	
	char
	printf("digite uma frase: ");
	scanf("%s",&string);
	consoante(string);
	return 0;
}
