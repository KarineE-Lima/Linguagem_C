#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int numero;
	printf("Informe um n�mero inteiro: ");
	scanf("%d", &numero);
	
	if (numero % 2 == 0){
		printf("O n�mero %d � par.", numero);
	} else {
		printf("O n�mero %d � impar.", numero);
	}
	
	return 0;
}
