#include <stdio.h>
#include <locale.h>
#define TAM_STR 256
#define SPACE 32

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	char string[TAM_STR], normalizada[TAM_STR];
	int indice, cont;
	
	printf("Insira uma string não normalizada: ");
	fgets(string, TAM_STR, stdin);
	indice = 0;
	cont = 0;
	while(string[indice] != '\0' && string[indice] != '\n'){
		while(string[indice] != SPACE && string[indice] != '\0' && string[indice] != '\n'){
			normalizada[cont++] = string[indice++];
		}
		if(string[indice-1] != SPACE && string[indice] != '\0' && indice != 0)
			normalizada[cont++] = SPACE;
		indice++;
		if(string[indice] == '\0')
			normalizada[cont++] = '\0';
	}
	normalizada[cont++] = '\n';
	printf("\n");
	puts(normalizada);
	
	return 0;
}
