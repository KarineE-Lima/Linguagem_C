#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float notaex1, notaex2, notaex3, notaex4, notaex5;
	printf("Insira a nota do 1º Exame: ");
	scanf("%f", &notaex1);
	printf("Insira a nota do 2º Exame: ");
	scanf("%f", &notaex2);
	printf("Insira a nota do 3º Exame: ");
	scanf("%f", &notaex3);
	printf("Insira a nota do 4º Exame: ");
	scanf("%f", &notaex4);
	printf("Insira a nota do 5º Exame: ");
	scanf("%f", &notaex5);
	
	if (notaex1 >= 70 && notaex2 >= 70 && notaex3 >= 70 && notaex4 >= 70 && notaex5 >= 70){
		printf("Sua classificação é A.");
	} else if(notaex1 >= 70 && notaex2 >= 70 && notaex4 >= 70 || notaex3 < 70 || notaex5 < 70){
		printf("Sua classificação é B.");
	} else if(notaex1 >= 70 && notaex2 >= 70 && notaex3 >= 70 || notaex4 >= 70 && notaex5 < 70){
		printf("Sua classificação é C.");
	} else {
		printf("REPROVADO!");
	}
	
	return 0;
}
