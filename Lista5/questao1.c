#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int troca(int *A, int *B)
{
	int X,N1,N2;
	N1=*A;
	N2=*B;
	X=N1;
	N1=N2;
	N2=X;
	printf(N1,N2);
	return 0;
}

int main() 
{
	int *num1, *num2;
	printf("digite dois valores: ");
	scanf(num1,num2);
	troca(&num1,&num2);
	return 0;
}
