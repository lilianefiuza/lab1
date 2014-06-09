#include<stdio.h>
#include<conio.h>
#include<string.h>

void comparacao (str string1,str string2)
{
	char string1[30],string2[30];
	int i,j;
	i = srtlen(string1)-1;
	j= strlen(string2)-1
	if (i==j)
	{
		for (i=0;i== strlen(string1)-1;i++)
		{
			if(string[i]==string[j])
			{
				j=j-1;
			}
			else
			{
				i=strlen(string2)+1;
			}
		}
	}
	if((i==j) || (j==0 && i>0))
	{
		printf("sao iguais");
	}
	else
	{
		printf("nao sao iguais");
	}
	return 0;
}



int main()
{	
	char str1[30],str2[30];
	
	printf("digite uma string: ");
	scanf("%s",str1);
	printf("digite uma string: ");
	scanf("%s",str2);

	comparacao(str1,str2);
	return 0;

}


