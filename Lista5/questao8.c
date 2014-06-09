#include<stdio.h>

void maior(int vet[])
{
	int maior=vet[0], i, igual=0;
	for(i= 0; i<10; i++)
	{
		if (maior < vet[i])
		{
			maior=vet[i];
		}
	}
	for (i=0; i<10; i++)
	{
		if(maior == vet[i])
		{
			igual++;
		}
	}
	printf("%d achou: %d", maior, igual);
}

int main()
{
	int vet[10], i;
	printf("Digite 10 numeros: ");
	for(i=0; i<10; i++)
	{
		scanf("%d", &vet[i]);
	}
	maior(vet);
	return 0;
}
