#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int maximo, expressao, saida;
	int operando1, operando2, operador;
	printf("Insira o maior número que o computador pode representar e a expressão a ser interpretada: ");
	scanf("%d %d", &maximo, &expressao);
	
	operando2 = expressao % 1000;
	operador = (expressao % 10000) / 1000;
	operando1 = expressao / 10000;
	
	switch (operador){
		case 1: saida = operando1 + operando2;
			break;
		case 2: saida = operando1 - operando2;
			break;
		case 3: saida = operando1 * operando2;
			break;
		case 4: saida = operando1 / operando2;
			break;
	}
	if(saida > maximo){
		printf("Overflow");
	} else {
		printf("O resultado é %d", saida);
	}
	
	return 0;
}
