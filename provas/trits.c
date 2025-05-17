#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int trits, decimal, dig0, dig1, dig2, dig3;
	printf("Insira um número de até 4 trits: ");
	scanf("%i", &trits);
	
	dig3 = trits / 1000;
	dig2 = (trits % 1000) / 100;
	dig1 = (trits % 100) / 10;
	dig0 = trits % 10;
	
	if(dig3 == 1){
		dig3 = 0;
	} else if (dig3 == 0){
		dig3 = 0;
	} else {
		dig3 = 27;
	}
	
	if(dig2 == 1){
		dig2 = 0;
	} else if (dig2 == 0 && dig3 != 0){
		dig2 = -9;
	} else if (dig2 == 0 && dig3 == 0){
		dig2 = 0;
	} else {
		dig2 = 9;
	}
	
	if(dig1 == 1){
		dig1 = 0;
	} else if (dig1 == 0 && dig2 == 0 && dig3 == 0){
		dig1 = 0;
	} else if (dig1 == 0){
		dig1 = -3;
	}else {
		dig1 = 3;
	}
	
	if(dig0 == 1){
		dig0 = 0;
	} else if (dig0 == 0 && dig1 == 0 && dig2 == 0 && dig3 == 0){
		dig0 == 0;
	}
	else if (dig0 == 0){
		dig0 = -1;
	} else {
		dig0 = 1;
	}
	decimal = dig3 + dig2 + dig1 + dig0;
	printf("%d", decimal);
	
	return 0;
}
