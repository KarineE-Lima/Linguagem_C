#include <stdio.h>
#include <locale.h>
#define TAM_MAX 100

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int sequencia[TAM_MAX];
	int numero, dezena, unidade;
	int tamAtual, indice, ciclo, cont;
	printf("Insira um número menor que 100: ");
	scanf("%d", &numero);
	
	for(indice = 0, ciclo = 0; indice < TAM_MAX && ciclo == 0; indice++){
		sequencia[indice] = numero;
		dezena = numero / 10;
		unidade = numero % 10;
		numero = (dezena * dezena) + (unidade * unidade);
		numero = (numero >= 100)? numero / 2 : numero;
		
		for(cont = 0; cont < indice; cont++){
			if(numero == sequencia[cont])
				ciclo = 1;
		}
	}
	tamAtual = indice;
	printf("Sequecia gerada = [ ");
	for(indice = 0; indice < tamAtual; indice++)
		printf("%d ", sequencia[indice]);
	printf("]");
	
	return 0;
}
