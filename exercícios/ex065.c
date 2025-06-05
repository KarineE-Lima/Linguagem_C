#include <stdio.h>
#include <locale.h>
#define QTD_INDICE 10

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int primVetor[QTD_INDICE], segVetor[QTD_INDICE], indice; 
	
	for(indice = 0; indice < QTD_INDICE; indice++){
		printf("Insira o conteúdo do primeiro vetor: ");
		scanf("%d", &primVetor[indice]);
	}
	for(indice = 0; indice < QTD_INDICE; indice++){
		segVetor[indice] = primVetor[indice];
	}
	printf("Itens do vetor = [");
	for(indice = 0; indice < QTD_INDICE; indice++){
		printf(" %d ", segVetor[indice]);
	}
	printf("]");
	return 0;
}
