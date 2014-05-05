#include <stdio.h>
#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()
{
	int numero, A, B, N, i=1;
	printf("digite um numero inteiro positivo ");
	scanf("%d",&numero); 
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
