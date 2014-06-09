#include <stdio.h> 
#include <string.h> 

int verificar (char sexo, int idade);

void main(){ 
	char nome[30]; 
	int idade;
	char sexo;
	int resul;
	printf("Digite o nome: "); 
	gets(nome);
	printf("\nDigite o sexo(M/F): "); 
	scanf("%c",&sexo);
	printf("\nDigite a idade: "); 
	scanf("%d",&idade);
	resul=verificar(sexo,idade);
	if(resul==1){
		printf("Nome: %s\n",nome);
		printf("ACEITA");
	}else{
		printf("Nome: %s\n",nome);
		printf("NÃO ACEITA");
	}
}

int verificar (char sexo, int idade){
	if(sexo=='F' || sexo=='f'){
		if(idade> 25){
			return 1;
		}
	}
	return 0;	 
}
