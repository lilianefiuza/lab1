#include <stdio.h> 
#include <string.h> 

void crip (char frase[]);


int main(){ 
	char frase[20]; 
	printf("\nDigite a frase a ser encriptada: "); 
	scanf("%s",frase); 
	crip(frase);
	return 0; 
}

void crip (char frase[]){
	int i,enc;
	for(i=0;i<strlen(frase);i++){ 
		enc = frase[i]+3;
		printf("%c",enc);
	} 
}
