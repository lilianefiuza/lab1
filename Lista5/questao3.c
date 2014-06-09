#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int troca(int *A, int *B, int *C)
{
	int maior,meio, menor, aux;
	if ((*A == *B) && (*A == *C) && (*B == *C))
	{
		printf("1");
		return 0;
	}
	if ((*A != *B) && (*A != *C) && (*B != *C))
	{
		printf("0");
		if(*A>*B) 
		{
			aux = *A;
			*A=*B;
			*B= aux;		
		}
		if (*B>*C)
		{
			aux=*B;
			*B=*C;
			*C=aux;
		}
		if (*A>*B)
		{
			aux=*A;
			*A=*B;
			*B=aux;
		}
		menor = *A;
		meio = *B;
		maior = *C;
		printf("menor:%d",&menor ,"do meio:%d",&meio,"maior:%d",&maior);
	return 0;
	}

}


int main() 
{
	printf("digite 3 numeros: ");
	scanf(*num1,*num2,*num3);
	troca(&num1,&num2,&num3);
	return 0;
}
