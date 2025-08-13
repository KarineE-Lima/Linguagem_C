#include <stdio.h>
#define MAX 30
#define QTD 5

struct tipo_livro{
	char titulo[MAX];
	char autor[MAX/2];
	int ano;
};

typedef struct tipo_livro tipo_livro;

int main(){
	
	tipo_livro livros[QTD];
	int icont, jcont, kcont, similaridade;
	char titulo_buscado[MAX];
	
	for(icont = 0; icont < QTD; icont++){
		printf("\n--------DADOS DO %dº LIVRO----------\n", icont+1);
		printf("Insira o título do livro: ");
		fgets(livros[icont].titulo, MAX, stdin);
		fflush(stdin);
		printf("Insira o autor do livro: ");
		fgets(livros[icont].autor, MAX/2, stdin);
		fflush(stdin);
		printf("Insira o ano do livro: ");
		scanf("%d", &livros[icont].ano);
		fflush(stdin);
	}
	system("cls");
	
	printf("Qual livro deseja buscar? ");
	fgets(titulo_buscado, MAX, stdin);
	fflush(stdin);
	
	for(icont = 0; icont < QTD; icont++){
		for(jcont = 0; livros[icont].titulo[jcont] != '\0' && livros[icont].titulo[jcont] != '\n'; jcont++){
			for(kcont = 0, similaridade = 0; titulo_buscado[kcont] != '\0' && titulo_buscado[kcont] != '\n'; kcont++){
				if(titulo_buscado[kcont] == livros[icont].titulo[jcont + kcont])
					similaridade++;
			}
			if(similaridade == kcont){
				printf("-----------------------------------------");
				printf("\nTitulo: %s \nAutor: %s \nAno: %d\n", livros[icont].titulo, livros[icont].autor, livros[icont].ano);
				break;
			}
		}
	}
	
	return 0;
}
