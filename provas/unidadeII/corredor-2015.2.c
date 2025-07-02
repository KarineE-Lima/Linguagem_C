#include <stdio.h>
#include <locale.h>
#define QTD_SALAS 10

int main(){
	setlocale(LC_ALL, "Portuguese");
	int salas[QTD_SALAS];
	int entrada, saida, indice, vidas, maiorvida;
	
	for(indice = 0; indice < QTD_SALAS; indice++){
		printf("Insira o ganho ou perda de vidas da sala %d: ", indice);
		scanf("%d", &salas[indice]);
	}
	maiorvida = -1;
	for(entrada = 0; entrada < QTD_SALAS; entrada++){
		for(saida = entrada; saida < QTD_SALAS; saida++){
			vidas = 0;
			for(indice = entrada; indice <= saida; indice++){
				vidas += salas[indice];
			}
			if(maiorvida < vidas)
				maiorvida = vidas;
		}
	}
	printf("O maior número de vidas que se pode acumular nesse corredor é %d", maiorvida);
	
	return 0;
}
