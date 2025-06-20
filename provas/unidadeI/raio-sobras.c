#include <stdio.h>

int main(){
	float raio, area_circulo, area_quadrado, area_sombreada;
	
	printf("Insira o valor do raio: ");
	scanf("%f", &raio);
	
	area_circulo = 3.14 * (raio*raio);
	area_quadrado = (2.0*raio) * (2.0*raio);
	area_sombreada = area_quadrado - area_circulo;
	
	printf("O valor da area sombreada eh %f", area_sombreada);
	
	return 0;
}
