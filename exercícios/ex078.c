#include <stdio.h>
#include <locale.h>
#define TAM_STR 256

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	char string[TAM_STR], substring[TAM_STR];
	int indice, inicio, fim;
	
	printf("Insira uma string: ");
	fgets(string, TAM_STR, stdin);
	
	printf("Insira o inicio e o fim da substring: ");
	scanf("%d %d", &inicio, &fim);
	
	for(indice = 0; inicio <= fim; indice++, inicio++)
		substring[indice] = string[inicio];
	substring[indice++] = '\0';
	
	printf("Resultado da substring: ");
	puts(substring);
	
	return 0;
}
