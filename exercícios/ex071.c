#include <stdio.h>
#include <locale.h>
#define TAM_VETOR 10

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int valores[TAM_VETOR];
	int indice, inicio, meio, fim, posicao, valorBusc, busca = 0;
	
	posicao= -1;
	inicio = 0; 
	fim = TAM_VETOR;
	
	for(indice = 0; indice < TAM_VETOR; indice++){
		printf("Insira o valor da posição %d: ", indice);
		scanf("%d", &valores[indice]);
	} 
	printf("Insira o valor a ser buscado: ");
	scanf("%d", &valorBusc);
	
	while(inicio < fim && posicao < 0){
		meio = (fim - inicio) / 2 + inicio;
		if(valores[meio] == valorBusc){
			posicao = meio;
		} else if(valores[meio] > valorBusc){
			fim = meio - 1;
		} else {
			inicio = meio + 1;
		}
		busca++;
	}
	printf("Posição : %d\nBuscas feitas: %d", posicao, busca);
	
	return 0;
}
