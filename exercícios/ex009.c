#include <stdio.h>
#include <locale.h>

// calcular o volume da lata
int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float raio, altura, volume;
	
	
	printf("Informe o valor do raio da base da lata: ");
	scanf("%f", &raio);
	printf("Informe a altura da lata: ");
	scanf("%f", &altura);
	
	volume = (raio* raio) * 3.1418 * altura;
	
	printf("O volume da lata é %f.", volume);
	
}
