#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int contador;
	
	for(contador = 1; contador <= 100; contador++){
		printf("Número %d\n", contador);
	}
	
	return 0;
}
