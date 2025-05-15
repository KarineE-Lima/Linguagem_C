#include <stdio.h>
#include <locale.h>

void main(){
	setlocale(LC_ALL, "Portuguese");
	
	float primBimestre, segBimestre, prova1, prova2, prova3, prova4, mediasem;
	printf("Digite a nota da 1ª prova do primeiro bimestre: ");
	scanf("%f", &prova1);
	printf("Digite a nota da 2ª prova do primeiro bimestre: ");
	scanf("%f", &prova2);
	printf("Digite a nota da 1ª prova do segundo bimestre: ");
	scanf("%f", &prova3);
	printf("Digite a nota da 2ª prova do segundo bimestre: ");
	scanf("%f", &prova4);
	
	primBimestre = prova1 + prova2;
	segBimestre = prova3 + prova4;
	mediasem = (primBimestre + segBimestre) /2;
	
	printf("A media do semestre é %f", mediasem);
	
}
