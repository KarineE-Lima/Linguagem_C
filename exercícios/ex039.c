#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int nAgencia, dig4, dig3, dig2, dig1, ultimodig;
	
	printf("Insira os quatro primeiros digitos da agencia: ");
	scanf("%d", &nAgencia);
	
	dig4 = nAgencia / 1000;
	dig3 = (nAgencia % 1000) / 100;
	dig2 = (nAgencia % 100) / 10;
	dig1 = nAgencia % 10;
	
	ultimodig = (dig4 * 5) + (dig3 * 4) + (dig2 * 3) + (dig1 * 2);
	ultimodig %= 11;
	ultimodig = 11 - ultimodig;
	if (ultimodig == 10){
		printf("Nº agencia: %d-X", nAgencia);
	} else {
		printf("Nº agencia: %d-%i", nAgencia, ultimodig);
	}
	return 0;
}
