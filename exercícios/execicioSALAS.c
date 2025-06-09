#include <stdio.h>
#define TAM_VET 10

int main(){
	int sala[TAM_VET] = {50, 42, -35, 2, -60, 5, 30, -1, 40, 31};
	int indice, vidas1, vidas2, maiorvida;
	vidas1 = 0;
	vidas2 = 0;
	if(sala[0]> 0){
		for(indice = 0; indice < TAM_VET; indice++){
			if(indice < TAM_VET/2)
				vidas1 += sala[indice];
			if(indice >= TAM_VET/2)
				vidas2 += sala[indice];
		}
		maiorvida = (vidas1 > vidas2)? vidas1 : vidas2;
	} else {
		for(indice = 1; indice < TAM_VET; indice++){
			if(indice < ((TAM_VET/2) + 1))
				vidas1 += sala[indice];
			if(indice >= TAM_VET/2)
				vidas2 += sala[indice];
		}
		maiorvida = (vidas1 > vidas2)? vidas1 : vidas2;
	}
	printf("%d", maiorvida);
	
	return 0;
}


