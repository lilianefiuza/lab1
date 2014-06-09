#include<stdio.h>

float matriz(float mat[])
{
	int 
	for(i= 0; i<3; i++)
	{
		for(j=0;j<3;j++)
		{
			printf(&vet[i][j]);
		}
	}
	return 0;		
}

int main()
{
	float matriz[3][3];
	int i,j;
	for(i=0; i<3; i++)
	{
		printf("Digite 3 numeros para a %d linha: \n",i+1);
		for (j=0;j<3;i++)
		{
			scanf("%d",&matriz[i][j]);
		}
	}
	return 0;
}
