#include <stdio.h>
#include <locale.h>

void main(){
	
	setlocale(LC_ALL, "Portuguese");
	float base;
	float primlado;
	float seglado;
	float perimetro;
	
	printf("Digite o tamanho da base do triangulo: ");
	scanf("%f", &base);
	printf("Digite o tamanho do primeiro lado do triangulo: ");
	scanf("%f", &primlado);
	printf("Digite o tamanho do segundo lado do triangulo: ");
	scanf("%f", &seglado);
	
	perimetro = base + primlado + seglado;
	
	printf("O perimetro do triangulo é %f", perimetro);
}
