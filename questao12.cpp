#include <stdio.h>
#include <iostream>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	float geometrica, ponderada, harmonica, aritmetica;
	int x,y,z,opcao;
	printf ("1- media geometrica\n 2- media ponderada\n 3- media harmonica\n 4- media aritmetica\n digite a opcao desejada: ");
	scanf("%d", &opcao);
	switch(opcao)
	{
	case 1:
		printf("digite um numero: ");
		scanf("%d",&x);
		printf("digite um numero: ");
		scanf("%d",&y);
		printf("digite um numero: ");
		scanf("%d",&z);
		geometrica = cbrt(x*y*z);
		printf("resultado da media geometrica eh %f", &geometrica);
		break;
	case 2:
		printf("digite um numero: ");
		scanf("%d",&x);
		printf("digite um numero: ");
		scanf("%d",&y);
		printf("digite um numero: ");
		scanf("%d",&z);
		ponderada = ((x + (2*y) + (3*z))/6);
		printf("resultado da media ponderada eh %f", &ponderada);
		break;
	case 3:
		printf("digite um numero: ");
		scanf("%d",&x);
		printf("digite um numero: ");
		scanf("%d",&y);
		printf("digite um numero: ");
		scanf("%d",&z);
		harmonica = (1/((1/x) + (1/y) + (1/z)));
		printf("resultado da media harmonica eh %f", &harmonica);
		break;
	case 4:
		printf("digite um numero: ");
		scanf("%d",&x);
		printf("digite um numero: ");
		scanf("%d",&y);
		printf("digite um numero: ");
		scanf("%d",&z);
		aritmetica = ((x+y+z)/3);
		printf("resultado da media aritmetica eh %f", &aritmetica);
		break;
	default:
   		printf("Opcao invalida\n");
   		break;
   }
	return 0;
}
