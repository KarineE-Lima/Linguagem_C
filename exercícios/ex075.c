#include <stdio.h>
#define TAM 256

int main(){
	char palavra[TAM];
	int indice, vogais;
	
	printf("Insira a string: ");
	fgets(palavra, TAM, stdin);
	
	for(indice = 0, vogais = 0; palavra[indice] != '\0' && palavra[indice] != '\n'; indice++){
		if(palavra[indice] == 'a' || palavra[indice] == 'e' || palavra[indice] == 'i' || palavra[indice] == 'o' || palavra[indice] == 'u')
			vogais++;
		if(palavra[indice] == 'A' || palavra[indice] == 'E' || palavra[indice] == 'I' || palavra[indice] == 'O' || palavra[indice] == 'U')
			vogais++;
	}
	printf("A string inserida tem %d vogais", vogais);
	
	return 0;
}
