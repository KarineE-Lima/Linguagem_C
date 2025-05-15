#include <stdio.h>
#include <locale.h>

// converter um número decimal para a base binária
int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int numdecimal, numbase, base, casa1, casa2, casa3, casa4, casa5, casa6;
	
	base = 2;
	printf("Insira o numero na base 10: ");
	scanf("%d", &numdecimal);
	
	casa1 = numdecimal % base;
	numdecimal /= base;
	casa2 = numdecimal % base;
	numdecimal /= base;
	casa3 = numdecimal % base;
	numdecimal /= base;
	casa4 = numdecimal % base;
	numdecimal /= base;
	casa5 = numdecimal % base;
	numdecimal /= base;
	casa6 = numdecimal % base;
	numbase = casa1 + casa2 * 10 + casa3 * 100 + casa4 * 1000 + casa5 * 10000 + casa6 * 100000;
	
	printf("O número informado em base binária é %06i.", numbase);
}
