#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int tipo;
	float area, valorpago, desconto5, desconto10;
	
	printf("TIPOS DE PULVERIZAÇÃO:\n");
	printf("Tipo 1 – ervas daninhas R$ 50,00 por acre; \nTipo 2 – gafanhotos R$ 100,00 por acre; \nTipo 3 – broca R$ 150,00 por acre; \nTipo 4 – todos acima R$ 250,00 por acre.");
	printf("\nInsira o tipo de pulverização que você quer: ");
	scanf("%d", &tipo);
	printf("Insira a area em acres a ser pulverizada: ");
	scanf("%f", &area);
	
	switch(tipo){
		case 1: valorpago = area * 50.0;
			break;
		case 2: valorpago = area * 100;
			break;
		case 3: valorpago = area * 150;
			break;
		case 4: valorpago = area * 250;
			break;
		default: printf("Insira um tipo válido!");
	}
	
	if (area >= 1000.0){
		desconto5 = valorpago * 0.05;
		valorpago -= desconto5;
	}
	if (valorpago > 750.0){
		desconto10 = valorpago * 0.1;
		valorpago -= desconto10;
	}
	printf("O valor a ser pago é R$%.2f", valorpago);
}
