#include <stdio.h>
#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{
	float venda, C1,C2,C3,C4,C5,C6;
	printf("Informe o valor da venda: ");
	scanf("%f",&venda);
	if (venda >= 100000)
	{
		C1 = (((16 * venda)/100) + 700);
		printf("o valor da comissao eh: %f", &C1);
	}
	if ((venda < 100000) || (venda>=80000))
	{
		C2 = (((14 * venda)/100) + 650);
		printf("o valor da comissao eh: %f", &C2);
	}
	if ((venda < 80000) || (venda >= 60000))
	{
		C3 = (((14 * venda)/100) + 600);
		printf("o valor da comissao eh: %f", &C3);
	}
	if ((venda < 60000) || (venda >= 40000))
	{
		C4 = (((14 * venda)/100) + 550);
		printf("o valor da comissao eh: %f", &C4);
	}
	if ((venda < 40000) || (venda >= 20000))
	{
		C5 = (((14 * venda)/100) + 500);
		printf("o valor da comissao eh: %f", &C5);
	}
	if (venda < 20000)
	{
		C6 = (((14 * venda)/100) + 400);
		printf("o valor da comissao eh: %f", &C6);
	}
	return 0;
}
