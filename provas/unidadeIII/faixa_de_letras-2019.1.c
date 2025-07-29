#include <stdio.h>
#define TAM_STR 256
#define ALF 26

int main(){
	char string[TAM_STR];
	char faixa[TAM_STR];
	int letras[ALF];
	int icont, jcont;
	
	printf("Insira a string: ");
	fgets(string, TAM_STR, stdin);
	
	for(icont = 0; icont < ALF; icont++)
		letras[icont] = 0;
	
	for(icont = 0; string[icont] != '\0' && string[icont] != '\n'; icont++){
		if(string[icont] >= 'a' && string[jcont] <= 'z'){
			for(jcont = 0; jcont < ALF; jcont++){
				if(string[icont] == jcont + 'a')
					letras[jcont] = 1;
			}
		}
	}
	
	for(icont = 0, jcont = 0; icont < ALF; icont++){
		if(letras[icont] != 0){
			faixa[jcont++] = icont + 'a';
			faixa[jcont++] = ':';
		}
		while(letras[icont] != 0){
			icont++;
		}
		if(letras[icont-1] != 0){
			faixa[jcont++] = (icont - 1) + 'a';
			faixa[jcont++] = ' ';
		}
	}
	faixa[jcont++] = '\0';
	puts(faixa);
	
	return 0;
	
}

