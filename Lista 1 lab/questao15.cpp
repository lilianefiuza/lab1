#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int a;
	int b;
	float c; 
	float op1;
	float op2;
	float op3;
	printf("digite dois numeros inteiros" );
	scanf ("%d ", &a, "%d", &b);
	printf("digite um numero real" );
	scanf ("%f", &c);
	
	op1 = ((2*a) * (b/2));
	scanf ("%f", &op1);
	printf("para o produto do dobro do primeiro com metade do segundo, %f ",&op1);
	
	op2 = ((3*a)+ c;);
	scanf ("%f", &op2);
	printf("para a soma do triplo do primeiro com o terceiro, %f ",&op2);
	
	
	op3 = (c^3);
	scanf ("%f", &op3);
	printf("para o terceiro elevado ao cubo, %f ",&op3);
	return 0;
}
