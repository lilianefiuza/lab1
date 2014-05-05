#include <iostream>


int main(void) 
{
	float altura;
	float pesoideal;
	float peso;
	char sexo = 'M';
	char sexo = 'F';
	printf("digite a sua altura");
	scanf("%f",&altura);
	printf("digite seu sexo M para masculino e F para feminino");
	scanf("%c",&sexo );
	if (sexo == 'M')
	{
		pesoideal = ((62.1*altura)-44.7);
		scanf("%f",&pesoideal);
		printf("seu peso eh %f", &pesoideal);
	}
	if (sexo == 'F')
	{
		pesoideal = ((62.1*h) - 44.7);
		scanf("%f",&pesoideal);
		printf("seu peso eh %f", &pesoideal);
	}
	printf("digite seu peso");
	scanf("%f", &peso);
	imc = (peso/(altura*altura));
	scanf("%f",&imc);
	if (imc < 18)
	{
		printf("abaixo do peso");
	}
	if ((imc > 18) and (imc < 25))
	{
		printf("peso ideal");
	}
	if ((imc > 25) and (imc < 30))
	{
		printf("acima do peso");
	}
	if (imc > 30)
	{
		printf("obeso");
	}
	return 0;
}
