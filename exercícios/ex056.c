#include <stdio.h>

int main(){
	int Ntermos;
	float termo, expoente, num, potencia;
	float somatorio = 1.0;
	
	printf("Insira a quantidade de termos do somatorio: ");
	scanf("%d", &Ntermos);
	
	for (termo = 2.0; termo <= Ntermos; termo++){
		potencia = termo;
		num = termo;
		for(expoente = 1.0; expoente < termo; expoente++){
			num *= potencia;
		}
		somatorio += 1.0 / num;
	}
	
	printf("%f", somatorio);
	return 0;
}
