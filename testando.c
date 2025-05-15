#include <stdio.h>

#define texto "Entrada e saida de dados."

void main(){
	// testando especificadores de formato
	printf("%s\n", texto);
	printf("\tTenho 22 anos e programo\n");
	printf("\aValor Inteiro: %i.\n", 12);
	printf("\vValor Real: %f.\n", 3.1415689);
	printf("Valor real com \"apenas\" 2 casas: %.2f.\n", 3.1415689);
	printf("Dados de texto: %c.\n", 'm');
	printf("Dado de texto: %s.\n", "Karine");
}
