#include <stdio.h>
#include <locale.h>
#define DIAS 30

int main(){
	setlocale(LC_ALL, "Portuguese");
	int dia, maiorchuva, menorchuva, diaMaior, diaMenor;
	float indice_jun[DIAS], mediaQ1 = 0, mediaQ2 = 0;
	int diaatual;
	
	for(dia = 0; dia < DIAS; dia++){
		printf("Insira o indice pluviometrico do dia %02d/jun: ", dia+1);
		scanf("%f", &indice_jun[dia]);
	}
	maiorchuva = indice_jun[0];
	menorchuva = indice_jun[0];
	diaMaior = 1;
	diaMenor = 1;
	for(dia = 0; dia < DIAS; dia++){
		diaatual = indice_jun[dia];
		if(diaatual > maiorchuva)
			diaMaior = dia+1;
			maiorchuva = diaatual;
		if(diaatual < menorchuva)
			diaMenor = dia+1;
			menorchuva = diaatual;
		if(dia < 15)
			mediaQ1 += indice_jun[dia];
		if(dia >= 15)
			mediaQ2 += indice_jun[dia];
	}
	mediaQ1 /= 15;
	mediaQ2 /= 15;
	printf("O dia que mais choveu foi %02d/jun.\n", diaMaior);
	printf("O dia que menos choveu foi %02d/jun.\n", diaMenor);
	printf("A media pluviometrica da primeira quinzena de julho foi %.2f mm\n", mediaQ1);
	printf("A media pluviometrica da segunda quinzena de julho foi %.2f mm\n", mediaQ2);
	return 0;
}
