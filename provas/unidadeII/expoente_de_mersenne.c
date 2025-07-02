#include <stdio.h>
#include <locale.h>
#define QTD_EXP 20

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int expoente = 1, numero, indice = 0, contador, divisor, divisoes;
	int pridig, segdig;
	
	while(indice < QTD_EXP){
		numero = 2;
		for(contador = 1; contador < expoente; contador++)
			numero *= 2;
		numero -= 1;
		divisoes = 0;
		for(divisor = 1; divisor <= numero; divisor++)
			divisoes += (numero % divisor == 0) ? 1 : 0;
		if(divisoes == 2){
			if (numero > 524287) {
				pridig = numero / 1000;
				segdig = numero % 1000;
				printf("%d = %d%d\n", expoente, pridig, segdig);
			} else {
				printf("%d = %d\n", expoente, numero);
			}
			indice++;
		}
		expoente++;
	}
	return 0;
}
