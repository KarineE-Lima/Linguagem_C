#include <stdio.h>
#include <locale.h>

// mostrar o maior n�mero entre 3 n�meros

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int num1, num2, num3, maior;
	printf("Digite 3 n�meros: ");
	scanf("%d %d %d", &num1, &num2, &num3);
	maior = num1;
	if (maior < num2){
		maior = num2;
		if (maior < num3){
			maior = num3;
		}
	} else if (maior < num3){
		maior = num3;
	}
	printf("O maior n�mero � %d", maior);
	
	return 0;
}
