#include <stdio.h>
#include <locale.h>

void main(){
	setlocale(LC_ALL, "Portuguese");
	
	int num;
	int sucessor;
	int antecessor;
	
	printf("Digite um n�mero inteiro: ");
	scanf("%i", &num);
	
	sucessor = num + 1;
	antecessor = num - 1;
	printf("O sucessor do n�mero %i � %i. E o seu antecessor � %i.", num, sucessor, antecessor);
	
}
