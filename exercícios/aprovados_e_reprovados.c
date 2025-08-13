#include <stdio.h>
#define MAX 256
#define QTD 10

struct tipo_aluno{
	char nome[MAX];
	int matricula;
	float media_f;
};

typedef struct tipo_aluno aluno;

int main(){
	aluno lista[QTD];
	aluno aprovados[QTD];
	aluno reprovados[QTD];
	int icont, jcont, tam_ap, tam_rep;
	
	for(icont = 0; icont < QTD; icont++){
		printf("\n-----------DADOS ALUNO %d----------------\n", icont+1);
		printf("Insira o nome do aluno: ");
		fgets(lista[icont].nome, MAX, stdin);
		fflush(stdin);
		printf("Insira a matrícula do aluno: ");
		scanf("%d", &lista[icont].matricula);
		fflush(stdin);
		printf("Insira a media final do aluno: ");
		scanf("%f", &lista[icont].media_f);
		fflush(stdin);
	}
	for(icont = 0, tam_ap = 0, tam_rep = 0; icont < QTD; icont++){
		if(lista[icont].media_f >= 5.0){
			for(jcont = 0; lista[icont].nome[jcont] != '\0' && lista[icont].nome[jcont] != '\n'; jcont++)
				aprovados[tam_ap].nome[jcont] = lista[icont].nome[jcont];
			aprovados[tam_ap].nome[jcont] = '\0';
			aprovados[tam_ap].matricula = lista[icont].matricula;
			aprovados[tam_ap].media_f = lista[icont].media_f;
			tam_ap++;
		} else {
			for(jcont = 0; lista[icont].nome[jcont] != '\0' && lista[icont].nome[jcont] != '\n'; jcont++)
				reprovados[tam_rep].nome[jcont] = lista[icont].nome[jcont];
			reprovados[tam_rep].nome[jcont] = '\0';
			reprovados[tam_rep].matricula = lista[icont].matricula;
			reprovados[tam_rep].media_f = lista[icont].media_f;
			tam_rep++;
		}
			
	}
	printf("\n-------Lista de aprovados-------\n");
	for(icont = 0; icont < tam_ap; icont++)
		printf("Nome: %s \nMatricula: %d \nMedia final: %.1f\n", aprovados[icont].nome, aprovados[icont].matricula, aprovados[icont].media_f);
	
	printf("\n-------Lista de reprovados-------\n");
	for(icont = 0; icont < tam_rep; icont++)
		printf("Nome: %s \nMatricula: %d \nMedia final: %.1f\n", reprovados[icont].nome, reprovados[icont].matricula, reprovados[icont].media_f);
	
	
	return 0;
} 
