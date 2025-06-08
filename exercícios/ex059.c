#include <stdio.h>

int main(){
	int divisor, divisoes, primo1, primo2, numpar;
	int div2, mult, busca;
	for (numpar = 500; numpar <= 1000; numpar += 2){
		for(primo1 = 2, busca = 1; primo1 <= numpar && busca == 1; primo1++){
			divisoes = 0;
			for(divisor = 1; divisor <= primo1; divisor++){
				divisoes += (primo1 % divisor == 0)? 1 : 0;
			}
			if(divisoes == 2){
				primo2 = numpar - primo1;
				div2 = 0;
				for(mult = 1; mult <= primo2; mult++){
					div2 += (primo2 % mult == 0)? 1 : 0;
				}
				if (div2 == 2){
					printf("%d = %d + %d\n", numpar, primo1, primo2);
					busca = 0;
				}
			}
		}
	}
	
	
	return 0;
}
