#include <stdio.h>
#define DIM 3

int main(){
	
	int valores[DIM][DIM];
	int icont, jcont, xindice, yindice, aux;
	
	for(icont = 0; icont < DIM; icont++){
		for(jcont = 0; jcont < DIM; jcont++){
			printf("Insira o valor da posição [%d, %d]: ", icont, jcont);
			scanf("%d", &valores[icont][jcont]);
		}
	}
	for(icont = 0; icont < DIM; icont++){
		for(jcont = 0; jcont < DIM; jcont++)
			printf(" %d ", valores[icont][jcont]);
		printf("\n");
	}
	printf("\nInsira o valor das colunas e linhas que você quer fazer a troca: ");
	scanf("%d %d", &xindice, &yindice);
	
	// trocando as linhas
	for(jcont = 0; jcont < DIM; jcont++){
		aux = valores[xindice][jcont];
		valores[xindice][jcont] = valores[yindice][jcont];
		valores[yindice][jcont] = aux;
	}
	// trocando as colunas
	for(icont = 0; icont < DIM; icont++){
		aux = valores[icont][xindice];
		valores[icont][xindice] = valores[icont][yindice];
		valores[icont][yindice] = aux;
	}
	
	// trocando as diagonais
	for(icont = 0; icont < DIM; icont++){
		for(jcont = 0; jcont < DIM; jcont++){
			if(icont + jcont == DIM - 1){
				aux = valores[icont][icont];
				valores[icont][icont] = valores[icont][jcont];
				valores[icont][jcont] = aux;
			}
		}
	}
	
	printf("Depois da troca:\n");
	for(icont = 0; icont < DIM; icont++){
		for(jcont = 0; jcont < DIM; jcont++)
			printf(" %d ", valores[icont][jcont]);
		printf("\n");
	}
	return 0;
}
