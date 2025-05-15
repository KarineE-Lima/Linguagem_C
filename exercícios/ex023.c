#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int numero;
	printf("Informe um número inteiro: ");
	scanf("%d", &numero);
	
	if (numero % 2 == 0){
		printf("O número %d é par.", numero);
	} else {
		printf("O número %d é impar.", numero);
	}
	
	return 0;
}
