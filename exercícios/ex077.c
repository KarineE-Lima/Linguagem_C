#include <stdio.h>
#include <locale.h>
#define TAM_STR 256

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	char string[TAM_STR];
	char caracter, maiusc, minusc;
	int cont, ocorrencia;
	
	printf("Insira uma string: ");
	fgets(string, TAM_STR, stdin);
	
	printf("Insira o caracter: ");
	scanf("%c", &caracter);
	if(caracter >= 'A' && caracter <= 'Z')
		maiusc = caracter + 32;
	if(caracter >= 'a' && caracter <= 'z')
		minusc = caracter - 32;
	
	for(cont = 0, ocorrencia = 0; string[cont]; cont++)
		ocorrencia += (string[cont] == caracter || string[cont] == maiusc || string[cont] == minusc)? 1 : 0;
	
	printf("O caractere %c aparece %d vezes na string: ", caracter, ocorrencia);
	puts(string);
	
	return 0;
}
