#include <stdio.h>
#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void valorigual (int numero)
{
	char numero[10],igual[10];
	int i,j;
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



int main(int argc, char** argv) 
{
	char num[10];
	int i;
	printf("digite 10 valores: ");
	for (i=1; i ==10; i++)
	{
		scanf("%d",num);
	}
	valorigual(num);
	return 0;
}
