#include<stdio.h>

int maior(int vet[])
{
	int maior=vet[0],i;
	for(i= 0; i<n; i++)
	{
		if (maior < vet[i])
		{
			maior=vet[i];
		}
	}
	printf("o maior elemento eh %d: ", maior );

	for(i=0; i<n; i++)
	{
		//for (j=0;j<n;j++)
		//{
			if ( i==k)
			{
				vet[i][j]="\n";
			}
		//}
	}
	
	for (i=0;i<n;i++)
	{
		printf("o elementos por linha: %d\n", )
	}
}



int main()
{
	int vet[n], i,n;
	printf("digite quantos numeros deseja armazenar no vetor: ");
	scanf("%d",&n);
	printf("Digite os numeros que deve ser alocado no vetor: ");
	for(i=0; i<n; i++)
	{
		scanf("%d", &vet[i]);
	}
	printf(" digite quantos elementos, acima de 0, deseja por linha: ");
	scanf("%d",&k);
	
	return 0;
}
