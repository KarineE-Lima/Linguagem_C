#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

void main(){
	setlocale(LC_ALL, "Portuguese");
	float media;
	
	printf("Insira a sua m�dia: ");
	scanf("%f", &media);
	
	if(media >= 7.0){
		printf("Aprovado! Sua m�dia � %.1f!", media);
	} else if(media >= 4.0){
		printf("Voc� tem direito a segunda chance. Sua m�dia � %.1f.", media);
	} else {
		printf("Reprovado. Sua m�dia � %.1f.", media);
	}
	system("pause");
}
