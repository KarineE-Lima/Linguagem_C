#include <stdio.h>
#include <locale.h>

void main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	float base;
	float altura;
	float area;
	float perimetro;
	
	printf("Informe o tamanho da base do ret�ngulo: ");
	scanf("%f", &base);
	printf("Informe a altura do ret�ngulo: ");
	scanf("%f", &altura);
	
	area = base * altura;
	perimetro = 2*(base + altura);
	
	printf("A area do ret�ngulo � %.2f e o seu perimetro � %.2f.", area, perimetro);
}
