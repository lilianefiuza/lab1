#include<stdio.h>
#include<conio.h>
#include<string.h>

void concat (char str1,char str2)
{
	concat= substr($str2,0,num);
	strcat(str1,concat);
}


int main()
{	
	char str1[60],str2[30],concat[3],x[30];
	int num;

	printf("digite uma string: ");
	scanf("%s",str1);
	printf("digite uma string: ");
	scanf("%s",str2);

	printf("digite um valor inteiro positivo: ");
	scanf("%d",&num);


	concat(str1,str2);

	printf("%s",str1,"NULL");
	return 0;
}