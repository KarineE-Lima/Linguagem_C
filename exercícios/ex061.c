#include <stdio.h>

int main(){
	int vetor[10];
	int indice; 
	int numerospares = 0;
	
	for(indice = 0; indice < 10; indice++){
		printf("Insira o numero da posição %d: ", indice);
		scanf("%d", &vetor[indice]);
		numerospares += (vetor[indice] % 2 == 0)? 1 : 0;
	}
	printf("Existem %d numeros pares no vetor", numerospares);
	return 0;
}
