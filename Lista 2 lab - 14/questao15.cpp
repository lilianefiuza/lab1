#include <stdio.h>
#include <iostream>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	int A,B,i,cont,resposta,resultado;
	A = rand() %100;
	B = rand() %100;
	printf("qual e a soma de a + b, onde a e b sao os numeros aleatorios ");
	scanf("%d", &resultado);
	resposta = A+B;
	if ( resultado == resposta)
	{
		cont= cont+1;
	}
	printf("resposta eh %d", &resposta);
	for (i=2; i==5; i++)
	{
		printf("qual e a soma de �a� + �b�, onde �a� e �b�s�o os n�meros aleat�rios ");
		scanf("%d", &resultado);
		resposta = A+B;
		printf("resposta eh %d", &resposta);
		if (resultado = resposta)
		{
			cont= cont+1;
		}
	}
	printf("voce acertou %cont vezes",&cont);
	return 0;
}
