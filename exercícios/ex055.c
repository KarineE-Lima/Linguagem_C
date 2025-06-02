#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int numero, divisor;
	int soma = 0;
	
	printf("Digite um número para descobrir se ele é perfeito: ");
	scanf("%d", &numero);
	
	for(divisor = 1; divisor < numero; divisor++){
		if (numero % divisor == 0)
			soma+= divisor;
		
	}
	if(numero == soma)
		printf("O número %d é perfeito.", numero);
	else 
		printf("O número %d NÃO é perfeito.", numero);
	
	return 0;
}
