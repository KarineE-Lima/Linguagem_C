#include <stdio.h>
#define TAM 5

int main(){
	int valores[TAM][TAM];
	int icont, jcont, soma_prin, soma_sec;
	
	for(icont = 0; icont < TAM; icont++){
		for(jcont = 0; jcont < TAM; jcont++){
			printf("Insira o valor da posição [%d, %d]: ", icont, jcont);
			scanf("%d", &valores[icont][jcont]);
		}
	}
	for(icont = 0; icont < TAM; icont++){
		for(jcont = 0; jcont < TAM; jcont++)
			printf(" %d ", valores[icont][jcont]);
		printf("\n");
	}
	
	for(icont = 0, soma_prin = 0; icont < TAM; icont++)
		soma_prin += valores[icont][icont];
	for(icont = 0, soma_sec = 0; icont < TAM; icont++){
		for(jcont = 0; jcont < TAM; jcont++){
			if(icont + jcont == TAM - 1)
				soma_sec += valores[icont][jcont];
		}
	}
	printf("\nSomatório da diagonal principal: %d", soma_prin);
	printf("\nSomatório da diagonal secundária: %d", soma_sec);
	return 0;
}
