#include <stdio.h>
#include <locale.h>
#define QTD_ITENS 10

int main(){
	setlocale(LC_ALL, "Portuguese");
	int vetor1[QTD_ITENS], vetor2[QTD_ITENS], maiores[QTD_ITENS], indice;
	
	for(indice = 0; indice < QTD_ITENS; indice++){
		printf("Insira o conteúdo do primeiro vetor: ");
		scanf("%d", &vetor1[indice]);
	}
	printf("\n ------------------------------------\n");
	for(indice = 0; indice < QTD_ITENS; indice++){
		printf("Insira o conteúdo do segundo vetor: ");
		scanf("%d", &vetor2[indice]);
	}
	for(indice = 0; indice < QTD_ITENS; indice++){
		maiores[indice] = (vetor1[indice] > vetor2[indice]) ? vetor1[indice] : vetor2[indice];
	}
	printf("Maiores valores = [");
	for(indice = 0; indice < QTD_ITENS; indice++){
		printf(" %d ", maiores[indice]);
	}
	printf("]");
}
