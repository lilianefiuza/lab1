#include <stdio.h>
#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	int numero,i;
	printf("Digite um numero: ");
	scanf("%d",&numero);
	for(i = numero;i!=0;i--)

	{
		if (numero%i == 0)
		{
			printf("%d\n",i);
 		}
	}
	return 0;
}
