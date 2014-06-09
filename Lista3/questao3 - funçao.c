#include <stdio.h>
#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */



void A (int num)
{
	int num, A, B, N, i=1;
	A = 0;
	B = 1;
	printf(" %d,%d", &A,&B);
	for (i=3; N > numero; i++ )
	{
		N=A+B;
		printf ("%d",N);
		A=B;
     		B=N;
	}
	return 0;
}



int main()
{
	int numero;
	printf("digite um numero inteiro positivo ");
	scanf("%d",&numero); 
	A(numero);

	return 0;
}
