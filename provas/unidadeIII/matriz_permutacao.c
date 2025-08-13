#include <stdio.h>
#define DIM 4
#define TRUE 1
#define FALSE 0

int main(){
	int matriz[DIM][DIM];
	int icont, jcont, kcont, permuta, qtd_l, qtd_c;
	
	for(icont = 0; icont < DIM; icont++){
		for(jcont = 0; jcont < DIM; jcont++){
			printf("Insira o valor da posição[%d, %d]: ", icont, jcont);
			scanf("%d", &matriz[icont][jcont]);
		}
	}
	for(icont = 0, permuta = TRUE; icont < DIM && permuta == TRUE; icont++){
		for(jcont = 0; jcont < DIM && permuta == TRUE; jcont++){
			if(matriz[icont][jcont] < 0 || matriz[icont][jcont] > 1)
				permuta = FALSE;
			for(kcont = 0, qtd_l = 0, qtd_c = 0; kcont < DIM; kcont++){
				qtd_l += (matriz[kcont][jcont] == 1)? 1 : 0;
				qtd_c += (matriz[icont][kcont] == 1)? 1 : 0;
			}
			if(qtd_l != 1 || qtd_c != 1)
				permuta = FALSE;
		}
	}
	for(icont = 0; icont < DIM; icont++){
		for(jcont = 0; jcont < DIM; jcont++)
			printf(" %d ", matriz[icont][jcont]);
		printf("\n");
	}
	if(permuta == TRUE)
		printf("É uma permuta!");
	else
		printf("Não é uma permuta!");
	
	return 0;
}
