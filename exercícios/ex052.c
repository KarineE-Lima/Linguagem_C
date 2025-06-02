#include <stdio.h>
/* Dado um país A, com 5.000.000 de habitantes e uma taxa de natalidade de 3% ao ano, e 
um país B com 7.000.000 de habitantes e uma taxa de natalidade de 2% ao ano, escreva 
um programa, que imprima o tempo necessário para que a população do país A ultrapasse 
a população do país B.  */
int main(){
	
	int paisA, paisB;
	float nat_paisA, nat_paisB;
	int anos = 0;
	
	printf("Insira a população e a taxa de natalidade do pais A: ");
	scanf("%d %f", &paisA, &nat_paisA);
	printf("Insira a população e a taxa de natalidade do pais B: ");
	scanf("%d %f", &paisB, &nat_paisB);
	
	while (paisA <= paisB){
		paisA += paisA * (nat_paisA / 100);
		paisB += paisB * (nat_paisB / 100);
		anos++;
	}
	
	printf("Demorará %i anos para a população do Pais A passar a população do Pais B", anos);
}
