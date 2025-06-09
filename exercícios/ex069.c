#include <stdio.h>
#define TAM_MAX 100

int main(){
	int vetor[TAM_MAX];
	int indice, repeticoes;
	
	printf("Insira os valores do vetor, para parar digite -1.\n");
	for(indice = 0, repeticoes = 0; indice < TAM_MAX && vetor[indice-1] != -1; indice++){
		printf("Valor da posição %d: ", indice);
		scanf("%d", &vetor[indice]);
		repeticoes++;
	}
	printf("Resultado do vetor = [ ");
	for(indice = 0; indice < repeticoes-1; indice++){
		printf( "%d ", vetor[indice]);
	}
	printf("]");
	return 0;
}
