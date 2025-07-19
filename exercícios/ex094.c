#include <stdio.h>
#define DIM 6

int main(){
	int matriz[DIM][DIM];
	int vetor[DIM*DIM];
	int icont, jcont, indice;
	
	for(icont = 0; icont < DIM; icont++){
		for(jcont = 0; jcont < DIM; jcont++){
			printf("Insira o valor da posição [%d, %d]: ", icont, jcont);
			scanf("%d", &matriz[icont][jcont]);
		}
	}
	indice = 0;
	for(icont = 0; icont < DIM; icont++){
		for(jcont = 0; jcont < DIM; jcont++)
			vetor[indice++] = matriz[icont][jcont];
	}
	printf("\nMatriz:\n");
	for(icont = 0; icont < DIM; icont++){
		for(jcont = 0; jcont < DIM; jcont++)
			printf(" %d ", matriz[icont][jcont]);
		printf("\n");
	}
	printf("\nVetor:\n");
	for(indice = 0; indice < DIM*DIM; indice++)
		printf("%d ", vetor[indice]);
	
	return 0;
}
