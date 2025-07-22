#include <stdio.h>
#define IDADE_MIN 18
#define IDADE_MAX 22
#define QTD_IDADE (IDADE_MAX - IDADE_MIN)+1

int main(){
	int qtd_casais[QTD_IDADE][QTD_IDADE] = {{1, 1, 2, 0, 0},
											{0, 0, 0, 0, 0},
											{0, 0, 0, 5, 0},
											{0, 0, 0, 0, 0},
											{0, 8, 0, 0, 0}};
	int maiorCasamentoF, maiorCasamentoM, icont, jcont;
	int max_casM, max_casF, soma_casamentoM, soma_casamentoF, idade_casalF, idade_casalM, maior_casamento; 
	
	for(icont = 0, max_casM = 0; icont < QTD_IDADE; icont++){
		for(jcont = 0, soma_casamentoM = 0; jcont < QTD_IDADE; jcont++)
			soma_casamentoM += qtd_casais[icont][jcont];
		if(max_casM < soma_casamentoM){
			max_casM = soma_casamentoM;
			maiorCasamentoM = IDADE_MIN + icont;
		}
	}
	for(icont = 0, max_casF = 0; icont < QTD_IDADE; icont++){
		for(jcont = 0, soma_casamentoF = 0; jcont < QTD_IDADE; jcont++)
			soma_casamentoF += qtd_casais[jcont][icont];
		if(max_casF < soma_casamentoF){
			max_casF = soma_casamentoF;
			maiorCasamentoF = IDADE_MIN + icont;
		}
	}
	maior_casamento = qtd_casais[0][0];
	idade_casalM = IDADE_MIN;
	idade_casalF = IDADE_MIN;
	for(icont = 1; icont < QTD_IDADE; icont++){
		for(jcont = 1; jcont < QTD_IDADE; jcont++){
			if(maior_casamento < qtd_casais[icont][jcont]){
				maior_casamento = qtd_casais[icont][jcont];
				idade_casalM = IDADE_MIN + icont;
				idade_casalF = IDADE_MIN + jcont;
			}
		}
	}
	printf("A idade mais frequente no casamento dos homens é %d anos com %d casamentos.\n", maiorCasamentoM, max_casM);
	printf("A idade mais frequente no casamento das mulheres é %d anos com %d casamentos.\n", maiorCasamentoF, max_casF);
	printf("A combinação de mais frequente de idades de casamento é entre homens de %d anos e mulheres de %d anos com %d casamentos\n", idade_casalM, idade_casalF, maior_casamento);
	
	return 0;
	
}
