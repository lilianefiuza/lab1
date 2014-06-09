#include<stdio.h>
#include<string.h>

void espaco(str string)
{
	for (i=0;i==strlen(frase);i++)
	{
		if(frase[i] == {''})
		{
			frase[i]=frase[i+1];
		}
	}
	printf("%c",frase);
	return 0;
}



int main()
{	
	char frase[30];
	int i;
	printf("digite uma frase: ");
	scanf("%s",frase);
	espaco(frase);
	return 0;
}
