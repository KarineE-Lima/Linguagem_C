#include <stdio.h>
#include <locale.h>
#define TAM_MAX 30

int main(){
	int vetor[TAM_MAX] = {2, 4, 5, 7, 9, 11, 45, 2, 5};
	int indice, tamAtual = 0, elementoAdd, posRemov, pos_add;
	int elemRemov, indice2, dupl;
	char opcao;
	printf("Array atual = [ ");
	for(indice = 0; indice < TAM_MAX && vetor[indice] != 0; indice++){
		printf("%d ", vetor[indice]);
		tamAtual++;
	}
	printf("] \n");
	
	printf("\nEscolha uma das opções abaixo:\n");
	printf("a. Inserir um elemento no final do vetor\n");
	printf("b. Inserir um elemento em uma dada posição\n");
	printf("c. Remover um elemento de uma posição indicada\n");
	printf("d. Remover todos elementos iguais a um valor indicado\n");
	printf("e. Gerar um novo array sem duplicidades a partir deste array\n");
	scanf("%c", &opcao);
	switch(opcao){
		case 'a':
			printf("Insira o elemento a ser adicionado ao final do vetor: ");
			scanf("%d", &elementoAdd);
			vetor[tamAtual] = elementoAdd;
			tamAtual++;
			break;
		case 'b':
			printf("Insira a posição do elemento a ser adicionado e o elemento: ");
			scanf("%d %d", &pos_add, &elementoAdd);
			tamAtual++;
			for(indice = tamAtual-1; indice > pos_add; indice--){
				vetor[indice] = vetor[indice - 1];
			}
			vetor[pos_add] = elementoAdd;
			break;
		case 'c':
			printf("Insira a posição do elemento a ser removido: ");
			scanf("%d", &posRemov);
			for(indice = posRemov; indice < tamAtual; indice++){
				vetor[indice] = vetor[indice + 1];
			}
			tamAtual--;
			break;
		case 'd':
			printf("Insira o elemento a ser removido: ");
			scanf("%d", &elemRemov);
			for(indice = 0; indice < tamAtual; indice++){
				if(vetor[indice] == elemRemov){
					tamAtual--;
					for(indice2 = indice; indice2 < tamAtual; indice2++){
						vetor[indice2] = vetor[indice2 + 1];
					}
				}
			}
			break;
		case 'e':
			for(indice = 0; indice < tamAtual; indice++){
				for(indice2 = indice+1; indice2 < tamAtual; indice2++){
					if(vetor[indice2] == vetor[indice]){
						tamAtual--;
						for(dupl = indice2; dupl < tamAtual; dupl++){
							vetor[dupl] = vetor[dupl + 1];
						}
					}
				}
			}
			break;
	}
	printf("Novo array = [ ");
	for(indice = 0; indice < tamAtual; indice++){
		printf("%d ", vetor[indice]);
	}
	printf("]");
	return 0;
}
