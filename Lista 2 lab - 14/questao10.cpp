#include <stdio.h>
#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	int opcao,numero1,numero2,soma,divisao,multiplicacao,diferenca;
	printf("Escolha a opcao desejada:\n 1- Soma de 2 números\n 2- Diferença entre 2 números (maior pelo menor)\n 3- Produto entre 2 números\n 4- Divisão entre 2 números (o denominador não pode ser zero: ");
	scanf("%d", &opcao);
	switch(opcao)
	{
	case 1:
		printf("digite um numero: ");
		scanf("%d", &numero1);
		printf("digite um numero: ");
		scanf("%d", &numero2);
		soma = (numero1 + numero2);
   		printf(" soma eh igual a %d\n", &soma);
   		break;
	case 2:
   		printf("digite o numero: ");
		scanf("%d", &numero1);
		printf("digite um numero: ");
		scanf("%d", &numero2);
		diferenca = (numero1 - numero2);
   		printf(" diferenca eh igual a %d\n", &diferenca);
   		break;
	case 3:
   		printf("digite um numero: ");
		scanf("%d", &numero1);
		printf("digite um numero: ");
		scanf("%d", &numero2);
		multiplicacao = (numero1 * numero2);
   		printf(" multiplicacao eh igual a %d\n", &multiplicacao);
   		break;
   	case 4:
   		printf("digite um numero: ");
		scanf("%d", &numero1);
		printf("digite um numero: ");
		scanf("%d", &numero2);
		divisao = (numero1 / numero2);
   		printf(" divisao eh igual a %d\n", &divisao);
   		break;
	default:
   		printf("Opcao invalida\n");
   		break;
	}
	return 0;
}
