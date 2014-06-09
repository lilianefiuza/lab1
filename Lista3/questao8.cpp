#include<stdio.h>
#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	int numero, i=1,soma,cont,media, maior,menor,mediap,par; 
	printf("digite um numero inteiro e 0 para sair ");
	scanf("%d",&numero); 
	maior = numero;
	menor = maior;
	soma = numero;
	cont = 0;
	for(i=2; numero > 0; i++)
	{ 
		printf("digite um numero inteiro");
		scanf("%d",&numero);
		if(numero > maior) 
		{
			maior = numero;
		} 
		if (numero < menor) 
		{
			menor = numero;
		} 
		cont = cont+1;
		soma = soma + numero;
		if (numero%2 ==0)
		{
			par = par + numero;
		}
	}
	media = soma/2;
	mediap = par/2;
	printf("a soma dos numero eh %d", &soma);
	printf("a quantidade de numero digitados eh %d", &cont);
	printf("a media eh %d", &media);
	printf(" O maior foi o %d, o menor foi %d" , &maior, &menor); 
	printf("a media dos numeros pares eh %d", &mediap);
	return 0;
}
