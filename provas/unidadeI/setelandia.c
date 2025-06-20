#include <stdio.h>

int main(){
	int numero_b10, digito_verificador, dig1, dig2, dig3, dig4;
	int novo_numero;
	
	printf("Insira um numero de 0 a 999: ");
	scanf("%d", &numero_b10);
	
	novo_numero = numero_b10;
	dig1 = numero_b10 % 7;
	numero_b10 /= 7;
	dig2 = numero_b10 % 7;
	numero_b10 /= 7;
	dig3 = numero_b10 % 7;
	numero_b10 /= 7;
	dig4 = numero_b10 % 7;
	
	digito_verificador = (dig1 + dig2 + dig3 + dig4) % 7;
	novo_numero = (novo_numero * 10) + digito_verificador;
	printf("O novo número gerado é %d", novo_numero);
	
	return 0;
}
