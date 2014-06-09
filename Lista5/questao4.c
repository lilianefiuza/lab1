#include <iostream>



float le_notas (float *nota1, float *nota2)
{
	scanf(*nota1,*nota2);
	if ((*nota1 >= 0) && (*nota2 >= 0)) && ((*nota1 <=10) && (*nota2<= 10))
	{
		printf(*nota1,*nota2);
	}
}

float calc_media(float *nota1, float *nota2)
{
	float mediasimples, mediaponderada;
	mediasimples = (*nota1+(2*nota2)/2);
	mediaponderada = (*nota1+(2*nota2)/3);
}

float exibe_dados (float *nota1, float *nota2)
{
	printf(*nota1,*nota2);
	printf(mediasimples);
	printf(mediaponderada);
}



int main() 
{	
	float n1,n2;
	printf("digite 2 notas: ");
	scanf(*n1,*n2);
	le_notas(&n1,&n2);
	calc_media(&n1,&n2);
	exibe_dados(&n1,&n2);
	return 0;
}
