#include <stdio.h>
#define TAM 5

int main(){
	
	int valores [TAM] [TAM];
	int soma_linhas[TAM];
	int soma_colunas[TAM];
	int icont, jcont;
	for(icont = 0; icont < TAM; icont++){
		for(jcont = 0; jcont < TAM; jcont++){
			printf("Insira o valor da posição [%d, %d]: ", icont, jcont);
			scanf("%d", &valores[icont][jcont]);
		}
	}
	for(icont = 0; icont < TAM; icont++){
		soma_linhas[icont] = 0;
		soma_colunas[icont] = 0;
	}
	for(icont = 0; icont < TAM; icont++){
		for(jcont = 0; jcont < TAM; jcont++){
			soma_linhas[icont] += valores[icont][jcont];
			soma_colunas[jcont] += valores[icont][jcont];
		}
	}
	for(icont = 0; icont < TAM; icont++){
		for(jcont = 0; jcont < TAM; jcont++)
			printf(" %d ", valores[icont][jcont]);
		printf("\n");
	}
	printf("\nSomatório de cada linha: ");
	for(icont = 0; icont < TAM; icont++)
		printf("%d ", soma_linhas[icont]);
	printf("\nSomatório de cada coluna: ");
	for(icont = 0; icont < TAM; icont++)
		printf("%d ", soma_colunas[icont]);	
	
	return 0;
}
