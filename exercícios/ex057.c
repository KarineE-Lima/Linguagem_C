#include <stdio.h>

int main(){
	int expoente, Ntermos, contador, numero, potencia;
	int termo = 3;
	float somatorio = 1.0;
	
	printf("Insira o numero de termos: ");
	scanf("%d", &Ntermos);
	
	for(contador = 1; contador <= Ntermos; contador++){
		numero = termo;
		potencia = termo;
		for (expoente = 1; expoente < 3; expoente++){
			numero *= potencia;
		}
		somatorio += (contador % 2 == 0)? (1.0/ numero) : -(1.0/numero);
		termo += 2;
	}
	printf("Somatorio %f", somatorio);
	return 0;
}
