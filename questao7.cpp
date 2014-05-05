#include <stdio.h>
#include <math.h>
#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	int A,B,C,H;
	printf("digite os valores do cateto: ");
	scanf("%f, %f", &A, &B);
	C = ((B*B) + (A*A));
	H = sqrt(C);
	printf("o valor da hipotenusa eh %d",&H);
	return 0;
}
