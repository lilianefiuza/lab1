#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) 
{
	float c;
	float f;
	printf("informe a temperatura em graus celsius");
	scanf("f",&c);
	f= (((9*c)/5) +32);
	scanf("%f",&f);
	printf ("a temperatura em Farenheit %f", &f);
	return 0;
}
