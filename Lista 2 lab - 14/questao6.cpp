#include <stdio.h>
#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	float porcento, quantialiquida;
	int dias,diastrabalhados;
	printf("digite o numero de dias trabalhados: ");
	scanf("%d", dias);
	diastrabalhados = (30 * dias);
	porcento = ((diastrabalhados * 8)/100); 
	quantialiquida = (diastrabalhados - porcento);
	printf("seu salario liquido eh %f", &quantialiquida);
	return 0;
}
