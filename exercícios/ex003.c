#include <stdio.h>
#include <locale.h>
#include <math.h>

void main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	float raio;
	float area;
	float perimetro;
	
	printf("Digite o valor do raio da circunferência: ");
	scanf("%f", &raio);
	
	area = M_PI * pow(raio, 2);
	perimetro = 2 * M_PI * raio;
	
	printf("A area da circunferência é %f e o seu perimetro é %f", area, perimetro);
	
}
