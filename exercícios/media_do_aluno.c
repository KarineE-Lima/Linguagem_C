#include <stdio.h>
#define TAM 150
#define QTD 5

struct tipo_aluno{
	int matricula;
	char nome[TAM];
	float prova1;
	float prova2;
	float prova3;
	float media;
};

typedef struct tipo_aluno tipo_aluno;

int main(){
	
	tipo_aluno alunos[QTD];
	int icont, prova1_maior, media_maior, media_menor;
	float maior, menor;
	
	
	for(icont = 0; icont < QTD; icont++){
		printf("\n--------Aluno %d----------------\n", icont+1);
		printf("Insira a matricula do aluno: ");
		scanf("%d", &alunos[icont].matricula);
		fflush(stdin);
		printf("Insira o nome do aluno: ");
		fgets(alunos[icont].nome, TAM, stdin);
		fflush(stdin);
		printf("Insira a nota da primeira prova: ");
		scanf("%f", &alunos[icont].prova1);
		fflush(stdin);
		printf("Insira a nota da segunda prova: ");
		scanf("%f", &alunos[icont].prova2);
		fflush(stdin);
		printf("Insira a nota da terceira prova: ");
		scanf("%f", &alunos[icont].prova3);
		fflush(stdin);
	}
	system("cls");
	for(icont = 0; icont < QTD; icont++)
		alunos[icont].media = (alunos[icont].prova1 + alunos[icont].prova2 + alunos[icont].prova3) / 3;
	
	// maior primeira prova
	maior = alunos[0].prova1;
	prova1_maior = 0;
	for(icont = 1; icont < QTD; icont++){
		if(maior < alunos[icont].prova1){
			maior = alunos[icont].prova1;
			prova1_maior = icont;
		}
	}
	
	// maior e menor media
	maior = alunos[0].media;
	menor = alunos[0].media;
	media_maior = media_menor = 0;
	for(icont = 1; icont < QTD; icont++){
		if(maior < alunos[icont].media){
			maior = alunos[icont].media;
			media_maior = icont;
		}
		if(menor > alunos[icont].media){
			menor = alunos[icont].media;
			media_menor = icont;
		}
	}
	for(icont = 0; icont < QTD; icont++){
		if(alunos[icont].media >= 6.0)
			printf("O aluno %s foi aprovado com a media %.1f.\n", alunos[icont].nome, alunos[icont].media);
		else
			printf("O aluno %s foi reprovado com a media %.1f.\n", alunos[icont].nome, alunos[icont].media);
	}
	printf("O aluno com a maior nota da primeira prova é %s com %.1f pontos\n", alunos[prova1_maior].nome, alunos[prova1_maior].prova1);
	printf("O aluno com a maior media é %s com %.1f pontos\n", alunos[media_maior].nome, alunos[media_maior].media);
	printf("O aluno com a menor media é %s com %.1f pontos\n", alunos[media_menor].nome, alunos[media_menor].media);
	
	
	
	return 0;
}
