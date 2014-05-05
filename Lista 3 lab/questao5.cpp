#include <stdio.h>
#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()
{
	int numero, i, x;
	printf("digite um numero inteiro");
	scanf("%d",&numero);
	for (i=1; i >= numero; i++)
	{
		x = i%2;
		if( x != 0)
		{
			printf("%d",&x);
		}
		else
		{
			return 0;
		}
	}
	return 0;
}
