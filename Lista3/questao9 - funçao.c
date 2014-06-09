#include <stdio.h>
#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void contagem() 
{
	int i, numero;
	for (i=1; i<=100; i++)
	{
		printf("\n%d",i);
	}
	while (numero <100)
	{
		numero = numero + 1;
		printf("\n%d",numero);
	}
	return 0;
}

int main()
{
	contagem();
	return 0;
}