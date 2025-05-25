#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int contador = 1;
	
	while(contador <= 100){
		printf("Número %d\n", contador);
		contador++;
	}
	
	return 0;
}
