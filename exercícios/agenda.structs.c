#include <stdio.h>
#define MAX 60
#define QTD 5

struct tipo_data{
	int dia;
	int mes;
	int ano;
};

typedef struct tipo_data tipo_data;

struct tipo_agenda{
	char compromisso[MAX];
	tipo_data data;
};
typedef struct tipo_agenda tipo_agenda;

int main(){
	tipo_agenda agenda[QTD];
	int icont, M = 1, A, achou;
	
	for(icont = 0; icont < QTD; icont++){
		printf("Insira o compromisso: ");
		fgets(agenda[icont].compromisso, MAX, stdin);
		fflush(stdin);
		printf("Insira a data do compromisso: ");
		scanf("%d %d %d", &agenda[icont].data.dia, &agenda[icont].data.mes, &agenda[icont].data.ano);
		fflush(stdin);
	}
	while(M != 0){
		printf("\nInsira o mês e o ano para buscar os compromissos: ");
		scanf("%d %d", &M, &A);
		for(icont = 0, achou = 0; icont < QTD; icont++){
			if(agenda[icont].data.mes == M && agenda[icont].data.ano == A){
				printf("Data: %01d/%01d/%d \nCompromisso: %s.", agenda[icont].data.dia, agenda[icont].data.mes, agenda[icont].data.ano, agenda[icont].compromisso);
				achou++;
			}
		}
		if(achou <= 0 && M != 0)
			printf("Insira uma data válida!\n");
		if(M == 0)
			printf("FINALIZANDO...");
	}
	return 0;
}
