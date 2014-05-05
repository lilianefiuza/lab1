#include <stdio.h>
#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()
{
	int numero, i, x, soma=0;
	for (i=1; i == 50; i++)
	{
		x = i%2;
		if( x == 0)
		{
			printf("%d",&x);
			soma = soma + x;
		}
		else
		{
			return 0;
		}
	}
	printf("soma %d",&soma);
	return 0;
}
