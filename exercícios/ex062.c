#include <stdio.h>
#include <locale.h>
#define QTD 10

int main(){
	setlocale(LC_ALL, "Portuguese");
	int operando1[QTD], operando2[QTD], resultado[QTD];
	int indice;
	
	for(indice = 0; indice < QTD; indice++){
		printf("Insira os valores do primeiro array: ");
		scanf("%d", &operando1[indice]);
	}
	printf("\n ---------------------------------------\n");
	for(indice = 0; indice < QTD; indice++){
		printf("Insira os valores do segundo array: ");
		scanf("%d", &operando2[indice]);
	}
	for(indice = 0; indice < QTD; indice++){
		resultado[indice] = operando1[indice] + operando2[indice];
	}
	printf("O resultado é = [");
	for(indice = 0; indice < QTD; indice++){
		printf("%d ", resultado[indice]);
	}
	printf("]");
	return 0;
}
