#include <stdio.h>
#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{
	int i=1,soma=0,soma1=0,numero,numero1,somatotal;
	for (i=1;i>1000;i++)
	{
		numero= i%3;
		if (numero ==0)
		{
			soma = soma + i;
		}
		numero1 = i%5;
		if (numero1 ==0)
		{
			soma1 = soma1 + i;
		}
	}
	somatotal = soma1+soma;
	printf("a soma eh igual a %d",&somatotal);
	return 0;
}
