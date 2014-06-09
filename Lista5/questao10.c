#include<stdio.h>

int soma(int a, int b)
{
	int soma,dobro1,dobro2;
	dobro1=a;
	a=(2*dobro1);
	dobro2=b;
	b=(2*dobro2);
	soma = (a+b);
	printf("a soma do dobro dos valores eh: ",soma);
}

int main()
{
	int num1,num2;
	printf("digite dois valores: ");
	scanf("%d,%d",&num1,&num2);
	soma(num1,num2);
	return 0;
}


ps: nao pode soma de ponteiros
