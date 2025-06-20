#include <stdio.h>
#include <locale.h>
#define TAM_MAX 10

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int vendas[TAM_MAX];
	int indice, parar, tamAtual = 0, soma = 0;
	
	for(indice = 0, parar = 0; indice < TAM_MAX && parar == 0; indice++){
		printf("Insira o número da sequência: ");
		scanf("%d", &vendas[indice]);
		tamAtual++;
		if(vendas[indice] == 0){
			tamAtual -= 2;
			vendas[indice - 1] = 0;
			indice = tamAtual - 1;
		}
		if(vendas[indice] == -1){
			vendas[indice] = 0;
			tamAtual--;
			parar = 1;
		}
	}
	for(indice = 0; indice < tamAtual; indice++)
		soma+= vendas[indice];
	
	printf("\nO total de vendas é %d", soma);
	
	return 0;
}
