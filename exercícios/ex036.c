#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float notaex1, notaex2, notaex3, notaex4, notaex5;
	printf("Insira a nota do 1� Exame: ");
	scanf("%f", &notaex1);
	printf("Insira a nota do 2� Exame: ");
	scanf("%f", &notaex2);
	printf("Insira a nota do 3� Exame: ");
	scanf("%f", &notaex3);
	printf("Insira a nota do 4� Exame: ");
	scanf("%f", &notaex4);
	printf("Insira a nota do 5� Exame: ");
	scanf("%f", &notaex5);
	
	if (notaex1 >= 70 && notaex2 >= 70 && notaex3 >= 70 && notaex4 >= 70 && notaex5 >= 70){
		printf("Sua classifica��o � A.");
	} else if(notaex1 >= 70 && notaex2 >= 70 && notaex4 >= 70 || notaex3 < 70 || notaex5 < 70){
		printf("Sua classifica��o � B.");
	} else if(notaex1 >= 70 && notaex2 >= 70 && notaex3 >= 70 || notaex4 >= 70 && notaex5 < 70){
		printf("Sua classifica��o � C.");
	} else {
		printf("REPROVADO!");
	}
	
	return 0;
}
