#include <stdio.h>
#include <locale.h>
#define TAM_VETOR 10

int main(){
	setlocale(LC_ALL, "Portuguese");
	int valores[TAM_VETOR];
	int indice, posicao, valorBuscado, busca;
	
	for(indice = 0; indice < TAM_VETOR; indice++){
		printf("Insira os valores do vetor: ");
		scanf("%d", &valores[indice]);
	}
	printf("Insira o valor que quer buscar: ");
	scanf("%d", &valorBuscado);
	
	for(indice = 0, busca = 1; indice < TAM_VETOR && busca == 1; indice++){
		if(valores[indice] == valorBuscado){
			posicao = indice;
			busca = 0;
		} else {
			posicao = -1;
		}
	}
	printf("O valor se encontra na posição %d do vetor.", posicao);
	return 0;
}
