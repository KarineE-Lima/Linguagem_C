#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int numero;
	printf("Insira um n�mero: ");
	scanf("%d", &numero);
	
	if (numero > 0){
		printf("O n�mero %d � positivo", numero);
	} else if (numero < 0){
		printf("O n�mero %d � negativo", numero);
	} else {
		printf("O n�mero informado � zero.");
	}
	
	return 0;
}
