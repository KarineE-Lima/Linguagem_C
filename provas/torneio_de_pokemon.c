#include <stdio.h>

int main(){
	int ataque1, ataque2, ataque3;
	
	printf("Insira o valor dos tr�s ataques: ");
	scanf("%d %d %d", &ataque1, &ataque2, &ataque3);
	
	if((ataque1 > 10 || ataque2 > 10 || ataque3 > 10) && (ataque1 % 2 == 0 || ataque2 % 2 == 0 || ataque3 % 2 == 0 ) 
	&& (ataque1 != 0 && ataque2 != 0 && ataque3 != 0)){
		printf("Ratata foi Derrotado! Parab�ns BIU!");
	} else {
		printf("Ratata n�o foi derrotado!");
	}
	return 0;
}
