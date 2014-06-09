#include <stdio.h> 
#include <string.h> 

void ler (char frase[]);

int main(){ 
	char frase[30]; 
	printf("Digite um nome: "); 
	gets(frase); 
	ler(frase);
}

void ler (char frase[]){
	int i;
	for(i=0;i<4;i++){
		printf("%c",frase[i]);
	} 
}
