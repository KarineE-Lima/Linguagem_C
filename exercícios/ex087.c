#include <stdio.h>>
#define TAM_STR 256

int main(){
	char string[TAM_STR];
	int indice;
	
	printf("Insira a string: ");
	fgets(string, TAM_STR, stdin);
	
	for(indice = 0; string[indice]; indice++){
		if(string[indice] >= 'a' && string[indice] <= 'z')
			string[indice] = string[indice] - 'a' + 'A';
	}
	
	puts(string);
	return 0;
}
