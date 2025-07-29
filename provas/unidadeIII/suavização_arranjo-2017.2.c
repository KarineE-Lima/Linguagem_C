#include <stdio.h>
#define TAM_ARR 10

int main(){
	float arranjo[TAM_ARR], suavizado[TAM_ARR];
	int icont, anterior, prox;
	float media;
	
	for(icont = 0; icont < TAM_ARR; icont++){
		printf("Insira o valor da posição %d: ", icont);
		scanf("%f", &arranjo[icont]);
	}
	
	for(icont = 0; icont < TAM_ARR; icont++){
		anterior = (icont - 1 < 0)? TAM_ARR - 1 : icont - 1;
		prox = (icont + 1 >= TAM_ARR)? 0 : icont + 1;
		media = (arranjo[anterior] +  arranjo[icont] + arranjo[prox]);
		media /= 3;
		suavizado[icont] = media;
	}
	for(icont = 0; icont < TAM_ARR; icont++)
		printf("%.2f ", suavizado[icont]);
		
	return 0;
}
