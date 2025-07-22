#include <stdio.h>
#define DIM 3
#define DIM_A 4
#define DIM_B 2

int main(){
	int matrizA[DIM_A][DIM];
	int matrizB[DIM][DIM_B];
	int produto[DIM_A][DIM_B];
	int icont, jcont, kcont;
	
	for(icont = 0; icont < DIM_A; icont++){
		for(jcont = 0; jcont < DIM; jcont++){
			printf("Insira o valor da posição [%d, %d] da matriz A: ", icont, jcont);
			scanf("%d", &matrizA[icont][jcont]);
		}
	}
	for(icont = 0; icont < DIM; icont++){
		for(jcont = 0; jcont < DIM_B; jcont++){
			printf("Insira o valor da posição [%d, %d] da matriz B: ", icont, jcont);
			scanf("%d", &matrizB[icont][jcont]);
		}
	}
	for(icont = 0; icont < DIM_A; icont++){
		for(jcont = 0; jcont < DIM_B; jcont++){
			produto[icont][jcont] = 0;
			for(kcont = 0; kcont < DIM; kcont++)
				produto[icont][jcont] += matrizA[icont][kcont] * matrizB[kcont][jcont];
		}
	}
	for(icont = 0; icont < DIM_A; icont++){
		for(jcont = 0; jcont < DIM; jcont++)
			printf(" %d ", matrizA[icont][jcont]);
		printf("\n");
	}
	printf("\n");
	for(icont = 0; icont < DIM; icont++){
		for(jcont = 0; jcont < DIM_B; jcont++)
			printf(" %d ", matrizB[icont][jcont]);
		printf("\n");
	}
	printf("\n");
	for(icont = 0; icont < DIM_A; icont++){
		for(jcont = 0; jcont < DIM_B; jcont++)
			printf(" %d ", produto[icont][jcont]);
		printf("\n");
	}
	return 0;
}
