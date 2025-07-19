#include <stdio.h>
#define DIM 6

int main(){
	int valores[DIM][DIM];
	int icont, jcont, multi;
	
	for(icont = 0; icont < DIM; icont++){
		for(jcont = 0; jcont < DIM; jcont++){
			printf("Insira o valor da posição [%d, %d]: ", icont, jcont);
			scanf("%d", &valores[icont][jcont]);
		}
	}
	
	printf("Insira o valor a se multiplicar a matriz: ");
	scanf("%d", &multi);
	
	printf("\nAntes da multiplicação: \n");
	for(icont = 0; icont < DIM; icont++){
		for(jcont = 0; jcont < DIM; jcont++)
			printf(" %d ", valores[icont][jcont]);
		printf("\n");
	}
	
	for(icont = 0; icont < DIM; icont++){
		for(jcont = 0; jcont < DIM; jcont++)
			valores[icont][jcont] *= multi;
	}
	
	printf("\nDepois da multiplicação: \n");
	for(icont = 0; icont < DIM; icont++){
		for(jcont = 0; jcont < DIM; jcont++)
			printf(" %d ", valores[icont][jcont]);
		printf("\n");
	}
	
	return 0;
}
