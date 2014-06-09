#include <stdio.h> 
#include <string.h> 

void ascii (char frase[]);

int main(){ 
	char frase[50]; 
	printf("Digite a palavra a ser convertida: "); 
	gets(frase); 
	ascii(&frase);
	printf("\n%s",frase);
}

void ascii (char frase[]){
	int convt,i;
	for(i=0;i<strlen(frase);i++){
		convt = frase[i]+1;
		frase[i]=("%c",convt);
	} 
}
