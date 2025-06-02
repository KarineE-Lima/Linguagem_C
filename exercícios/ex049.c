#include <stdio.h>
#include <locale.h>
/* um programa que leia um valor e imprima todas as possíveis combinações em 
que o lançamento de um par de dados tenha como resultado da soma dos valores dos 
dados o número lido. */
int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int numero, operando1, operando2;
	
	printf("Insira um número: ");
	scanf("%d", &numero);
	operando1 = 1;
	operando2 = numero - 1;
	
	while (operando1 < numero){
		printf("%d %d\n", operando1, operando2);
		operando1++;
		operando2--;
	}	
	
	return 0;
}
