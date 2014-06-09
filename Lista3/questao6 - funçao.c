#include <stdio.h>
#include <iostream>


void C()
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




int main()
{
	C();
	return 0;
}
