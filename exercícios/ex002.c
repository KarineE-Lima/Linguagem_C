#include <stdio.h>
#include <locale.h>
// calcular area e perimetro do quadrado
void main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	float lado;
	float area;
	float perimetro;
	
	printf("Informe o tamanho do lado do quadrado: ");
	scanf("%f", &lado);
	
	area = lado * lado;
	perimetro = 4 * lado;
	
	printf("A �rea do quadrado � %f e o perimetro do quadrado � %f.", area, perimetro);
	
}
