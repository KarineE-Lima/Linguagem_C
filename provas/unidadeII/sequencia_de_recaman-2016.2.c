#include <stdio.h>
#define TAM 20

int main(){
	int sequencia[TAM];
	int indice, cont;
	sequencia[0] = 0;
	for(indice = 1; indice < TAM; indice++){
		sequencia[indice] = sequencia[indice-1] - indice;
		if(sequencia[indice] < 0)
			sequencia[indice] = sequencia[indice-1] + indice;
		for(cont = 0; cont < indice; cont++)
			if(sequencia[indice] == sequencia[cont])
				sequencia[indice] = sequencia[indice-1] + indice;
	}
	for(indice = 0; indice < TAM; indice++)
		printf("%d ", sequencia[indice]);
	return 0;
}
