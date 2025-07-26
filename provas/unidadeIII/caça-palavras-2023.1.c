#include <stdio.h>
#define LINHAS 7
#define COLUNAS 18
#define TAM_STR (LINHAS > COLUNAS)? LINHAS+1 : COLUNAS+1

int main(){
	char grade[LINHAS][COLUNAS]; 
	char palavra[TAM_STR];
	int icont, jcont, kcont, igualdade, pontuacao, achou;
	
	for(icont = 0; icont < LINHAS; icont++){
		printf("Insira a linha %d do caça-palavras: ", icont);
		fgets(grade[icont], COLUNAS, stdin);
		fflush(stdin);
	}
	for(icont = 0; icont < LINHAS; icont++)
		puts(grade[icont]);
	
	
	printf("\nAgora insira a palavra que você achou: ");
	fgets(palavra, TAM_STR, stdin);
	
	for(icont = 0, achou = 0, pontuacao = -5; icont < LINHAS && achou == 0; icont++){
		for(jcont = 0; jcont < COLUNAS  && achou == 0; jcont++){
			for(kcont = 0, igualdade = 0; palavra[kcont] != '\0' && palavra[kcont] != '\n'; kcont++){
				if(palavra[kcont] == grade[icont][jcont+kcont])
					igualdade++;
			}
			if(igualdade == kcont){
				pontuacao = igualdade;
				achou = 1;
			}
			for(kcont = 0, igualdade = 0; palavra[kcont] != '\0' && palavra[kcont] != '\n'; kcont++){
				if(palavra[kcont] == grade[icont+kcont][jcont])
					igualdade++;
			}
			if(igualdade == kcont){
				pontuacao = igualdade;
				achou = 1;
			}
		}
	}
	printf("Pontuação: %d", pontuacao);
}
