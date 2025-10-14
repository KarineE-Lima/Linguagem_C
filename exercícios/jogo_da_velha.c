#include <stdio.h>
#include <locale.h>
#define DIM 3

int imprimir(char m[DIM][DIM]);
int ganhar_jogo(char m[DIM][DIM], char a);

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	char jogo[DIM][DIM] = {{'1', '2', '3'},
						   {'4', '5', '6'}, 
						   {'7', '8', '9'}};
	int icont, jcont, rodada, achou, parar;
	char jogador, posicao;
	
	for(rodada = 0, parar = 0; rodada < (DIM*DIM) && parar == 0; rodada++){
		imprimir(jogo);
		
		jogador = (rodada % 2 == 0)? 'X' : 'O';
		printf("\nInsira a posição que você quer por o %c: ", jogador);
		scanf("%c", &posicao);
		fflush(stdin);
		achou = 0;
		if(posicao >= '1' && posicao <= '9'){
			for(icont = 0; icont < DIM && achou == 0; icont++){
				for(jcont = 0; jcont < DIM && achou == 0; jcont++){
					if(jogo[icont][jcont] == posicao){
						jogo[icont][jcont] = jogador;
						achou = 1;
					}
				}
			}
		}
		if(achou == 0){
			printf("INSIRA UMA POSIÇÃO VÁLIDA!\n");
			rodada--;
		}
		parar = ganhar_jogo(jogo, jogador);
		if(parar == 1){
			imprimir(jogo);
			printf("O jogador %c venceu!!!", jogador);
		}
			
	}
	if(parar == 0){
		imprimir(jogo);
		printf("Empate!!!");
	}
	
	return 0;
}
int imprimir(char m[DIM][DIM]){
	int i, j;
	for(i = 0; i < DIM; i++){
		printf("|");
		for(j = 0; j < DIM; j++)
			printf(" %c |", m[i][j]);
		printf("\n");
	}
}
int ganhar_jogo(char m[DIM][DIM], char a){
	int ocorrencia, i, j, k;
	for(i= 0, ocorrencia = 0; i < DIM; i++){
		if(m[i][i] == a)
			ocorrencia++;
	}
	if(ocorrencia == 3)
		return 1;
	for(i = 0, ocorrencia = 0; i < DIM; i++){
		for(j = 0; j < DIM; j++){
			if(i + j == DIM - 1){
				if(m[i][j] == a)
					ocorrencia++;
			}
		}
	}
	if(ocorrencia == 3)
		return 1;
	for(i = 0; i < DIM; i++){
		for(j = 0; j < DIM; j++){
			for(k = 0, ocorrencia = 0; k < DIM; k++){
				if(m[i][k] == a)
					ocorrencia++;
			}
			if(ocorrencia == 3)
				return 1;
			for(k = 0, ocorrencia = 0; k < DIM; k++){
				if(m[k][j] == a)
					ocorrencia++;
			}
			if(ocorrencia == 3)
				return 1;
		}
	}
	return 0;
}
