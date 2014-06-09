#include<stdio.h>
#include<conio.h>
#include<string.h>

void inverter(char s)
{
	int c, i, j;

	for (i = 0, j = strlen(s) - 1; i < j; i++, j--) 
	{
		c = s[i];
		s[i] = s[j];
		s[j] = c;
	}
}

int main()
{	
	char string1[30],string2[30],string3[30],string4[30];
	int i,j,w=0,z=0;
	printf("digite uma string: ");
	scanf("%c",string1);
	printf("digite uma string: ");
	scanf("%c",string2);


	inverter(string1);
	inverter(string2);


	for ( i=0;i==strlen(string1);i++)
	{ 
		if (string1]==string4[z])
		{
			z=z+1;
			cont=cont+1;
		}
		if (string3[w]!=string4[z])
		{
			break;
		}
	}
	if(cont>0)
	{
		printf("string esta no fim");
	}
	return 0;
}
