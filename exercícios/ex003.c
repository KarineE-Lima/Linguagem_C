#include <stdio.h>
#include <locale.h>
#include <math.h>

void main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	float raio;
	float area;
	float perimetro;
	
	printf("Digite o valor do raio da circunfer�ncia: ");
	scanf("%f", &raio);
	
	area = M_PI * pow(raio, 2);
	perimetro = 2 * M_PI * raio;
	
	printf("A area da circunfer�ncia � %f e o seu perimetro � %f", area, perimetro);
	
}
