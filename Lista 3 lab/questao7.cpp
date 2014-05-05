#include<stdio.h> 
#include <iostream> 

int main() 
{ 
	int numero, i, resto; 
	printf("Digite um numero:"); 
	scanf("%d", &numero); 
	if( numero==1 || numero==2 ) 
	{ 
		printf("Numero %d é primo", &numero); 
		return 0; 
	} 
	for(i=2; i<numero; i++) 
	{ 
		resto =numero%i; 
		if(resto ==0)
		{
			break; 
		}
	} 
	if(resto!=0) 
		printf("O numero %d e primo", numero); 
	else 
		printf("O numero %d nao e primo", numero);  
	return 0; 
}

