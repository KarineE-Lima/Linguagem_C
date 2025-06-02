#include <stdio.h>

int main(){
	int qtdTermos, contador, mult;
	float fatorial;
	float euler = 1.0;
	
	printf("Insira a quantidade de termos: ");
	scanf("%d", &qtdTermos);
	for (contador = 1; contador <= qtdTermos; contador++){
		fatorial = 1.0;
		for (mult = 1; mult <= contador; mult++){
			fatorial *= mult;
		}
		euler +=  (1.0 / fatorial);
	}
	printf("%f", euler);

}
