#include <stdio.h>
#define TAM_STR 256

int main(){
	char string[TAM_STR];
	char ordenadas[TAM_STR];
	char consoantes[TAM_STR];
	int indice, cont;
	
	printf("Insira uma string: ");
	fgets(string, TAM_STR, stdin);
	
	for(indice = 0, cont = 0; string[indice] != '\0' && string[indice] != '\n'; indice++){
		if(string[indice] == 'A' || string[indice] == 'E' || string[indice] == 'I' || string[indice] == 'O' || string[indice] == 'U' ||
		string[indice] == 'a' || string[indice] == 'e' || string[indice] == 'i' || string[indice] == 'o' || string[indice] == 'u')
			ordenadas[cont++] = string[indice];
	}
	ordenadas[cont++] = 32;
	for(indice = 0; string[indice] != '\0' && string[indice] != '\n'; indice++){
		if(string[indice] != 'A' && string[indice] != 'E' && string[indice] != 'I' && string[indice] != 'O' && string[indice] != 'U' &&
		string[indice] != 'a' && string[indice] != 'e' && string[indice] != 'i' && string[indice] != 'o' && string[indice] != 'u')
			ordenadas[cont++] = string[indice];
	}
	ordenadas[cont++] = '\0';
	
	puts(ordenadas);
	
	return 0;
}
