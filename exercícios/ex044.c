#include <stdio.h>

int main(){
	int numero = 1;
	int soma = 0;
	
	while (numero <= 100){
		printf("%d\n", numero);
		soma += numero;
		numero++;
	}
	printf("Soma: %d", soma);
	return 0;
}
