#include <stdio.h>
#include <locale.h>

void main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	char nome[50];
	float nota1;
	float nota2;
	float nota3;
	float media;
	
	printf("Informe o nome do aluno: ");
	scanf("%s", &nome);
	printf("Informe a 1� nota do aluno: ");
	scanf("%f", &nota1);
	printf("Informe a 2� nota do aluno: ");
	scanf("%f", &nota2);
	printf("Informe a 3� nota do aluno: ");
	scanf("%f", &nota3);
	
	media = (nota1 + nota2 + nota3) / 3;
	
	printf("O aluno %s obteve a m�dia %.2f", nome, media);
	
}
