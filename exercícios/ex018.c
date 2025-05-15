#include <stdio.h>
#include <locale.h>

// permutar o valor de duas variáveis

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int numA, numB, aux;
	
	printf("Insira o primeiro valor: ");
	scanf("%i", &numA);
	printf("Insira o segundo valor: ");
	scanf("%i", &numB);
	
	printf("Valor de A antes da troca: %i \nValor de B antes da troca: %i", numA, numB);
	
	aux = numA;
	numA = numB;
	numB = aux;
	
	printf("\nValor de A depois da troca: %i \nValor de B depois da troca: %i", numA, numB);
}
