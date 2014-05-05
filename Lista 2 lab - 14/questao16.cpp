#include <stdio.h>
#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{
	float altura, pesoideal;
	int sexo;
	printf("digite a sua altura: ");
	scanf("%f",&altura);
	printf("digite seu sexo: 1 para masculino e 2 para feminino: ");
	scanf("%d",&sexo );
	if (sexo == 1)
	{
		pesoideal = ((72.7*altura)-58);
		printf("seu peso ideal eh %f", &pesoideal);
	}
	if (sexo == 2)
	{
		pesoideal = ((62.1*altura) - 44.7);
		printf("seu peso ideal eh %f", &pesoideal);
	}
	return 0;
}
