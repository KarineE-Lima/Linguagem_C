#include <stdio.h>

int main(){
	int numero, centena, dezena, unidade, novo_numero, comb1, comb2;
	
	printf("Digite um número de 0 a 999: ");
	scanf("%d", &numero);
	
	centena = numero / 100;
	dezena = (numero % 100) / 10;
	unidade = numero % 10;
	if(centena % 5 == 0 && dezena % 5 == 0){
		comb1 = unidade * 100 + dezena *10 + centena;
		comb2 = unidade * 10 + centena * 100 + dezena;
		novo_numero = (comb1 > comb2)? comb1 : comb2;
	} else if (centena == 0 || centena == 5){
		novo_numero = centena;
		novo_numero += unidade * 100 + dezena * 10;
	} else if(dezena == 0 || dezena == 5){
		novo_numero = dezena;
		novo_numero += centena * 100 + unidade* 10;
	} else {
		novo_numero = -1;
	}
	printf("Saida : %d", novo_numero);
	return 0;
}
