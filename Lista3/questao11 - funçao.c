#include <stdio.h>
#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


void A (str sequencia)
{
	i=0;
	while (sequencia[i] != 0)
	{
		i=i+1;
	}
	if (sequencia[i] == 0)
	{
		sequencia[i] = 1;
	}
	printf("%s",sequencia);
	return 0;
}


int main() 
{
	int i;
	char sequencia[100];
	printf("digite uma sequencia de numeros:  ");
	scanf("%s",&seq);
	A(seq);
	return 0;
}
