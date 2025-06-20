#include <stdio.h>

int main(){
	int numero, paridade, novo_numero;
	int bit1, bit2, bit3, bit4, bit5;
	
	printf("Digite um número de 0 a 31: ");
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
	
	paridade = (bit1 + bit2 + bit3 + bit4 + bit5) % 2;
	novo_numero = bit5 * 32 + bit4 * 16 + bit3 * 8 + bit2 * 4 + bit1 * 2 + paridade;
	
	printf("O novo número gerado é %d", novo_numero);
	
	return 0;
}
