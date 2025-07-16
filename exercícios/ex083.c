#include <stdio.h>
#include <locale.h>
#define TAM_STR 256
#define SPACE 32

int main(){
	setlocale(LC_ALL, "Portuguese");
	char string[TAM_STR];
	char sem_espaco[TAM_STR], inversa[TAM_STR];
	int indice, cont, tam_string, igualdade;
	
	printf("Insira a string: ");
	fgets(string, TAM_STR, stdin);
	
	for(indice = 0, cont = 0; string[indice] != '\0' && string[indice] != '\n'; indice++){
		if(string[indice] != SPACE){
			sem_espaco[cont] = string[indice];
			cont++;
		}
	}
	sem_espaco[cont++] = '\0';
	tam_string = cont;
	
	for(indice = tam_string-2, cont = 0; indice >= 0; indice--, cont++)
		inversa[cont] = sem_espaco[indice];
	inversa[cont++] = '\0';
	for(indice = 0, igualdade = 0; indice < tam_string; indice++){
		if(sem_espaco[indice] == inversa[indice])
			igualdade++;
	}
	
	if(tam_string == igualdade)
		printf("É palindroma!");
	else
		printf("Não é palidroma!");
		
	return 0;
}

