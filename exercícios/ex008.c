#include <stdio.h>
#include <locale.h>

// converter fahrenheit para celsius
void main(){
	setlocale(LC_ALL, "Portuguese");
	
	float fahrenheit;
	float celsius;
	
	printf("Informe a temperatura em Fahrenheit: ");
	scanf("%f", &fahrenheit);
	
	celsius = 5.0/9.0 *(fahrenheit - 32.00);
	
	printf("A temperatura %f °F equivale a %f °C.", fahrenheit ,celsius);
}
