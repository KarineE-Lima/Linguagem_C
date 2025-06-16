#include <stdio.h>
#include <locale.h>
#define TAM_VETOR 15

int main(){
	setlocale(LC_ALL, "Portuguese");
	int vetor[TAM_VETOR] = {-15, 1, 2, 4, 3, 5, 6, 10, 12, 14, 16, 18, 20, 24, 25};
	int atual, prox, inter, indice, trocas = 1, rp = 0;
	for(indice = TAM_VETOR; indice > 0 && trocas > 0; indice--){
		trocas = 0;
		for (atual = 0, prox = 1; prox < indice; prox++, atual++){
			if(vetor[atual] > vetor[prox]){
				inter = vetor[atual];
				vetor[atual] = vetor[prox];
				vetor[prox] = inter;
				trocas++;
			}
		}
		rp++;
	}
	
	printf("Vetor ordenado = [ ");
	for(indice = 0; indice < TAM_VETOR; indice++){
		printf("%d ", vetor[indice]);
	}
	printf("]\nRepetições: %d", rp);
	return 0;
}
