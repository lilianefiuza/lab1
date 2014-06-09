#include <stdio.h>
#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


void binario(str bin)
{
	int x=0 ,i;
	char bin[20];
	for (i=0; bin[i]<=20; i++)
	{
		if( bin[i] == 1)
		{
			x = x+1;
			printf("bin = %d",&x);
		}
	}
	return 0;
}



int main() 
{
	char bin[20];
	printf("digite um numero em binario ou seja uma sequencia de 1's e 0's:  ");
	scanf("%s",bin);
	binario(bin);
	return 0;
}