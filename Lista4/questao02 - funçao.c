#include <stdio.h> 
#include <string.h>
#include <ctype.h> //Biblioteca para usar a gunção toupper

int polindromo (char frase[100]);

void main(){ 
	int result;
	char frase[100]; 
	result=2;
	printf("Digite a frase a ser analisada: "); 
	gets(frase);
	result=polindromo(frase);
	if(result==0){
		printf("Não é um Polindromo"); 
	}else if(result==1){
		printf("É um Polindromo"); 
	}
	 
}

int polindromo (char frase[]){
	int i,j,comp;
	char inverte[100];
	j=0;
	i=strlen(frase)-1;
	for(i=0;i<=strlen(frase)-1;i++){ //for para deixar apenas as letras
		if(frase[i] != ' ' && frase[i] != ',' && frase[i] != ';' && frase[i] != '.' && frase[i] != '-'){
			  inverte[j] = frase[i];
			  j++;
		 }
	}
	inverte[j] = '\0';//determina o fim da string
	j=0;
	for(i=0;i<=strlen(inverte)-1;i++){ //for para transformar tudo em maiusculo
		inverte[i]=toupper(inverte[i]);//função que deixa tudo maiusculo
	}
	strcpy(frase,inverte);//copiando a palavra novamente para string original somente letras
	for(i=strlen(frase)-1;i>=0;i--){ //for para inverter a string original
		if(frase[i] != ' ' && frase[i] != ',' && frase[i] != ';' && frase[i] != '.' && frase[i] != '-'){
			  inverte[j] = frase[i];
			  j++;
		 }
	}
	inverte[j] = '\0';//fim da string invertida
	comp=strcmp(frase,inverte);//comparando as strings
	if(comp==0){//se forem iguais retorna zero
		return 1; 
	}else if(comp!=0){
		return 0; 
	}
}
