#include <stdio.h>
#define TAM_STR 256

int main(){
	char hexadecimal[TAM_STR];
	int decimal[TAM_STR];
	int indice, tam, pos, num_decimal, base, cont;
	
	printf("Insira um numero em Hexadecimal: ");
	fgets(hexadecimal, TAM_STR, stdin);
	
	for(indice = 0; hexadecimal[indice] != '\0' && hexadecimal[indice] != '\n'; indice++){
		if(hexadecimal[indice] >= '0' && hexadecimal[indice] <= '9')
			decimal[indice] = hexadecimal[indice] - '0';
		if(hexadecimal[indice] >= 'A' && hexadecimal[indice] <= 'F')
			decimal[indice] = (hexadecimal[indice] - 'A') + 10;
		if(hexadecimal[indice] >= 'a' && hexadecimal[indice] <= 'f')
			decimal[indice] = (hexadecimal[indice] - 'a') + 10;
	}
	tam = indice;
	for(indice = tam - 1, cont= 0, num_decimal = 0; indice >= 0; indice--){
		base = 1;
		for(pos = 0; pos < cont; pos++)
			base *= 16;
		num_decimal += decimal[indice] * base;
		cont++;
	}
	printf("%d", num_decimal);
	return 0;
}
