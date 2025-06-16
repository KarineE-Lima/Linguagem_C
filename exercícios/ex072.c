#include <stdio.h>
#include <locale.h>
#define TAM_VET 10

int main(){
	setlocale(LC_ALL, "Portuguese");
	int valores[TAM_VET];
	int indice, inter, cont;
	int moda, repeticoes[TAM_VET], i, maior;
	float media = 0, mediana;
	for(indice = 0; indice < TAM_VET; indice++){
		printf("Insira o valor da posição %d do vetor: ", indice);
		scanf("%d", &valores[indice]);
	}
	// moda
	for(indice = 0; indice < TAM_VET; indice++){
		repeticoes[indice] = 0;
		moda = valores[indice];
		for(i = 0; i < TAM_VET; i++){
			repeticoes[indice] += (moda == valores[i])? 1 : 0;
		}
	}

	for(indice = 0, maior = repeticoes[0]; indice < TAM_VET; indice++){
		if (maior < repeticoes[indice]){
			moda = valores[indice];
			maior = repeticoes[indice];
		}
	}
	printf("Moda = %d\n", moda);
	
	//mediana
	for(indice = 0; indice < TAM_VET; indice++){
		for (cont = indice + 1; cont < TAM_VET; cont++){
			if(valores[indice] > valores[cont]){
				inter = valores[indice];
				valores[indice] = valores[cont];
				valores[cont] = inter;
			}
		}
	}
	if (TAM_VET % 2 == 0)
		mediana = (valores[TAM_VET/2] + valores[TAM_VET/2-1])/2.0;
	else 
		mediana = valores[TAM_VET/2];

	printf("Mediana = %.1f\n", mediana);
	//media	
	
	for(indice = 0; indice < TAM_VET; indice++){
		media += valores[indice];
	}
	media /= TAM_VET;
	printf("Media = %.1f", media);
}
