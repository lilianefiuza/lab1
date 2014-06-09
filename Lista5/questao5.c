#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void soma(int *A,int *B)
{
	int aux;
	aux=*A;
	*A = *B+aux;
	return;
}


int main()
{
	int n1,n2;
	printf("Digite dois numeros: ");
	scanf(n1,n2);
	printf(n1,n2);
	soma(&n1,&n2);
	return 0;
}
