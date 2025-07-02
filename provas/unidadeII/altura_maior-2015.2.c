#include <stdio.h>

int main(){
	float alt_chico, alt_ze, cresc_chic, cresc_ze;
	int anos;
	alt_chico = 1.5;
	alt_ze = 1.1;
	cresc_chic = 0.02;
	cresc_ze = 0.03;
	anos = 0;
	while(alt_chico > alt_ze){
		alt_chico += cresc_chic;
		alt_ze += cresc_ze;
		anos++;
	}
	printf("Serão necessarios %d anos para que Zé seja maior que Chico", anos);
	
	return 0;
}
