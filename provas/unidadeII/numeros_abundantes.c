#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int qtd_termos, numero, dobro, divisor, somadiv, indice;
	
	printf("Insira a quantidade de termos: ");
	scanf("%d", &qtd_termos);
	indice = 0;
	numero = 1;
	while(indice < qtd_termos){
		somadiv = 0;
		dobro = numero * 2;
		for(divisor = 1; divisor <= numero; divisor++)
			somadiv += (numero % divisor == 0) ? divisor : 0;
		if(somadiv > dobro){
			printf("%d ", numero);
			indice++;
		}
		numero++;
	} 
	
	
	return 0;
}
