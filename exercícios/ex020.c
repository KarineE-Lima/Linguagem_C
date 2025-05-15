#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float valorMercadoria, entrada, resto, parteDecimal;
	int prestacoes;
	
	printf("Qual o valor da mercadoria em R$? ");
	scanf("%f", &valorMercadoria);
	
	prestacoes = ((int)valorMercadoria / 30) * 10;
	resto = (int)valorMercadoria % 30;
	parteDecimal = valorMercadoria - floor(valorMercadoria);
	entrada = prestacoes + resto + parteDecimal;
	printf("O valor da compra deu R$ %.2f, a entrada vai ser de R$ %.2f e as duas prestações são de R$ %i,00", valorMercadoria, entrada, prestacoes);
}
