#include <stdio.h>
#include <locale.h>
#define QTD_PART 5
#define JAN 3

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int partidas[QTD_PART];
	int janela[JAN];
	int min, max, indice, jcont, pontos;
	
	for(indice = 0; indice < QTD_PART; indice++){
		printf("Insira os gols da %dª partida: ", indice+1);
		scanf("%d", &partidas[indice]);
	}
	pontos = 0;
	for(indice = 0; indice <= QTD_PART - JAN; indice++){
		for(jcont = 0; jcont < JAN; jcont++)
			janela[jcont] = partidas[indice + jcont];
		min = janela[0];
		max = janela[0];
		for(jcont = 1; jcont < JAN; jcont++){
			if(min > janela[jcont])
				min = janela[jcont];
			if(max < janela[jcont])
				max = janela[jcont];
		}
		pontos += min + max;
	}
	printf("A pontuação total é %d", pontos);
	
	return 0;
}
