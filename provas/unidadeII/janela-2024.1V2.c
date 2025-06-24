#include <stdio.h>
#include <locale.h>
#define TAM_JAN 600
#define ABERTO 0
#define FECHADO 1

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int janela[TAM_JAN];
	int indice, pos[3];
	int tam[3], aberto, cont;
	
	for(indice = 0; indice < TAM_JAN; indice++)
		janela[indice] = ABERTO;
	
	for(indice = 0; indice < 3; indice++){
		printf("Insira a posição e o tamanho da folha F%d: ", indice+1);
		scanf("%d %d", &pos[indice], &tam[indice]);
	}
	for(indice = 0; indice < 3; indice++){
		for(cont = pos[indice]; cont < pos[indice] + tam[indice]; cont++)
			janela[cont] = FECHADO;
	}
	for(indice = 0, aberto = 0; indice < TAM_JAN; indice++){
		if(janela[indice] == ABERTO)
			aberto++;
	}
	aberto *= 100;
	printf("A area aberta da janela é de %d cm2", aberto);
	return 0;
}
