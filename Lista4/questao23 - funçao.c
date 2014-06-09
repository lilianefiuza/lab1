#include <stdio.h> 
#include <string.h> 

void verificar (char sexo, int idade, char nacional[30]);

void main(){ 
	char nome[30]; 
	char nacional[30]; 
	int idade;
	char sexo;
	printf("Digite o nome: "); 
	gets(nome);
	printf("\nDigite o sexo(M/F): "); 
	scanf("%c",&sexo);
	printf("\nDigite a idade: "); 
	scanf("%d",&idade);
	printf("\nDigite a nacionalidade: "); 
	scanf("%s",nacional);  
	verificar(sexo,idade,nacional);
	printf("%s, ",nome);
}

void verificar (char sexo, int idade, char nacional[30]){
	int i;
	if(sexo=='M' || sexo=='m'){
		if(idade> 18){
			i=strcmp(nacional,'brasileiro');
			if(i == 0){
				printf("brasileiro do sexo masculino e maior de idade, está habilitado a dirigir");
			}else{
			  printf("brasileiro do sexo masculino e maior de idade, não está habilitado a dirigir");
			}
		}else{
			printf("brasileiro do sexo masculino e menor de idade, não está habilitado a dirigir");
		}
	}else if(sexo=='F' || sexo=='f'){
		if(idade> 18){
			i=strcmp(nacional,'brasileira');
			if(i == 0){
				printf("brasileira do sexo feminino e maior de idade, está habilitada a dirigir");
			}else{
			  printf("brasileira do sexo feminino e maior de idade, não está habilitada a dirigir");
			}
		}else{
			printf("brasileira do sexo feminino e menor de idade, não está habilitada a dirigir");
		}
	} 
}
