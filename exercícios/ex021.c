#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int numero;
	printf("Insira um número: ");
	scanf("%d", &numero);
	
	if (numero > 0){
		printf("O número %d é positivo", numero);
	} else if (numero < 0){
		printf("O número %d é negativo", numero);
	} else {
		printf("O número informado é zero.");
	}
	
	return 0;
}
