#include <stdio.h>
#include <locale.h>

// a partir do n�mero do m�s dizer quantos dias ele tem

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int mes;
	printf("Insira o n�mero do m�s que voc� quer saber: ");
	scanf("%d", &mes);
	
	if (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12){
		printf("O m�s inserido tem 31 dias.");
	} else if (mes == 2){
		printf("O m�s inserido tem 28 dias.");
	} else if (mes == 4 || mes == 6 || mes == 9 || mes == 11){
		printf("O m�s inserido tem 30 dias.");
	} else {
		printf("Digite um valor v�lido!");
	}

	return 0;
}
