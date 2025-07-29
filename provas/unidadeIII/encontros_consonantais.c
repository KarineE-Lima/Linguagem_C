#include <stdio.h>
#define TAM_STR 256

int main(){
	char string[TAM_STR];
	int consoantes, icont, jcont, encontros;
	
	printf("Insira a string: ");
	fgets(string, TAM_STR, stdin);
	
	for(icont = 0, encontros = 0; string[icont]; icont++){
		consoantes = 0;
		while(string[icont] != 'a' && string[icont] != 'e' && string[icont] != 'i' && string[icont] != 'o' && string[icont] != 'u' &&
		string[icont] != 'A' && string[icont] != 'E' && string[icont] != 'I' && string[icont] != 'O' && string[icont] != 'U'){
			if((string[icont] >= 'A' && string[icont] >= 'Z') || (string[icont] >= 'a' && string[icont] >= 'z')){
				consoantes++;
				icont++;
			}
		}
		if(consoantes > 1)
			encontros++;
		
	}
	printf("Encontros consonantais: %d", encontros);
	return 0;
}
