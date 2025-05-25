#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int divisor, dividendo, resto;
	printf("Insira o dividendo e o divisor da operação: ");
	scanf("%d %d", &dividendo, &divisor);
	
	resto = dividendo;
	
	while(resto > dividendo % divisor){
		resto--;
	}
	printf("O resto da divisão é %d.", resto);
	
	return 0;
}
