#include <stdio.h>
int main(){
	int num = 10;
	printf("\nInicial: %i", num);
	num++;
	printf("\nIncremento: %i", num);
	num--;
	printf("\nDecremento: %i", num);
	num += 3;
	printf("\nIncremento generico: %i", num);
	num -= 3;
	printf("\nDecremento generico: %i", num);
	num *= 2;
	printf("\nAtribuicao com mult.: %i", num);
	num /= 2;
	printf("\nAtribuicao com div.: %i", num);
}
