#include <stdio.h>
#include <iostream>


void contagem(int cont)
{
	int cont;
	cont =11;
	while (cont != 0)
	{
		cont = cont-1;
		printf("%d\n",cont);
	}
	printf("FIM");
	return 0;
}


int main() 
{
	contagem();
	return 0;
}
