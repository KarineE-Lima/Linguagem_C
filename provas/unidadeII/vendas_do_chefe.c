#include <stdio.h>
#include <locale.h>
#define TAM_MAX 10

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int vendas[TAM_MAX];
	int indice = 0, valor = 0,tamAtual, total;
	
	while(valor >= 0){
		printf("Insira o número da sequência: ");
		scanf("%d", &valor);
		
		if(valor > 0){
			vendas[indice] = valor;
			indice++;
		}else if(valor == 0){
			indice--;
			vendas[indice] = 0;
		}
	}
	tamAtual = indice;
	for(indice = 0, total = 0; indice < tamAtual; indice++)
		total += vendas[indice];
	
	printf("\nO total de vendas é %d", total);
	
	return 0;
}
