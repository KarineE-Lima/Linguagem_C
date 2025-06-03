#include <stdio.h>

int main(){
	int i;
	int vetor[20];
	
	for (i = 0; i < 20; i++){
		vetor[i] = 0;
		printf("Posicao %d: %d\n", i, vetor[i]);
	}
	return 0;
}
