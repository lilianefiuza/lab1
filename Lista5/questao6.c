#include <iostream>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int raizes(float a,float b, float c,float *x1,float *x2)
{
	int d;
	if (a==0)
	{
		return 0;
	}
	else
	{
		d= ((b*b)-4*a*c);
		if (d<0)
		{
			return 0;
		}
		if(d>=0)
		{
			*x1=((-b+sqrt(d))/2*a);
			*x2=((-b-sqrt(d))/2*a);
		}
		if (*x1 == *x2) (acredito q reais e distintas da equação seja isso)
		{
			printf(&x1);
		}
		else
		{
			printf(&x1,&x2);
		}
	}
	return 0;
}


int main()
{	
	float a,b,c;
	printf("digite os valores de A,B e C: ");
	scanf(a,b,c);
	raizes(&a,&b,&c);
	return 0;
}
