#include <stdio.h>
#include <locale.h>
#define TAM_VETOR 10

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int valores[TAM_VETOR];
	int indice, posicao, valorBuscado, busca = 1; 
	int meio, inicio;
	
	for(indice = 0; indice < TAM_VETOR; indice++){
		printf("Insira o valor da posição %d do vetor: ", indice);
		scanf("%d", &valores[indice]);
	}
	printf("Insira o valor que quer buscar: ");
	scanf("%d", &valorBuscado);
	meio = TAM_VETOR / 2;
	
	for(indice = 0; indice < TAM_VETOR && busca == 1; indice++){
		if (valorBuscado >= valores[meio]){
			if (valorBuscado == valores[meio]){
				posicao = meio;
				busca = 0;
			} else {
				posicao = -1;
			}
			inicio = meio;
			meio = (inicio + TAM_VETOR) / 2;
		} else if (valorBuscado < valores[meio]){
			meio /= 2;
			if (valorBuscado == valores[meio]){
				posicao = meio;
				busca = 0;
			} else {
				posicao = -1;
			}
		}
	}
	printf("O valor buscado está na posição %d", posicao);
	
	return 0;
}
