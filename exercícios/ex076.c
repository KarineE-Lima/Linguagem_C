#include <stdio.h>
#define TAM 100

int main(){
	char palavra[TAM];
	char novapalavra[TAM];
	int indice, cont, tam;
	
	printf("Insira uma string: ");
	fgets(palavra, TAM, stdin);
	for(tam = 0; palavra[tam] != '\0' && palavra[tam] != '\n'; tam++);
	for(indice = tam, cont = 0; indice >= 0; indice--, cont++)
		novapalavra[cont] = palavra[indice];
	
	printf("A string invertida é: ");
	puts(novapalavra);
	
	return 0;
}
