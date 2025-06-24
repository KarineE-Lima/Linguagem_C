#include <stdio.h>
#include <locale.h>
#define TAM_VET 10

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int digitos[TAM_VET];
	int indice, inicio, fim, dig1, dig2, dig3, dig4;
	int cont;
	
	printf("Insira o valor de A e o valor de B: ");
	scanf("%d %d", &inicio, &fim);
	
	for(indice = 0; indice < TAM_VET; indice++)
		digitos[indice] = 0;
	for(indice = 0; indice < TAM_VET; indice++){
		for(cont = inicio; cont <= fim; cont++){
			if(cont == 1000){
				dig1 = cont % 10;
				dig2 = (cont % 100) / 10;
				dig3 = (cont % 1000) / 100;
				dig4 = cont / 1000;
				digitos[indice] += (dig1 == indice)? 1 : 0;
				digitos[indice] += (dig2 == indice)? 1 : 0;
				digitos[indice] += (dig3 == indice)? 1 : 0;
				digitos[indice] += (dig4 == indice)? 1 : 0;
			} else if (cont >= 100){
				dig1 = cont % 10;
				dig2 = (cont % 100) / 10;
				dig3 = cont / 100;
				digitos[indice] += (dig1 == indice)? 1 : 0;
				digitos[indice] += (dig2 == indice)? 1 : 0;
				digitos[indice] += (dig3 == indice)? 1 : 0;
			} else if(cont >= 10){
				dig1 = cont % 10;
				dig2 = cont / 10;
				digitos[indice] += (dig1 == indice)? 1 : 0;
				digitos[indice] += (dig2 == indice)? 1 : 0;
			} else{
				digitos[indice] += (cont == indice)? 1 : 0;
			}
		}
	}
	for(indice = 0; indice < TAM_VET; indice++)
		printf("%d ", digitos[indice]);
	
	return 0;
}
