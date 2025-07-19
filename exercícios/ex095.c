#include <stdio.h>
#define L 3
#define C 4

int main(){
	int prim_matriz[L][C];
	int seg_matriz[L][C];
	int soma[L][C];
	int diferenca[L][C];
	int icont, jcont;
	
	for(icont = 0; icont < L; icont++){
		for(jcont = 0; jcont < C; jcont++){
			printf("Insira o valor da posição [%d, %d] da primeira matriz: ", icont, jcont);
			scanf("%d", &prim_matriz[icont][jcont]);
		}
	}
	for(icont = 0; icont < L; icont++){
		for(jcont = 0; jcont < C; jcont++){
			printf("Insira o valor da posição [%d, %d] da segunda matriz: ", icont, jcont);
			scanf("%d", &seg_matriz[icont][jcont]);
		}
	}
	printf("\nPrimeira matriz: \n");
	for(icont = 0; icont < L; icont++){
		for(jcont = 0; jcont < C; jcont++)
			printf(" %d ", prim_matriz[icont][jcont]);
		printf("\n");
	}
	printf("\nSegunda matriz: \n");
	for(icont = 0; icont < L; icont++){
		for(jcont = 0; jcont < C; jcont++)
			printf(" %d ", seg_matriz[icont][jcont]);
		printf("\n");
	}
	for(icont = 0; icont < L; icont++){
		for(jcont = 0; jcont < C; jcont++){
			soma[icont][jcont] = prim_matriz[icont][jcont] + seg_matriz[icont][jcont];
			diferenca[icont][jcont] = prim_matriz[icont][jcont] - seg_matriz[icont][jcont];
		}
	}
	printf("\nSoma das matrizes: \n");
	for(icont = 0; icont < L; icont++){
		for(jcont = 0; jcont < C; jcont++)
			printf(" %d ", soma[icont][jcont]);
		printf("\n");
	}
	printf("\nDiferença das matrizes: \n");
	for(icont = 0; icont < L; icont++){
		for(jcont = 0; jcont < C; jcont++)
			printf(" %d ", diferenca[icont][jcont]);
		printf("\n");
	}
	
	return 0;
}
