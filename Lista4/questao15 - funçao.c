#include <stdlib.h>
#include <stdio.h>
#include <string.h>


void inverter(char s)
{
	int c, i, j;

	for (i = 0, j = strlen(s) - 1; i < j; i++, j--) 
	{
		c = s[i];
		s[i] = s[j];
		s[j] = c;
	}
}

int main (){

        char str;
        char aux;

        printf("\n Insira uma string: \n");
        scanf("%s",&str);


        inverter(str);
        strcpy(str,aux);
        
        if(strcmp(str,aux) != 0) 
	{
                printf("E' Palindromo");
        }
        else 
	{
                printf("Nao e palindromo!");
        }
	return 0;
}

strcpy= copia a string;
strcmp = compara palavras