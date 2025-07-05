#include <stdio.h>
#define TAM_STR 256

int main(){
	char nome[TAM_STR];
	char sobrenome[TAM_STR];
	char usuario[TAM_STR];
	int indice, tam, cont, atual;
	
	printf("Insira o seu nome completo: ");
	fgets(nome, TAM_STR, stdin);
	
	for(indice = 0; nome[indice] != ' '; indice++)
		usuario[indice] = nome[indice];
	usuario[indice] = '.';
	
	indice++;
	
	for(tam = 0; nome[tam]; tam++);
	for(cont = tam-1; nome[cont] != ' '; cont--);
	cont++;
	for(indice; nome[cont]; cont++, indice++)
		usuario[indice] = nome[cont];
	for(indice = 0; usuario[indice]; indice++){
		if(usuario[indice] >= 'A' && usuario[indice] <= 'Z')
			usuario[indice] = usuario[indice] - 'A' + 'a';
	}
	usuario[indice] = '\0';
	puts(usuario);
	
	return 0;
}
