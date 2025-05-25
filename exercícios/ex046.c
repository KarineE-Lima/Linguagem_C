#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int divisor, dividendo, quociente;
	
	printf("Insira o dividendo e o divisor: ");
	scanf("%d %d", &dividendo, &divisor);
	
	quociente = dividendo;
	
	while(quociente > (dividendo / divisor)){
		quociente--;
	}
	printf("O quociente da divisão é %d", quociente);
	return 0;
}
