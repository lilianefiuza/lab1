#include <stdio.h>
#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	float salario, emprestimo,porcento;
	printf("digite seu salario: ");
	scanf("%f", &salario);
	printf("digite valor do emprestimo: ");
	scanf("%f", &emprestimo);
	porcento = ((20*salario)/100);
	if (emprestimo > porcento )
	{
		printf("Emprestimo nao concedido");
	}
	if (emprestimo < porcento)
	{
		printf("Emprestimo Concedido");
	}
	return 0;
}
