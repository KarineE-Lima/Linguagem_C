#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float salario, desconto;
	printf("Insira o valor do  sal�rio do funcion�rio: ");
	scanf("%f", &salario);
	
	desconto = salario * 0.11;
	if (desconto > 334.29){
		desconto = 334.29;
	}
	printf("Desconto %.2f", desconto);
	
	return 0;
}
