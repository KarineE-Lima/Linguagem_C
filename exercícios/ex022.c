#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int numero, modulo;
	
	printf("Digite um n�mero: ");
	scanf("%d", &numero);
	
	if (numero < 0){
		modulo = -(numero);
	} else {
		modulo = numero;
	}
	
	printf("O m�dulo do n�mero %d � %d", numero, modulo);
	return 0;
}
