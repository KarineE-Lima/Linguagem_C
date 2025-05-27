#include <stdio.h>
#include <locale.h>
// Escreva um programa que determine se um dado número N (digitado pelo usuário) é primo ou não. 
int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int numero, divisor;
	int divisoes = 0;
	
	printf("Digite um número: ");
	scanf("%d", &numero);
	
	for (divisor = 1; divisor <= numero; divisor++){
		divisoes += (numero % divisor == 0)? 1 : 0;
	}
	if (divisoes == 2)
		printf("O número %d é primo.\n", numero);
	else 
		printf("O número %d NÃO é primo.", numero);
	
	return 0;
}
