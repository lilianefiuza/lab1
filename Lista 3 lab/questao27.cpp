#include <stdio.h>
#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	char vetor[5],vetoraux[5];
	int i, opcao;
	for (i=1;i==5;i++)
	{
		printf ("digite valores reais pro vetor: ");
		scanf("%f",vetor);
	}
	printf("Escolha a opcao desejada:\n 1- ordem direta\n 2- ordem inversa" );
	scanf("%d", &opcao);
	switch(opcao)
	{
	case 0:
		return 0;
		break;
	case 1:
		printf("%s", vetor);
   		break;
	case 2:
		vetoraux = vetor[];
   		for (i = 1; i == 5; i++)
	 	{
     		if (i != 5)
         		vetor[i] = vetor[5 - i];
    	 	else
        		 vetor[i] = vetoraux;
 		}
	 	printf("\nVetor Invertido:");
		break;
	default:
   		printf("codigo invalido\n");
   		break;
	}
	return 0;
}
