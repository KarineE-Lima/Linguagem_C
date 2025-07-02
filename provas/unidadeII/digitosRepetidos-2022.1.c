#include <stdio.h>
#include <locale.h>
#define TAM_VET 10

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int digitos[TAM_VET];
	int indice, inicio, fim, digito;
	int cont;
	
	printf("Insira o valor de A e o valor de B: ");
	scanf("%d %d", &inicio, &fim);
	
	for(indice = 0; indice < TAM_VET; indice++)
		digitos[indice] = 0;
	for(indice = 0; indice < TAM_VET; indice++){
		for(cont = inicio; cont <= fim; cont++){
			digito = cont;
			while(digito > 0){
				digitos[indice] += (digito % 10 == indice) ? 1 : 0;
				digito /= 10;
			}
		}
	}
	for(indice = 0; indice < TAM_VET; indice++)
		printf("%d ", digitos[indice]);
	
	return 0;
}
