#include <stdio.h>
#include <locale.h>
#define TAM_STR 256

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	char palavra[TAM_STR];
	int icont, ordenada;
	
	printf("Insira a palavra: ");
	fgets(palavra, TAM_STR, stdin);
	
	for(icont = 0; palavra[icont] != '\0' && palavra[icont] != '\n'; icont++){
		if(palavra[icont] >= 'A' && palavra[icont] <= 'Z')
			palavra[icont] = palavra[icont] - 'A' + 'a';
	}
	for(icont = 1, ordenada = 1; palavra[icont] != '\0' && palavra[icont] != '\n' && ordenada > 0; icont++){
		if(palavra[icont - 1] > palavra[icont]){
			printf("A palavra inserida não é ordenada\n");
			ordenada = 0;
		}	
	}
	if(ordenada == 1)
		printf("A palavra inserida é Ordenada\n");
	puts(palavra);
	
	return 0;
}
