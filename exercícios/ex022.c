#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int numero, modulo;
	
	printf("Digite um número: ");
	scanf("%d", &numero);
	
	if (numero < 0){
		modulo = -(numero);
	} else {
		modulo = numero;
	}
	
	printf("O módulo do número %d é %d", numero, modulo);
	return 0;
}
