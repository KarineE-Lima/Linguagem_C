#include <stdio.h>
#include <locale.h>
#define TAM_VET 3

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int tamanho[TAM_VET];
	int posicaoi[TAM_VET];
	int posfinal[TAM_VET];
	int indice, areaocupada = 0, disponivel;
	
	for(indice = 0; indice < TAM_VET; indice++){
		printf("Insira a posição inicial e o tamanho da folha F%d: ", indice+1);
		scanf("%d %d", &posicaoi[indice], &tamanho[indice]);
	}
	for(indice = 0; indice < TAM_VET; indice++)
		posfinal[indice] = posicaoi[indice] + tamanho[indice];
	for(indice = 0; indice < TAM_VET; indice++){
		if(posicaoi[indice] < posfinal[indice-1])
			tamanho[indice] = (posfinal[indice] < posfinal[indice-1])? 0 : posfinal[indice] - posfinal[indice-1];
		areaocupada += tamanho[indice];
	}
	disponivel = 100 * (600 - areaocupada);
	
	printf("A area aberta é de %d cm2", disponivel);
	return 0;
}
