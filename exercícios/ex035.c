#include <stdio.h>
#include <locale.h>

// ler n�mero de 1 a 7 e corresponder a um dia da semana

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int diadasemana;
	
	printf("Digite um n�mero de 1 a 7: ");
	scanf("%d", &diadasemana);
	
	switch(diadasemana){
		case 1:
			printf("Domingo");
			break;
		case 2:
			printf("Segunda-feira");
			break;
		case 3:
			printf("Ter�a-feira");
			break;
		case 4:
			printf("Quarta-feira");
			break;
		case 5:
			printf("Quinta-feira");
			break;
		case 6:
			printf("Sexta-feira");
			break;
		case 7:
			printf("S�bado");
			break;
		default:
			printf("ERRO! Digite um n�mero de 1 a 7!");
	}
	
	return 0;
}
