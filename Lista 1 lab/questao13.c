#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int f;
	int c;
	printf("digite a temperatura em graus Farenheit");
	scanf("%d",&f);
	c = (5 * (f-32) / 9);
	printf ("a temperatura em graus Celsius eh, %d", &c);
	return 0;
}
