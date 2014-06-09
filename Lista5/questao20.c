#include<stdio.h>

int endereço(int num[])
{
	int i,j=0,;
	for (i=0;i<4;i++)
	{
		if (num[i]%2 ==0)
		{
			printf(&num[i]);
		}
	}
	return 0;
}

int main()
{
	int a[4];
	int i;
	printf("digite 5 numeros: ");
	for (i=0;i<4;i++)
	{
		scanf("%f",&a[i]);
	}
	endereço(a);
	return 0;
}


&= endereço de memoria
*o q esta no endereço de memoria
