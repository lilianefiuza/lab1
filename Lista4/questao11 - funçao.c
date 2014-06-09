#include <stdio.h> 
#include <string.h>

void inverte_frase (char frase1[]);

void main(){ 
	char frase1[100]; 
	char frase2[100]; 
	printf("Digite a  1 frase a ser invertida: "); 
	gets(frase1);
	printf("Digite a  2 frase a ser invertida: "); 
	gets(frase2);
	inverte_frase (frase1);
	inverte_frase (frase2);
}

void inverte_frase (char frase[]){
	int i,j;
	char inversor[100];
	j=0;
	i=strlen(frase)-1;
	for(i=strlen(frase)-1;i>=0;i--){ //for para inverter a string
		if(frase[i] != 'A'){
			  inversor[j] = frase[i];
			  j++;
		 }else{
			inversor[j] = '*';
			j++;
		 }
	}
	inversor[j] = '\0';//fim da string invertida
	strcpy(frase,inversor);
	printf("%s\n",frase);
}
