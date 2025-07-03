#include <stdio.h>
#include <locale.h>
#define MAX 200

int main(){
	setlocale(LC_ALL, "Portuguese");
	int numero, qtd_seq, indice, cont;
	int sequencia[MAX];
	int termos;
	printf("Insira o número inicial e a quantidade de sequêcias: ");
	scanf("%d %d", &numero, &qtd_seq);
	indice = 0;
	sequencia[0] = numero;
	while(indice < qtd_seq){
		termos = 0;
		for(cont = 0; sequencia[cont] != 0; cont++){
			termos+= (sequencia[cont] == sequencia[cont+1])? 2: 1;
			sequencia[cont+1] = sequencia[cont];
			sequencia[cont] = termos;
		}
		for(cont = 0; sequencia[cont] != 0; cont++)
			printf("%d ", sequencia);
		indice++;
	}
	
	
	return 0;
}
