#include <stdio.h> 
#include <string.h> 

int busca(char s[], char c, int i);

int main(){ 
	char s [100];
	char c;
	int i, resul; 
	printf("Digite uma string: "); 
	gets(s); 
	printf("\nDigite o carcter:"); 
	scanf("%c",&c);
	printf("\nDigite o inteiro:"); 
	scanf("%d",&i);
	resul=busca(s,c,i);
	if(resul != -1){
		printf("A primeira posição do caracter %c é: %d\n",c,resul);
		return 0;
	}else{
		printf("O caracter %c não consta na string %s:\n",c,s);
		return 0;
	}
}

int busca(char s[], char c, int i){
	int j;
	
	for(j=i;j<strlen(s);j++){
		if(s[j]==c){
			return j;
		}
	}
	return -1;
}
