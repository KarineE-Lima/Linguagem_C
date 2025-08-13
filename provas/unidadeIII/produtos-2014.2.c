#include <stdio.h>
#define QTD 100
#define TAM 256

struct tipo_produto {
	char nome[TAM];
	float valor;
};

typedef struct tipo_produto tipo_produto;

int main(){
	tipo_produto produtos[QTD];
	int icont, jcont, imenor;
	float media, menor_v;
	
	for(icont = 0; icont < QTD; icont++){
		printf("Insira o nome do produto: ");
		fgets(produtos[icont].nome, TAM, stdin);
		fflush(stdin);
		printf("Insira o valor do produto: ");
		scanf("%f", &produtos[icont].valor);
		fflush(stdin);
	}
	
	for(icont = 0, media = 0; icont < QTD; icont++)
		media += produtos[icont].valor;
	media /= QTD;
	
	for(icont = 0; icont < QTD; icont++){
		if(media > produtos[icont].valor)
			produtos[icont].valor += (produtos[icont].valor * 0.1);
	}
	menor_v = produtos[0].valor;
	for(icont = 1, imenor = 0; icont < QTD; icont++){
		if(produtos[icont].valor < menor_v){
			menor_v = produtos[icont].valor;
			imenor = icont;
		}
	}
	printf("O produto de menor valor é %s que custa %.2f reais", produtos[imenor].nome, menor_v);
	return 0;
}
