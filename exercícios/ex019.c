#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int valordeA, valordeB, raiz;
	
	printf("Insira o valor de A: ");
	scanf("%i", &valordeA);
	printf("Insira o valor de B: ");
	scanf("%i", &valordeB);
	
	raiz = -valordeB / valordeA;
	
	printf("A equa��o %iX + %i = 0, ter� o resultado: %i", valordeA, valordeB, raiz); 
}
