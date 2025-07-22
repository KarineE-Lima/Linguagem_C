#include <stdio.h>
#include <locale.h>
#define UND 10

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int altura_folha[UND];
	int icont, corte, jcont, maior_qtd, melhor_corte, qtd_atual;
	
	for(icont = 0; icont < UND; icont++){
		printf("Insira a altura da %dª folha: ", icont + 1);
		scanf("%d", &altura_folha[icont]);
	}
	
	for(corte = 0, maior_qtd = 0; corte <= UND; corte++){
		for(icont = 0, qtd_atual = 0; icont < UND; icont++){
			if(altura_folha[icont] > corte && altura_folha[icont-1] < corte)
				qtd_atual++;
		}
		qtd_atual++;
		if(maior_qtd < qtd_atual){
			maior_qtd = qtd_atual;
			melhor_corte = corte;
		}
	}
	printf("A maior quantidade de cortes é %d feita pelo corte de %d unidades.", maior_qtd, melhor_corte);
	
	return 0;
}
