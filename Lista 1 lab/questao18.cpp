#include <iostream>


int main(void) 
{
	int peso;
	int excesso;
	int multa;
	printf("digite o peso");
	scanf("%d",&peso);
	if (peso > 50){
		excesso =peso - 50;
			if(excesso > 0){
				multa= 4*excesso;
			}
	}
	else  
	{
		excesso=0;
		multa=0;
	}
	printf("Quantidade de peso em execsso igual %d", &excesso)
	printf("valor da multa igual %d", &multa)
	return 0;
}
