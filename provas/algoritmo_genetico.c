#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int individuo_inicial, individuo_modificado, bit;
	int b0, b1, b2, b3, b4, b5;
	
	printf("Insira o individuo a ser modificado e o bit que quer modificar: ");
	scanf("%i %i", &individuo_inicial, &bit);
	
	b0 = (individuo_inicial % 2);
	individuo_inicial /= 2;
	b1 = (individuo_inicial % 2);
	individuo_inicial /= 2;
	b2 = (individuo_inicial % 2);
	individuo_inicial /= 2;
	b3 = (individuo_inicial % 2);
	individuo_inicial /= 2;
	b4 = (individuo_inicial % 2);
	individuo_inicial /= 2;
	b5 = (individuo_inicial % 2);
	
	switch(bit){
		case 0: b0 = (b0 == 0)? 1 : 0;
			break;
		case 1: b1 = (b1 == 0)? 1 : 0;
			break;
		case 2: b2 = (b2 == 0)? 1 : 0;
			break;
		case 3: b3 = (b3 == 0)? 1 : 0;
			break;
		case 4: b4 = (b4 == 0)? 1 : 0;
			break;
		case 5: b5 = (b5 == 0)? 1 : 0;
			break;
	}
	individuo_modificado = b5 * 32 + b4 * 16 + b3 * 8 + b2 * 4 + b1 * 2 + b0 * 1;
	printf("O novo inteiro gerado é %i", individuo_modificado);
	
	return 0;
}
