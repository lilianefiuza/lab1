#include <stdio.h>
#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	float primeiro, segundo, terceiro,importancia;
	importancia = 780.000,00;
	primeiro = ((importancia * 46)/100);
	segundo = ((importancia * 32)/100);
	terceiro = ((importancia * 22)/100);
	printf("O primeiro ganha %f, o segundo ganha %f, o terceiro ganha %f", &primeiro, &segundo, &terceiro);
	return 0;
}
