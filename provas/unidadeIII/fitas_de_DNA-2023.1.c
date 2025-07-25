#include <stdio.h>
#define TAM_STR 9
#define QTD 5

int main(){
	char fitas[QTD][TAM_STR]; /*= {"CGGATTTT",
								"CGGAAATT",
								"GCGTTAAT", 
								"GCGTTTTT", 
								"ACGGACAT"};*/
	char consenso[TAM_STR];
	int icont, jcont, kcont, repet, mais_rep;
	char mais_oc, atual;
	
	for(icont = 0; icont < QTD; icont++){
		printf("Insira as enzimas da %dª fita: ", icont + 1);
		fgets(fitas[icont], TAM_STR, stdin);
		fflush(stdin);
	}
	
	for(jcont = 0; jcont < TAM_STR ; jcont++){
		for(icont = 0, mais_rep = 0; icont < QTD; icont++){
			atual = fitas[icont][jcont];
			for(kcont = icont, repet = 0; kcont < QTD; kcont++){
				if(atual == fitas[kcont][jcont]){
					repet++;
				}
			}
			if(repet > mais_rep){
				mais_rep = repet;
				mais_oc = atual;
			} else if(repet == mais_rep){
				mais_oc = '?';
			}
		}
		consenso[jcont] = mais_oc;
	}
	
	puts(consenso);
	
	return 0;
}
