#include <stdio.h>
#include <locale.h>
#define MAX 20

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int acm, numeroA, ktermo, numdecimal, cont;
	int termos[MAX], indice;
	printf("Insira um número na notação ACM: ");
	scanf("%d", &acm);
	
	numeroA = 1;
	for(ktermo = 0; ktermo < MAX && acm != 0; ktermo++){
		termos[ktermo] = acm % 10;
		acm /= 10;
	}
	for(indice = 0, cont = 1; cont <= ktermo; cont++, indice++){
		numeroA *= cont;
		termos[indice] *= numeroA;
	}
	numdecimal = 0;
	for(indice = 0; indice < ktermo; indice++)
		numdecimal += termos[indice];
	printf("%d", numdecimal);
	return 0;
}
