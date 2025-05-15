#include <stdio.h>
#include <locale.h>

void main(){
	setlocale(LC_ALL, "Portuguese");
	
	int dia;
	printf("Insira um número de 1 a 7: ");
	scanf("%i", &dia);
	
	switch(dia){
		case 1:
			printf("Domingo");
			break;
		case 2:
			printf("Segunda-feira");
			break;
		case 3:
			printf("Terça-feira");
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
			printf("Sábado");
			break;
		default:
			printf("Digite um valor válido!");
			break;
	}
}
