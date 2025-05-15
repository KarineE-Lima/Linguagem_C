#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int numero, centena, dezena, unidade, numinvert;
	
	printf("Insira um número 000 a 999: ");
	scanf("%i", &numero);
	
	centena = numero / 100;
	dezena = (numero % 100)/10;
	unidade = (numero % 100)%10;
	
	numinvert = (unidade * 100) + (dezena * 10) + (centena);
	
	printf("%i", numinvert);
}
