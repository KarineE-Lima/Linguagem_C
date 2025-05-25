#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int numero = 100;
	while (numero >= 1){
		printf("%d\n", numero);
		numero--;
	}
	
	return 0;
}
