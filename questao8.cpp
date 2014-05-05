#include <stdio.h>
#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	int numero, X,Y,Z,W, invertido;
	printf("informe um numero de 3 digitos: ");
	scanf("%d", &numero);
	X = (numero%10);
	Y = (numero/10);
	Z = (Y % 10);
	W = (Y/10);
	invertido = ((X*100) + (Z*10) + (W*1));
	printf("o numero invertido eh %d", &invertido);
	return 0;
}
