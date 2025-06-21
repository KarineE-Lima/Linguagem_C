#include <stdio.h>
#include <locale.h>
#define TAM_VET 20

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int exMersenne[TAM_VET];
	int nMersenne[TAM_VET];
	int numero, cont;
	int expoente = 2, indice = 0, divisor, divisoes;
	while(indice < TAM_VET){
		divisoes = 0;
		for(divisor = 1; divisor <= expoente; divisor++)
			divisoes += (expoente % divisor == 0)? 1 : 0;
		
		if(divisoes == 2){
			exMersenne[indice] = expoente;
			indice++;
		}
		expoente++;
	}
	
	for(indice = 0; indice < TAM_VET; indice++){
		numero = 2;
		for(cont = 1; cont < exMersenne[indice]; cont++){
			numero *= 2;
		}
		nMersenne[indice] = numero - 1;
	}
	
	for(indice = 0; indice < TAM_VET; indice++){
		printf("%d (2 ^ %d - 1)\n", nMersenne[indice], exMersenne[indice]);
	}
	
	return 0;
}
