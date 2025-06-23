#include <stdio.h>
#include <locale.h>
#define TAM_MAX 100

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int sequencia[TAM_MAX];
	int numero, indice, qtdvet, parar;
	
	printf("Insira o primeiro número da sequencia: ");
	scanf("%d", &numero);
	
	for(indice = 0, parar = 0, qtdvet = 0; indice < TAM_MAX && parar == 0; indice++, qtdvet++){
		sequencia[indice] = numero;
		if(numero == 1)
			parar = 1;
		numero = (numero % 2 == 0) ? numero / 2 : (numero * 3) + 1;
	}
	printf("%d = [ ", qtdvet);
	for(indice = 0; indice < qtdvet; indice++)
		printf("%d ", sequencia[indice]);
	printf("]");
	
	return 0;
}
