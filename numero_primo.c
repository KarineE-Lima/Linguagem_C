#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int numprimo;
	
	printf("Digite um n�mero inteiro positivo: ");
	scanf("%d", &numprimo);
	
	if(numprimo % numprimo == 0 && numprimo % 2 != 0 && numprimo % 3 != 0 && numprimo % 5 != 0 && numprimo % 7 != 0){
		printf("O n�mero %d � primo", numprimo);
	} else {
		printf("O n�mero %d n�o � primo.", numprimo);
	}
	
	return 0;
}
