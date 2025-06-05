#include <stdio.h>
#include <locale.h>
#define QTD_POS 20

int main(){
	int valores[QTD_POS];
	int indice, maior, menor, atual;
	
	for(indice = 0; indice < QTD_POS; indice++){
		printf("Insira os valores: ");
		scanf("%d", &valores[indice]);
	}
	maior = valores[0];
	menor = valores[0];
	for(indice = 1; indice < QTD_POS; indice++){
		atual = valores[indice];
		if(atual > maior) 
			maior = atual;
		if(atual < menor)
			menor = atual;
	}
	printf("O menor valor do array: %d\n", menor);
	printf("O maior valor do array: %d\n", maior);
	
	return 0;
}
