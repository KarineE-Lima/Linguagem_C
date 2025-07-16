#include <stdio.h>
#define TAM_STR 256


int main(){
	char string[TAM_STR];
	char palavra_atual[TAM_STR], maior_palavra[TAM_STR];
	int maior_tam, indice, cont;
	
	printf("Insira uma string: ");
	fgets(string, TAM_STR, stdin);
	
	indice = 0;
	maior_tam = 0;
	while(string[indice] != '\0' && string[indice] != '\n'){
		for(cont = 0; string[indice] != 32 && string[indice] != '\0' && string[indice] != '\n'; cont++, indice++)
			palavra_atual[cont] = string[indice];
		indice++;
		palavra_atual[cont++] = '\0';
		
		if(cont > maior_tam){
			maior_tam = cont;
			for(cont = 0; cont < maior_tam; cont++)
				maior_palavra[cont] = palavra_atual[cont];
			maior_palavra[cont] = '\0';
		}
		
	}
	printf("\nMaior palavra: ");
	puts(maior_palavra);
	return 0;
}
