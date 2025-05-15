#include <stdio.h>
#include <locale.h>
// recebe o valor de x e y e determinar a qual quadrante ele pertence ou se est� em um dos eixos ou na origem
int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float x, y;
	
	printf("Digite o valor de x: ");
	scanf("%f", &x);
	printf("Digite o valor de y: ");
	scanf("%f", &y);
	
	if (x > 0 && y > 0){
		printf("O ponto pertence ao 1� quadrante.");
	} else if (x < 0 && y > 0){
		printf("O ponto pertence ao 2� quadrante.");
	} else if (x < 0 && y < 0){
		printf("O ponto pertence ao 3� quadrante.");
	} else if (x > 0 && y < 0){
		printf("O ponto pertence ao 4� quadrante.");
	} else if (x == 0 && y == 0){
		printf("O ponto est� na origem.");
	} else if (x == 0 && y != 0){
		printf("O ponto est� no eixo Y.");
	} else {
		printf("O ponto est� no eixo X.");
	}
	
	return 0;
}
