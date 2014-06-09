#include<stdio.h>

int dobro(int vet[])
{
	int dobro[4],i,j=0;
	for (i=0;i<4;i++)
	{
		dobro[j]=(vet[i]*2);
		j=j+1;
	}
	for (j=0;j<4;j++)
	{
		printf("%d",&dobro[j]);
	}
}

int main()
{
	int num[4],i;
	printf("digite 5 valores: ");
	for (i=0;i<4;i++)
	{
		scanf("%d",&num[i]);
	}
	dobro(num);
	return 0;
}


ps: nao pode soma,multiplicação,divisao de ponteiros

