#include <stdio.h> 
#include <string.h> 

void copia(char frase[], char letra);

int main(){ 
	char original[30]; 
	char frase[30];
	char letra;
	printf("Digite uma palavra: "); 
	gets(frase); 
	printf("\nDigite o carcter:"); 
	scanf("%c",&letra);
	strcpy(original,frase);
	copia(&frase,letra);
	printf("Palavra original: %s\n",original);
	printf("Palavra alterada: %s\n",frase);
}

void copia(char frase[], char letra){
	int i,j;
	char temp[30];
	j=0;
	for(i=0;i<strlen(frase);i++){
		if(frase[i]!=letra){
			temp[j]=frase[i];
			j++;
		}
	}
	temp[j]= '\0';
	strcpy(frase,temp); 
}
