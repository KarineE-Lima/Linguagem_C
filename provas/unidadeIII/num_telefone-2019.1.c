#include <stdio.h>
#define QTD_EX 9
#define MAX 256
#define TAM_EX 4

int main(){
	char expressao[MAX];
	char letras[QTD_EX][TAM_EX] = {"ABC", "DEF", "GHI", "JKL", "MNO", "PQRS", "TUV", "WXYZ"};
	char numero[QTD_EX] = {'2', '3', '4', '5', '6', '7', '8', '9'};
	int icont, jcont, kcont;
	
	
	printf("Insira a expressão: ");
	fgets(expressao, MAX, stdin);
	
	for(icont; expressao[icont] != '\0' && expressao[icont] != '\n'; icont++){
		if(expressao[icont] >= 'A' && expressao[icont] <= 'Z'){
			for(jcont = 0; jcont < QTD_EX; jcont++){
				for(kcont = 0; letras[jcont][kcont] != '\0' && letras[jcont][kcont] != '\n'; kcont++){
					if(expressao[icont] == letras[jcont][kcont])
						expressao[icont] = numero[jcont];
				}
			}
		}
	}
	
	puts(expressao);
	
	return 0;
}
