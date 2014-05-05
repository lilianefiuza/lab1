#include <stdio.h>
#include <iostream>

/* ANTECESSOR E SUCESSOR run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	int sucessor, antecessor,numero;
	printf("digite um numero: ");
	scanf("%d", &numero);
	sucessor = (numero+1);
	antecessor = (numero-1);
	printf("%d, eh o sucessor e, %d, eh o antecessor ", &sucessor, &antecessor);
	return 0;
}
