#include<stdio.h>

int maior_endereço(int *num1,int *num2)
{
	int maior;
	if (&num1 > &num2)
	{
		maior= &num1;
		printf("%d",&maior)
	}
	if (&num1 < &num2)
	{
		maior=&num2;
		printf("%d",&maior);
	}
	return 0;
}

int main()
{
	int a,b,maior;
	printf("digite dois numero: ");
	scanf(a,b);
	maior_endereço(&a,&b)
	return 0;
}


&= endereço de memoria
*o q esta no endereço de memoria
