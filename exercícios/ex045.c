#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float numero, media;
	float soma = 0;
	int contador = 1;
	
	while(contador <= 5){
		printf("Insira o %dº número: ", contador);
		scanf("%f", &numero);
		soma += numero;
		contador++;
	}
	media = soma / 5;
	printf("A média desses números é %f", media);
	
	return 0;
}
