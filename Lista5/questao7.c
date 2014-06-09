#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int frac(flat num, int *inteiro,float *frac)
{
	*frac= (num-((int)num));
	*inteiro=((int)num);
	printf("Parte inteira: %d",*inteiro,"parte fracionada: %f",*frac);
	return 0;
}

int main() 
{
	int num;
	printf("digite um valor real: ");
	scanf(num);
	frac(&num);
	return 0;
}
