#include <stdio.h>
#define TAM_MAX 100

int main(){
	int vetor[TAM_MAX];
	int indice, repeticoes, valoratual;
	
	printf("Insira os valores do vetor, para parar digite -1.\n");
	for(indice = 0, repeticoes = 0; indice < TAM_MAX && valoratual != -1; indice++){
		printf("Valor da posição %d: ", indice);
		scanf("%d", &valoratual);
		if(valoratual != -1){
			vetor[indice] = valoratual;
			repeticoes++;
		}
	}
	printf("Resultado do vetor = [ ");
	for(indice = 0; indice < repeticoes; indice++){
		printf( "%d ", vetor[indice]);
	}
	printf("]");
	return 0;
}
