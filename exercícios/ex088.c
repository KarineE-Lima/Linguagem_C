#include <stdio.h>
#define TAM_STR 256
#define SPACE 32

int main(){
	char nome[TAM_STR];
	char abreviado[TAM_STR];
	int indice, tam_nome, cont;
	
	printf("Insira o seu nome completo: ");
	fgets(nome, TAM_STR, stdin);
	
	for(tam_nome = 0; nome[tam_nome] != '\0' && nome[tam_nome] != '\n'; tam_nome++);
	for(indice = tam_nome; nome[indice] != SPACE; indice--);
	tam_nome = indice;
	
	for(indice++, cont= 0; nome[indice]!= '\0' && nome[indice] != '\n'; cont++, indice++)
		abreviado[cont] = nome[indice];
	abreviado[cont++] = ',';
	abreviado[cont++] = SPACE;
	indice = 0;
	while(indice < tam_nome){
		abreviado[cont++] = nome[indice++];
		abreviado[cont++] = '.';
		abreviado[cont++] = SPACE;
		for(indice; nome[indice] != SPACE; indice++);
		indice++;
	}
	abreviado[cont] = '\0';
	
	puts(abreviado);
	
	return 0;
}
