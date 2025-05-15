#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float litros, desconto, valorfinal;
	char combustivel;
	printf("Insira o tipo de combustível(A-álcool, G-gasolina): ");
	scanf("%c", &combustivel);
	printf("Agora insira quantos litros você quer abastecer: ");
	scanf("%f", &litros);
	if (combustivel == 'A' || combustivel == 'a'){
		
		if (litros <= 25.00){
			desconto = 1.9 * 0.02;
		} else {
			desconto = 1.9 * 0.04;
		}
		
		valorfinal = litros * (1.9 - desconto);
		printf("O valor a ser pago é R$ %.2f", valorfinal);
		
	} else if (combustivel == 'G' || combustivel == 'g'){
		
		if (litros <= 25.00){
			desconto = 2.7 * 0.03;
		} else {
			desconto = 2.7 * 0.05;
		}
		
		valorfinal = litros * (2.7 - desconto);
		printf("O valor a ser pago é R$ %.2f", valorfinal);
		
	} else {
		printf("Insira um dado válido!");
	}
	
	return 0;
}
