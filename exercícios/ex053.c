#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int numero, produto, divisor, contador;
	
	printf("Insira um número: ");
	scanf("%d", &numero);
	
	
	for(divisor = 1; divisor < (numero /3); divisor++){
		produto = divisor * (divisor + 1) * (divisor + 2);
		if(produto == numero){
			printf("O numero %d é triangular", numero);
			break;
		}
	}
	if(produto != numero){
		printf("O número %d não é triangular", numero);
	}
	
	return 0;
}
