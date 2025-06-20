#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int valorA, valorB, bitA1, bitA2, bitA3, bitB1, bitB2, bitB3;
	printf("Insira dois valores de 0 a 7: ");
	scanf("%d %d", &valorA, &valorB);
	
	bitA1 = valorA % 2;
	valorA /= 2;
	bitA2 = valorA % 2;
	valorA /= 2;
	bitA3 = valorA % 2;
	
	bitB1 = valorB % 2;
	valorB /= 2;
	bitB2 = valorB % 2;
	valorB /= 2;
	bitB3 = valorB % 2;
	
	if (bitA1 != bitB1 && bitA2 != bitB2 || bitA3 != bitB3){
		printf("Os numeros informados NÃO são POTENCIALMENTE sequenciais");
	} else if(bitA1 == bitB1 || bitA2 == bitB2 && bitA3 == bitB3){
		printf("Os numeros informados são POTENCIALMENTE sequenciais");
	} else {
		printf("Os números informados NÃO são POTENCIALMENTE sequenciais");
	}
	
	return 0;
}
