#include <stdio.h>
#define LINHAS 3
#define COLUNAS 4

int main(){
	int campo[LINHAS][COLUNAS];
	int icont, jcont, kcont, maior, reta_atual;
	for(icont = 0; icont < LINHAS; icont++){
		for(jcont = 0; jcont < COLUNAS; jcont++){
			printf("Insira a produtividade da célula %d, %d: ", icont, jcont);
			scanf("%d", &campo[icont][jcont]);
		}
	}maior = 0;
	for(icont = 0; icont < LINHAS; icont++){
		for(jcont = 0; jcont < COLUNAS; jcont++){
			for(kcont = 0, reta_atual = 0; kcont < LINHAS; kcont++)
				reta_atual += campo[kcont][jcont];
			maior = (reta_atual > maior)? reta_atual : maior;
			for(kcont = 0, reta_atual = 0; kcont < COLUNAS; kcont++)
				reta_atual += campo[icont][kcont];
			maior = (reta_atual > maior)? reta_atual : maior;
		}
	}
	printf("O total de minhocas a serem colhidas é %d", maior);
	return 0;
}
