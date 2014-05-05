#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()
{
	int l;
	int area;
	int areatotal;
	printf("digite o valor de um lado do quadrado");
	scanf("%d", &l);
	area = (l^2);
	scanf("%d", &area);
	areatotal = (2*area);
	scanf("%d",&areatotal);
	printf("a area total eh %d", &areatotal);
	return 0;
}
