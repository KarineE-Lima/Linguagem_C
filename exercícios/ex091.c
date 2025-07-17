#include <stdio.h>
#define TAM 5

int main(){
	int valores[TAM][TAM];
	int icont, jcont, igualdade, tamanho;
	
	for(icont = 0; icont < TAM; icont++){
		for(jcont = 0; jcont < TAM; jcont++){
			printf("Insira o valor da posição [%d, %d]: ", icont, jcont);
			scanf("%d", &valores[icont][jcont]);
		}
	}
	
	for(icont = 0, igualdade = 0; icont < TAM; icont++){
		for(jcont = 0; jcont < TAM; jcont++){
			if(icont != jcont){
				if(valores[icont][jcont] == valores[jcont][icont])
					igualdade++;
			}
		}
	}
	for(icont = 0; icont < TAM; icont++){
		for(jcont = 0; jcont < TAM; jcont++)
			printf(" %d ", valores[icont][jcont]);
		printf("\n");
	} tamanho = TAM*TAM;
	if(igualdade == (tamanho - TAM ))
		printf("A matriz é simétrica.");
	else
		printf("A matriz é assimétrica.");
	
	return 0;
}
