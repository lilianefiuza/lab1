#include <stdio.h>
#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{
	char numero[10],igual[10];
	int i,j;
	printf("digite 10 valores: ");
	for (i=1; i ==10; i++)
	{
		scanf("%d",numero);
	}
	for (i=1; i==10;i++)
	{
		if (numero[i] == numero [i+1])
		{
			igual[j] = numero[i];
		}
	}
	printf("Sao iguais: %s", igual);
	return 0;
}
