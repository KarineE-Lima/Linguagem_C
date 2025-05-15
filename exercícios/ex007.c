#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int idadeDias;
	int anos;
	int meses;
	int dias;
	
	printf("Informe a sua idade em dias: ");
	scanf("%i", &idadeDias);
	
	anos = idadeDias / 365;
	meses = (idadeDias % 365) / 30;
	dias = (idadeDias % 365) % 30;
	printf("Você tem %i ano(s), %i mês(es) e %i dia(s).", anos, meses, dias);
	
	system("pause");
}
