#include <stdio.h>
#define TAM 100

int main(){
	int numero, base, parar, tam_atual, igual, indice, num_bra;
	int digitos[TAM];
	
	printf("Insira um número para descobrir se ele é brasileiro: ");
	scanf("%d", &numero);
	
	for(base = 2, parar = 0; base < numero - 1 && parar == 0; base++){
		num_bra = numero;
		for(indice = 0, tam_atual = 0; indice < TAM && num_bra > 1; indice++, tam_atual++){
			digitos[indice] = num_bra % base;
			num_bra /= base;
		}
		for(indice = 0, igual = 0; indice < tam_atual && tam_atual > 2; indice++)
			igual += (digitos[indice] == digitos[indice + 1]);
		if(igual == tam_atual - 1){
			printf("O número informado é um número brasileiro");
			parar = 1;
		}
	}
	if(parar == 0)
		printf("O número informado não é brasileiro");
	
	return 0;
}
