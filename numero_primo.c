#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int numprimo;
	
	printf("Digite um número inteiro positivo: ");
	scanf("%d", &numprimo);
	
	if(numprimo % numprimo == 0 && numprimo % 2 != 0 && numprimo % 3 != 0 && numprimo % 5 != 0 && numprimo % 7 != 0){
		printf("O número %d é primo", numprimo);
	} else {
		printf("O número %d não é primo.", numprimo);
	}
	
	return 0;
}
