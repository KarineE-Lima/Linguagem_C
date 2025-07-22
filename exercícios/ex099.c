#include <stdio.h>
#include <locale.h>
#define DIM 3

int main(){
	setlocale(LC_ALL, "Portuguese");
	int quadrado_latino[DIM][DIM];
	int icont, jcont, kcont, num_atual, repeticoes, parar;
	
	for(icont = 0; icont < DIM; icont++){
		for(jcont = 0; jcont < DIM; jcont++){
			printf("Insira o valor da posição [%d, %d]: ", icont, jcont);
			scanf("%d", &quadrado_latino[icont][jcont]);
		}
	}
	for(icont = 0; icont < DIM; icont++){
		for(jcont = 0; jcont < DIM; jcont++)
			printf(" %d ", quadrado_latino[icont][jcont]);
		printf("\n");
	}
	
	for(icont = 0, parar = 0; icont < DIM; icont++){
		for(jcont = 0; jcont < DIM && parar == 0; jcont++){
			num_atual = quadrado_latino[icont][jcont];
			if(num_atual >= 1 && num_atual <= DIM){
				repeticoes = 0;
				for(kcont = jcont + 1; kcont < DIM; kcont++){
					if(num_atual == quadrado_latino[icont][kcont])
						repeticoes++;
				}
				for(kcont = icont + 1; kcont < DIM; kcont++){
					if(num_atual == quadrado_latino[kcont][jcont])
						repeticoes++;
				}
				if(repeticoes > 0){
					printf("O quadrado não é latino...");
					parar = 1;
				}
			} else{
				printf("O quadrado não é latino...");
				parar = 1;
			}
			
		}
	}
	if(parar == 0)
		printf("O quadrado é latino, muchacho!");
	
	return 0;
}
