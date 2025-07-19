#include <stdio.h>
#define TAM_MAX 256

int main(){
	char str_alfa[TAM_MAX];
	int valor[TAM_MAX];
	int valor_hash, tam_bloco, icont, jcont, bloco, tam_str;
	
	printf("Insira a entrada: ");
	fgets(str_alfa, TAM_MAX, stdin);
	printf("Insira a chave: ");
	scanf("%d", &tam_bloco);
	
	for(icont = 0; str_alfa[icont] != '\0' && str_alfa[icont] != '\n'; icont++){
		if(str_alfa[icont] >= 'A' && str_alfa[icont] <= 'Z')
			valor[icont] = str_alfa[icont] - 'A';
		if(str_alfa[icont] >= 'a' && str_alfa[icont] <= 'z')
			valor[icont] = str_alfa[icont] - 'a';
	}
	tam_str = icont;
	
	for(bloco = 0, valor_hash = 0, jcont = 0; jcont < tam_str; bloco++){
		for(icont = 0; icont < tam_bloco && jcont < tam_str; icont++)
			valor_hash += valor[jcont++] + icont + bloco;
	}
	valor_hash %= 100;
	printf("Valor de hash: %d", valor_hash);
	
	return 0;
}
