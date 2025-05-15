#include <stdio.h>
#include <locale.h>

// a partir do número do mês dizer quantos dias ele tem

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int mes;
	printf("Insira o número do mês que você quer saber: ");
	scanf("%d", &mes);
	
	if (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12){
		printf("O mês inserido tem 31 dias.");
	} else if (mes == 2){
		printf("O mês inserido tem 28 dias.");
	} else if (mes == 4 || mes == 6 || mes == 9 || mes == 11){
		printf("O mês inserido tem 30 dias.");
	} else {
		printf("Digite um valor válido!");
	}

	return 0;
}
