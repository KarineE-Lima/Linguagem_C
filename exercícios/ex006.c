#include <stdio.h>
#include <locale.h>

void main(){
	setlocale(LC_ALL, "Portuguese");
	
	int dividendo;
	int divisor;
	int quociente;
	int resto;
	
	printf("--- DIVIDINDO NÚMEROS ---");
	printf("\nInsira o dividendo: ");
	scanf("%i", &dividendo);
	printf("Insira o divisor: ");
	scanf("%i", &divisor);
	
	quociente = dividendo / divisor;
	resto = dividendo % divisor;
	printf("O número %i dividido por %i tem quociente %i e o seu resto é %i.", dividendo, divisor, quociente, resto);
}
