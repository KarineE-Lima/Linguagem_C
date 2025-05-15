#include <stdio.h>
#include <locale.h>

void main(){
	setlocale(LC_ALL, "Portuguese");
	
	int num;
	int sucessor;
	int antecessor;
	
	printf("Digite um número inteiro: ");
	scanf("%i", &num);
	
	sucessor = num + 1;
	antecessor = num - 1;
	printf("O sucessor do número %i é %i. E o seu antecessor é %i.", num, sucessor, antecessor);
	
}
