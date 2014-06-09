#include<stdio.h>

int soma_vetores(int *vet1[],int *vet2[])
{
	int i,j=0,l=0,*vet3[10];
	if (strlen(*vet1[] != strlen(*vet2[])
	{
		printf("ERRO");
		return 1;
	}
	else
	{
		for(i= 0; i<10; i++)
		{
			*vet3[i]= *vet1[j]+*vet2[l];
			j=j+1;
			l=l+1;
		}
	}
	for (i=0;i<=10;i++)
	{
		printf("%d", vet3[]);
	}
	return 0;
}

int main()
{
	int vet1[10], i,vet2[10],j;
	printf("Digite numeros: ");
	for(i=0; i<10; i++)
	{
		scanf(vet1[i]);
	}

	printf("Digite numeros: ");
	for(j=0; j<10; j++)
	{
		scanf(vet2[j]);
	}
	soma_vetores(&vet1,&vet2);
	return 0;
}
