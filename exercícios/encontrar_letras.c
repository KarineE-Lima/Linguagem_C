#include <stdio.h>
#define TAM_STR 256

int main(){
	char string[TAM_STR];
	int indice, qtdletras;
	
	printf("Informe a string: ");
	fgets(string, TAM_STR, stdin);
	
	for(indice = 0, qtdletras = 0; string[indice] != '\0' && string[indice] != '\n'; indice++){
		if((string[indice] >= 65 && string[indice] <= 90) || (string[indice] >= 97 && string[indice] <= 123)){
			qtdletras++;
		}
	}
	printf("A quantidade de letras na string é %d\n", qtdletras);
	puts(string);
	
	return 0;
	
}
