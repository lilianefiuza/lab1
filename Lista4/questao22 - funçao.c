#include <stdio.h> 
#include <string.h> 

void ascii (char frase[]);

int main(){ 
	char frase[50]; 
	printf("Digite a palavra: "); 
	gets(frase); 
	ascii(frase);
}

void ascii (char frase[]){
	int convt,i;
	for(i=0;i<strlen(frase);i++){
		convt = frase[i];
		if(convt>64 && convt<91){
			convt = frase[i]+32;
			printf("%c",convt);
		}else{
			printf("%c",convt);
		}
	} 
}
