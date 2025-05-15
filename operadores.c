#include <stdio.h>
#include <locale.h>

void main(){
	setlocale(LC_ALL, "Portuguese");
	int num1, num2, soma, sub, mult, divi;
	
	printf("Informe o primeiro valor inteiro: ");
	scanf("%i", &num1);
	printf("Informe o segundo valor inteiro: ");
	scanf("%i", &num2);
	
	soma = num1 + num2;
	sub = num1 - num2;
	mult = num1 * num2;
	divi = num1 / num2;
	
	printf("\n Soma: %i", soma);
	printf("\n Subtração: %i", sub);
	printf("\n Multiplicação: %i", mult);
	printf("\n Divisão: %i", divi);
}
