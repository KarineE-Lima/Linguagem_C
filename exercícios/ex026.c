#include <stdio.h>
#include <locale.h>
// ler 3 valores e escrever a soma dos dois maiores
int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int num1, num2, num3, menor, soma;
	printf("Digite três números: ");
	scanf("%d %d %d", &num1, &num2, &num3);
	menor = num1;
	if(menor > num2){
		menor = num2;
		soma = num1 + num3;
		if (menor > num3){
		//	menor = num3;
			soma = num1 + num2;
		}
	} else if(menor > num3){
		//menor = num3;
		soma = num1 + num2;
	} else {
		soma = num2 + num3;
	}
	printf("A soma dos maiores números é %d", soma);
	
	return 0;
}
