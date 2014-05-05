#include <stdio.h>
#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	float real, quadrado;
	printf("Digite um numero real: ");
	scanf("%f",&real);
	quadrado = (real*real);
	printf(" numero ao quadrado eh, %f : ", &quadrado);
	return 0;
}
