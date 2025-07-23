#include <stdio.h>
#include <locale.h>
#define DIM 4
#define REDUZ 2

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int imagem[DIM][DIM];
	int filtro[REDUZ][REDUZ];
	int icont, jcont, kcont, lcont, maior, l , c;
	
	for(icont = 0; icont < DIM; icont++){
		for(jcont = 0; jcont < DIM; jcont++){
			printf("Insira o valor da posição [%d, %d]: ", icont, jcont);
			scanf("%d", &imagem[icont][jcont]);
		}
	}
	printf("Antes da redução: \n");
	for(icont = 0; icont < DIM; icont++){
		for(jcont = 0; jcont < DIM; jcont++)
			printf(" %d ", imagem[icont][jcont]);
		printf("\n");
	}
	
	for(icont = 0, l = 0; icont < DIM; icont+= REDUZ, l++){
		for(jcont = 0, c = 0; jcont < DIM; jcont+= REDUZ, c++){
			maior = imagem[icont][jcont];
			for(kcont = 0; kcont < REDUZ; kcont++){
				for(lcont = 0; lcont < REDUZ; lcont++){
					if(imagem[icont+kcont][jcont+lcont] > maior)
						maior = imagem[icont+kcont][jcont+lcont];
				}
			}
			filtro[l][c] = maior;
		}
	}
	printf("\nDepois da redução: \n");
	for(icont = 0; icont < REDUZ; icont++){
		for(jcont = 0; jcont < REDUZ; jcont++)
			printf(" %d ", filtro[icont][jcont]);
		printf("\n");
	}
	return 0;
}
