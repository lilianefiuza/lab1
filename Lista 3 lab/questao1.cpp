#include <stdio.h> 
#include <iostream>

int main(void)
{ 

	int numero, maior, menor, i=1; 
	printf("digite um numero inteiro e negativo para sair ");
	scanf("%d",&numero); 
	maior = numero; 
	menor = maior; 
	for(i=2; numero >= 0; i++)
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
	} 
	printf(" O maior foi o %d, o menor foi %d" , &maior, &menor); 
	return 0; 
} 
