#include <stdio.h>
#include <locale.h>
#define QTD_POS 9

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int valores[QTD_POS];
	int indice, maior, menor, atual;
	int posmaior, posmenor;
	
	for(indice = 0; indice < QTD_POS; indice++){
		printf("Insira o valor da posição %d: ", indice);
		scanf("%d", &valores[indice]);
	}
	menor = valores[0];
	maior = valores[0];
	for(indice = 1; indice < QTD_POS; indice++){
		atual = valores[indice];
		if(atual > maior){
			maior = atual;
			posmaior = indice;
		}
		if(atual < menor){
			menor = atual;
			posmenor = indice;
		}
	}
	printf("O menor valor do array está na posição %d: %d\n", posmenor, menor);
	printf("O maior valor do array está na posição %d: %d\n", posmaior, maior);

	return 0;
}
