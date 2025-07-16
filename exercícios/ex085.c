#include <stdio.h>
#define TAM_STR 256

int main(){
	char algarismos[TAM_STR];
	int decimal[TAM_STR];
	int indice, tam_decimal, num_decimal;
	
	printf("Insira o número em algarismo romano: ");
	fgets(algarismos, TAM_STR, stdin);
	
	for(indice = 0; algarismos[indice] != '\0' && algarismos[indice] != '\n'; indice++){
		switch(algarismos[indice]){
			case 'I': decimal[indice] = 1;
				break;
			case 'V': decimal[indice] = 5;
				break;
			case 'X': decimal[indice] = 10;
				break;
			case 'L': decimal[indice] = 50;
				break;
			case 'C': decimal[indice] = 100;
				break;
			case 'D': decimal[indice] = 500;
				break;
			case 'M': decimal[indice] = 1000;
				break;
			default: decimal[indice] = 0;
				break;
		}
	}
	decimal[indice] = 0;
	tam_decimal = indice;
		
	for(indice = 0, num_decimal = 0; indice < tam_decimal; indice++){
		if(decimal[indice] < decimal[indice + 1])
			num_decimal -= decimal[indice];
		else
			num_decimal += decimal[indice];
	}
	printf("Numero decimal: %d\n", num_decimal);
	return 0;
}
