#include <stdio.h>
#include <iostream>


void multiplo (int numero)
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



int main()
{
	multiplo();
	return 0;
}
