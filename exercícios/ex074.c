#include <stdio.h>
#define TAM_VETOR 15

int main(){
	int vetor[TAM_VETOR] = {25, 12, 15, 14, 6, 2, 4, 5, 10, 20, 18, 16, 24, 3, 1};
	int atual, prox, inter, indice;
	for(indice = 0; indice < TAM_VETOR; indice++){
		for (atual = 0, prox = 1; prox < TAM_VETOR; prox++, atual++){
			if(vetor[atual] > vetor[prox]){
				inter = vetor[atual];
				vetor[atual] = vetor[prox];
				vetor[prox] = inter;
			}
		}
	}
	
	printf("Vetor ordenado = [ ");
	for(indice = 0; indice < TAM_VETOR; indice++){
		printf("%d ", vetor[indice]);
	}
	printf("]");
	return 0;
}
