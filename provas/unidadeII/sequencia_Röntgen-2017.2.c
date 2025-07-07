#include <stdio.h>
#include <locale.h>
#define MAX 200

int main(){
	setlocale(LC_ALL, "Portuguese");
	int qtd_seq, tamanho_orig, novo_tamanho, indice, cont, ocorrencia, atual;
	int sequencia[MAX];
	int nova_sequencia[MAX];
	
	printf("Insira a quantidade de sequências: ");
	scanf("%d", &qtd_seq);
	
	printf("Insira o tamanho da 1ª sequência: ");
	scanf("%d", &tamanho_orig);
	
	for(indice = 0; indice < tamanho_orig; indice++){
		printf("Insira %dº valor da sequência: ", indice + 1);
		scanf("%d", &sequencia[indice]);
	}
	for(cont = 0; cont < qtd_seq; cont++){
		for(indice = 0; indice < tamanho_orig; indice++)
			printf("%d ", sequencia[indice]);
		for(indice = 0, novo_tamanho = 0; indice < tamanho_orig; indice++){
			atual = sequencia[indice];
			ocorrencia = 0;
			while(atual == sequencia[indice] && indice < tamanho_orig){
				if(atual == sequencia[indice]){
					ocorrencia++;
					indice++;
				}
			}
			indice--;
			nova_sequencia[novo_tamanho++] = ocorrencia;
			nova_sequencia[novo_tamanho++] = atual;
		}
		printf("\n");
		for(indice = 0; indice < novo_tamanho; indice++)
			sequencia[indice] = nova_sequencia[indice];
		tamanho_orig = novo_tamanho;
	}
	
	
	return 0;
}
