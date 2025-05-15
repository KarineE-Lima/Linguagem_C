#include <stdio.h>
#include <locale.h>
// programa que faça a distribuição ótima de notas de dinheiro
int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int quantia, nota100, nota50, nota20, nota10, nota5, nota2, nota1;
	
	printf("Digite o valor inteiro que você quer sacar: ");
	scanf("%i", &quantia);
	
	nota100 = quantia / 100;
	nota50 = (quantia % 100) / 50;
	nota20 = ((quantia % 100) % 50) / 20;
	nota10 = (((quantia % 100) % 50) %20) / 10;
	nota5 = ((((quantia % 100) % 50) %20) % 10) / 5;
	nota2 = (((((quantia % 100) % 50) %20) % 10) % 5) / 2;
	nota1 = (((((quantia % 100) % 50) %20) % 10) % 5) % 2;
	
	printf("Quantidade de notas recebidas: \n");
	printf("De R$100,00: %i\n", nota100);
	printf("De R$50,00: %i\n", nota50);
	printf("De R$20,00: %i\n", nota20);
	printf("De R$10,00: %i\n", nota10);
	printf("De R$5,00: %i\n", nota5);
	printf("De R$2,00: %i\n", nota2);
	printf("De R$1,00: %i\n", nota1);

}
