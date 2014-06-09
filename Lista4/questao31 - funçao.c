#include <stdio.h> 
#include <stdlib.h> 

void inverte (str st1)
{
	int i,j; 
	char st1[100],st2[100]; 
	for(i=0;st1[i];i++)
	{ 
		i = i-1; 
		for(j=0,i;i>=0;j++)
		{ 

			st2[j]=st1[i]; 
			i=i-1; 

		} 
	} 
	printf(" String digitada foi: %s \n Invertida: %s \n",st1,st2);
	return 0;
}



int main() 
{ 
	char palavra[100];
	printf("digite uma palavra: "); 
	scanf("%s",&palavra); 
	inverte(palavra);
	return 0;
} 
