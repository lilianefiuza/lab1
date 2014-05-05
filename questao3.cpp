#include <stdio.h>
#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{
	int Q1, Q2, Q3, numero1, numero2, numero3, soma;
	printf("digite 3 numeros inteiros: ");
	scanf("%d, %d, %d,",&numero1, &numero2, &numero3);
	Q1 = (numero1*numero1);
	Q2 = (numero2*numero2);
	Q3 = (numero3*numero3);
	soma = (Q1 + Q2 + Q3);
	printf(" eh a soma dos quadrados, %d ", &soma);
	return 0;
}
