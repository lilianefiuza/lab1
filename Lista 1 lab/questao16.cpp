#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) 
{
	float altura;
	float pesoideal;
	printf("digite a sua altura");
	scanf("%f",altura);
	pesoideal = ((72.7*altura) - 58);
	scanf("%f",&pesoideal);
	printf("seu peso ideal eh %f", &pesoideal);
	return 0;
}
