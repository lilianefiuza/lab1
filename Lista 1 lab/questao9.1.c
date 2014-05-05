#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) 
{
	float m;
	float c;
	printf ("Digite o valor em metros ");
	scanf("%f", &m);
	c = (m * 100);
	scanf("%f",&c);
	printf("o valor em centimetros eh %f", &c);
	return 0;
}

