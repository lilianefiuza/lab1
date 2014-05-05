#include <stdio.h>
#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{
	int tempo,idade;
	printf("digite sua idade: ");
	scanf("%d", &idade);
	printf("digite o tempo de servico: ");
	scanf("%d", &tempo);
	if (idade > 65 )
	{
		printf("pode se aposentar");	
	}
	if ( tempo >= 30 )
	{
		printf("pode se aposentar");
	}
	if (idade >= 60)
	{
		if (tempo >= 25 )
		{
			printf("pode se aposentar");
		}
	}
	else
	{
		printf("nao pode se aposentar");
	}
	return 0;
}
