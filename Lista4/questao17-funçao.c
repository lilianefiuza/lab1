#include<stdio.h>
#include<conio.h>
#include<string.h>

void desconto (int valor)
{
	desconto = ((10*valor)/100);
}

void pagovista(char desconto, int valor)
{
	pagovista = desconto(valor)-total;
}


int main()
{	
	char nome[30],valor[10];
	int i,j,desconto,pagovista;
	printf("digite o nome da mercadoria: ");
	scanf("%s",nome);
	printf("digite o valor total: ");
	scanf("%s",valor);


	desconto(valor);
	pagovista(desconto, valor);


	printf("\n O nome da mercadoria eh: %c",nome,"\n O valor total eh: %c",valor);
	printf("\n valor do desconto eh: %d",desconto,"\n O valor a ser pago a vista eh: %d",pagovista);
	return 0;
}