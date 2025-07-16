#include <stdio.h>
#define TAM_STR 256

int main(){
	char string1[TAM_STR];
	char string2[TAM_STR];
	int indice, igualdades;
	
	printf("Insira a primeira string: ");
	fgets(string1, TAM_STR, stdin);
	
	printf("Insira a segunda string: ");
	fgets(string2, TAM_STR, stdin);
	
	for(indice = 0, igualdades = 0; string1[indice] && string2[indice]; indice++){
		if(string1[indice] >= 'A' && string1[indice] <= 'Z')
			string1[indice] = string1[indice] - 'A' + 'a';
		if(string2[indice] >= 'A' && string2[indice] <= 'Z')
			string2[indice] = string2[indice] - 'A' + 'a';
		if(string1[indice] == string2[indice])
			igualdades++;
	}
	if(igualdades == indice)
		printf("As duas strings são iguais.");
	else
		printf("As duas strings são diferentes.");
	
	return 0;
}
