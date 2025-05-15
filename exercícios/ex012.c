#include <stdio.h>
#include <locale.h>

void main(){
	setlocale(LC_ALL, "Portuguese");
	float velM, velKM;
	
	printf("Forneça a velocidade em m/s: ");
	scanf("%f", &velM);
	
	velKM = velM * 3.6;
	
	printf("A velocidade %f m/s equivale a %f Km/h.", velM, velKM);
}
