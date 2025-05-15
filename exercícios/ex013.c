#include <stdio.h>
#include <locale.h>
// calcular a resistecia em paralelo de R1 e R2 e em sequencia de R3
int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float r1, r2, r3, reqParalelo, reqSequencia;
	
	printf("Insira a Resistencia R1 em Ohms: ");
	scanf("%f", &r1);
	printf("Insira a Resistencia R2 em Ohms: ");
	scanf("%f", &r2);
	printf("Insira a Resistencia R3 em Ohms: ");
	scanf("%f", &r3);
	
	reqParalelo = 1/(1.0/r1 + 1.0/r2);
	reqSequencia = reqParalelo + r3;
	
	printf("A resistência equivalente do circuito é de %.2f Ohms", reqSequencia);
	
}
