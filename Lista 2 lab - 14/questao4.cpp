#include <stdio.h>
#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()
{
	float salario,novosalario,novo;
	printf("digite seu salario: ");
	scanf("%f", &salario);
	novo = ((salario * 25)/100);
	novosalario = (salario + novo);
	printf(" seu novo salario eh %d", &novosalario);
	return 0;
}
