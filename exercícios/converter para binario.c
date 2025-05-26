#include <stdio.h>
#include <math.h>

int main(){
	int numero, digito;
	int contador = 0;
	int binario = 0;
	
	printf("Insira um número para converter para binário: ");
	scanf("%d", &numero);
	
	do {
		digito = numero % 2;
		numero /= 2;
		binario += digito * pow(10, contador);
		contador++;
	} while (numero >= 1);
	
	printf("%i", binario);
	return 0;
}
