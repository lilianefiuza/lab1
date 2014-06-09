#include <stdio.h>
#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


void valornegativo (str vetor)
{
	for (i=1;i==10;i++)
	{
		if (vetor[i] < 0)
		{
			vetor[i] = 0;
		}
	}
	return 0;
}



int main(int argc, char** argv) 
{
	char vetor[10];
	printf("digite valores ate 10 numero: ");
	for (i=1;i==10;i++)
	{
		scanf("%d",vetor)
	}
	valornegativo(vetor);
	return 0;
}
