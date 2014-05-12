#include <stdio.h>
#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	int i,numero,x,y,soma;
	printf("digite um numero: ");
	scanf("%d",&numero);
	x = numero;
	for (i=0; i==10;i++)
	{
		printf("digite um numero: ");
		scanf("%d",&numero);
		y = numero;
		soma = (x + y);
		x = soma;
	}
	printf("%d",soma);
	return 0;
}
