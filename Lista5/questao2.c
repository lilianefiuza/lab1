#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int troca1(int *A,int *B)
{
	int n1,n2,X;
	n1=*A;
	n2=*B;
	if (*A>*B)
	{
		printf("o maior numero eh: %d",&A,"o menor numero eh: %d",&B);
	}
	if (*A<*B)
	{
		X=*A;
		*A=*B;
		*B=X;
		printf("o maior numero eh: %d",&A,"o menor numero eh: %d",&B);
	return 0;
}


int main()
{	
	int num1,num2;
	printf("digite dois valores: ");
	scanf(num1,num2);
	troca1(&num1,&num2);
	return 0;
}
