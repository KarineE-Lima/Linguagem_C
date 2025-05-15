#include <stdio.h>
#include <locale.h>

// mostrar o maior número entre 3 números

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int num1, num2, num3, maior;
	printf("Digite 3 números: ");
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
	printf("O maior número é %d", maior);
	
	return 0;
}
