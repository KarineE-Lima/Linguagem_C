#include <stdio.h>

int main(){
	int numero, total_de_1, bit1, bit2, bit3, bit4, bit5, bit6;
	
	printf("Digite um número de 0 a 32: ");
	scanf("%d", &numero);
	
	bit1 = numero % 2;
	numero /= 2;
	bit2 = numero % 2;
	numero /= 2;
	bit3 = numero % 2;
	numero /= 2;
	bit4 = numero % 2;
	numero /= 2;
	bit5 = numero % 2;
	numero /= 2;
	bit6 = numero % 2;
	
	total_de_1 = 0;
	total_de_1 = (bit1 == 1)? total_de_1 + 1 : total_de_1;
	total_de_1 = (bit2 == 1)? total_de_1 + 1 : total_de_1;
	total_de_1 = (bit3 == 1)? total_de_1 + 1 : total_de_1;
	total_de_1 = (bit4 == 1)? total_de_1 + 1 : total_de_1;
	total_de_1 = (bit5 == 1)? total_de_1 + 1 : total_de_1;
	total_de_1 = (bit6 == 1)? total_de_1 + 1 : total_de_1;
	printf("O total de bits igual a 1 é %d.", total_de_1);
	
	return 0;
}
