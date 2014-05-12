#include <stdio.h>
#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	char numero[10];
	int i,maior;
	for (i=0; i == 10;i++)
	{
		printf("digite 10 numero: ");
		scanf("%s",numero);
		printf("%s",numero);
	}
		if (numero[i] > numero[i+1])
		{
			maior = numero[i];
			printf("maior eh %d",maior,"e a posição eh %d", i);	
		}
		if( numero[i] < numero [i+1])
		{
			maior = numero[i+1];
			printf("maior eh %d",maior,"e a posição eh %d", i);
		}
	return 0;
}
