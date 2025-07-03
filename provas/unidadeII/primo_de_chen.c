#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int numero, proxnum, divisor, divisoes, indice, tam;
	int div, primo1, primo2, cont;
	int divisores[200];
	printf("Insira um número: ");
	scanf("%d", &numero);
	for(divisor = 1, divisoes = 0; divisor <= numero; divisor++)
		divisoes += (numero % divisor == 0)? 1 : 0;
	
	if(divisoes == 2){
		proxnum = numero + 2;
		divisoes = 0;
		for(divisor = 1, indice = 0; divisor <= proxnum; divisor++){
			if(proxnum % divisor == 0){
				divisoes++;
				divisores[indice] = divisor;
				indice++;
			}
		}
		tam = indice;	
		if(divisoes == 2){
			printf("O numero %d é um numero primo de chen", numero);
		} else{
			for(indice = 1; indice < tam-1; indice++){
				for(cont = indice; cont < tam-1; cont++){
					if(divisores[indice] * divisores[cont] == proxnum){
						for(div = 1, primo1 = 0; div <= divisores[indice]; div++)
							primo1 +=(divisores[indice] % div == 0)? 1 : 0;
						for(div = 1, primo2 = 0; div <= divisores[indice]; div++)
							primo2 +=(divisores[indice] % div == 0)? 1 : 0;
						if(primo1 == 2 && primo2 == 2)
							printf("O número %d é um numero primo de chen.", numero);
						else
							printf("O número %d NAO é um numero primo de chen.", numero);
					}
				}
			}
		}
	} else{
		printf("O número %d NAO é um numero primo de chen. Ele não é nem primo", numero);
	}
	return 0;
}
