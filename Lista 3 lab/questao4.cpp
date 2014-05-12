#include <stdio.h>
#include <iostream>


int main()
{
	int i=0, numero, cont=0;
	for(i=1; cont == 5; i++)
	{
		numero = i%3;
		if(numero == 0)
		{
			printf("%d",&numero);
			cont = cont+1;
		}
	}
	return 0;
}
