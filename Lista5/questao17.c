#include<stdio.h>

float endereço(float num[])
{
	int i,j=0,;
	for (i=0;i<9;i++)
	{
		printf(&num[i]);
	}
	return 0;
}

int main()
{
	float a[9];
	int i;
	printf("digite 10 numeros: ");
	for (i=0;i<9;i++)
	{
		scanf("%f",&a[i]);
	}
	endereço(a);
	return 0;
}


&= endereço de memoria
*o q esta no endereço de memoria
