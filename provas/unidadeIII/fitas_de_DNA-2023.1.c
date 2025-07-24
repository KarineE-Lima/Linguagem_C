#include <stdio.h>
#define TAM_STR 8
#define QTD 5

int main(){
	char fitas[QTD][TAM_STR];
	char consenso[TAM_STR];
	int icont, jcont, kcont, repet, mais_rep;
	char mais_oc, atual;
	
	for(icont = 0; icont < QTD; icont++){
		printf("Insira as enzimas da %dª fita: ", icont + 1);
		fgets(fitas[icont], TAM_STR, stdin);
		fflush(stdin);
	}
	icont = 0;
	for(jcont = 0; fitas[icont][jcont] != '\0' && fitas[0][jcont] != '\n'; jcont++){
		for(icont = 0, mais_rep = 0; icont < QTD; icont++){
			atual = fitas[icont][jcont];
			for(kcont = 0, repet = 0; kcont < QTD; kcont++){
				if(atual == fitas[kcont][jcont]){
					repet++;
				}
			}
			if(repet == mais_rep){
				mais_oc = '?';
			} else if(repet > mais_rep){
				repet = mais_rep;
				mais_oc = atual;
			}
		}
		consenso[jcont] = mais_oc;
	}
	consenso[jcont++] = '\0';
	puts(consenso);
	
	return 0;
}
