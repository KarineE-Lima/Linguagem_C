#include <stdio.h>
#define TAM 15
#define QTD 5

struct tipo_carro{
	char marca[TAM];
	int ano;
	float preco;
};

typedef struct tipo_carro tipo_carro;

int main(){
	
	tipo_carro carros[QTD];
	int icont;
	float valor_max = 1.0;
	
	for(icont = 0; icont < QTD; icont++){
		printf("\n--------CADASTRO CARRO %d--------------\n", icont+1);
		printf("Insira a marca do carro: ");
		fgets(carros[icont].marca, TAM, stdin);
		fflush(stdin);
		printf("Insira o ano do carro: ");
		scanf("%d", &carros[icont].ano);
		fflush(stdin);
		printf("Insira o preço do carro: ");
		scanf("%f", &carros[icont].preco);
		fflush(stdin);
	}
	system("cls");
	
	while(valor_max > 0){
		printf("Insira o valor máximo que você quer pagar: ");
		scanf("%f", &valor_max);
		for(icont = 0; icont < QTD; icont++){
			if(carros[icont].preco < valor_max)
				printf("\nMarca do carro: %s \nAno: %d \nValor: R$ %.2f\n\n", carros[icont].marca, carros[icont].ano, carros[icont].preco);
		}
	}
	
	return 0;
}
