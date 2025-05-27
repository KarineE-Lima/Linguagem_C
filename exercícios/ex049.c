#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int numero, operando1, operando2;
	
	printf("Insira um número: ");
	scanf("%d", &numero);
	operando1 = 1;
	operando2 = numero - 1;
	
	while (operando1 < numero){
		printf("%d %d\n", operando1, operando2);
		operando1++;
		operando2--;
	}	
	
	return 0;
}
