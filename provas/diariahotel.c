#include <stdio.h>
#include <locale.h>
// calcular o valor total da hospedagem (com aumento a cada dia ate o dia 16) 
int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float diaria, aumento, total, diaEntrada, dias;
	
	printf("Insira o valor da diária: ");
	scanf("%f", &diaria);
	printf("Insira a dia da entrada: ");
	scanf("%f", &diaEntrada);
	printf("Insira o valor do aumento diário: ");
	scanf("%f", &aumento);
	
	if (diaEntrada <= 15.0){ // se o dia for antes de 16, o valor vai aumentando
		aumento *= (diaEntrada - 1.0);
	} else {
		aumento *= 14.0;
	}
	dias = 32.0 - diaEntrada;
	total = dias * (diaria + aumento);
	printf("O valor total a pagar será R$ %.2f.", total);
	
	return 0;
}
