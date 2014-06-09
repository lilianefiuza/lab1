#include<stdio.h>
#include<stdio.h>
#include<conio.h>
#include<string.h>

void insere ()
{
	char op;
	while (op != {'n'})
	{
		printf("deseja inserir mais nome na lista?");
		scanf("%C",op);
		if(op== {'s'})
		{
			printf("digite o nome do aluno');
			scanf("%c",nome);
		}
	}
	return 0;
}



void posicao()
{
	char nome[40],X[40];
	for (i=0;i==39,i++)
	{
		x=0;
		if(nome[i]==X)
		{
			printf("%s",&nome,",posição: ",i);
			x=x+1;
		}
	}
	return 0;
}





int main()
{	
	char nome[40],X[40];

	printf("digite o nome do aluno: ");
	scanf("%c",nome);
	insere();

	printf("digite o nome que precisa ser procurado: ");
	scanf("%c",X);
	posicao();

	return 0;
} 
