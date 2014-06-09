#include <stdio.h>
#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


void B(int numero)
{
	int numero,i;
	for (i=0; i==numero; i++)
	{
		if (numero%i == 0)
		{
			printf("%d\n",i);
 		}
	}
	return 0;
}


int main() 
{
	int num;
	printf("Digite um numero: ");
	scanf("%d",&num);
	B(num);
	return 0;
}
