#include <stdio.h>
#define TAM_VET 10

int main(){
	int sala[TAM_VET] = {50, 42, -35, 2, -60, 5, 30, -1, 40, 31};
	int indice, salaEntrada, salaSaida, maiorvida = -1, vidaAtual;
	
	for(salaEntrada = 0; salaEntrada < TAM_VET; salaEntrada++){
		for(salaSaida = salaEntrada; salaSaida < TAM_VET; salaSaida++){
			for(indice = salaEntrada, vidaAtual = 0; indice <= salaSaida; indice++){
				vidaAtual += sala[indice];
			}
		}
		if(vidaAtual > maiorvida)
			maiorvida = vidaAtual;

	}
	printf("%d", maiorvida);
	
	return 0;
}


