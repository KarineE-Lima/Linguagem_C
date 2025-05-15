#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

void main(){
	setlocale(LC_ALL, "Portuguese");
	float media;
	
	printf("Insira a sua média: ");
	scanf("%f", &media);
	
	if(media >= 7.0){
		printf("Aprovado! Sua média é %.1f!", media);
	} else if(media >= 4.0){
		printf("Você tem direito a segunda chance. Sua média é %.1f.", media);
	} else {
		printf("Reprovado. Sua média é %.1f.", media);
	}
	system("pause");
}
