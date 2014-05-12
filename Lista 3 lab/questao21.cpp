#include <stdio.h>
#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{
	char vetor[10];
	int i,cont=0;
	printf("digite 10 elementos: ");
	for (i=1; i ==10;i++)
	{
		scanf("%s",vetor);
	}
	for (i=1; i == 10; i++)
	{
		if (vetor[i] % 2 ==0)
		{
			cont = cont+1;
		}
	}
	printf("%s", cont);
	return 0;
}
