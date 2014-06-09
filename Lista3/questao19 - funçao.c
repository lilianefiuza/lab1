#include <stdio.h>
#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void vetor (str numero)
{
	char numero[10];
	int i,maior;
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



int main() 
{
	char num[10];
	printf("digite 10 numero: ");
	scanf("%s",num);
	printf("%s",num);
	vetor(num);
	return 0;
}
