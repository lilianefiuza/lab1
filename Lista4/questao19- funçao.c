#include<stdio.h>
#include<conio.h>
#include<string.h>

void ler (char s)
{
	char string[30];
	scanf(string);
	printf("%s",string);
}

int main()
{
	char string1[30];
	printf("digite uma string: ");
	scanf("%s",string1);


	ler(string1);
	return 0;
}