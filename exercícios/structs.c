#include <stdio.h>
#define TAM 50
#define QTD 3

struct tipo_pessoa{
	char nome[TAM];
	int idade;
	float peso;
};
typedef struct tipo_pessoa tipo_pessoa;

int main(){
	tipo_pessoa lista[QTD];
	int icont;
	
	for(icont = 0; icont < QTD; icont++){
		printf("\n ---------PESSOA %d---------- \n", icont+1);
		printf("Insira o seu nome: ");
		fgets(lista[icont].nome, TAM, stdin);
		fflush(stdin);
		
		printf("Insira a sua idade: ");
		scanf("%d", &lista[icont].idade);
		fflush(stdin);
		
		printf("Insira o seu peso: ");
		scanf("%f", &lista[icont].peso);
		fflush(stdin);
	}
	system("cls");
	for(icont = 0; icont < QTD; icont++){
		printf("---------PESSOA %d-----------------\n", icont+1);
		printf("Nome: %s\n", lista[icont].nome);
		printf("Idade: %d\n", lista[icont].idade);
		printf("Peso: %.2f\n", lista[icont].peso);
	}
	
	return 0;
}
