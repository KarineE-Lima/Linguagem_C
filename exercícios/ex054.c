#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int primNumero, segNumero, divisor;
	int soma = 0;
	
	printf("Insira dois números para verificar se são amigos: ");
	scanf("%d %d", &primNumero, &segNumero);
	
	for(divisor = 1; divisor < primNumero; divisor++){
		if(primNumero % divisor == 0)
			soma += divisor;
	}
	if(soma == segNumero){
		printf("O número %d e o número %d são amigos.", primNumero, segNumero);
	} else {
		printf("O número %d e o número %d NÃO são amigos.", primNumero, segNumero);
	}
	return 0;
}
