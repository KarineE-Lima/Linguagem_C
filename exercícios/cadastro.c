#include <stdio.h>
#define QTD 2
#define MAX 100

struct tipo_ender{
	char rua[MAX];
	char bairro[MAX];
	char cidade[MAX];
	char estado[MAX];
	int cep;
};
typedef struct tipo_ender tipo_ender;
struct tipo_cadastro{
	char nome[MAX];
	tipo_ender endereco;
	float salario;
	int identidade, cpf, idade;
	char estado_civil[MAX];
	char telefone[MAX];
	char sexo[MAX];
};
typedef struct tipo_cadastro tipo_cadastro;

int main(){
	tipo_cadastro cadastro[QTD];
	int icont, jcont, maior_idade, i_maior, ident_busc, dif;
	char genero[MAX] = "masculino";
	
	for(icont = 0; icont < QTD; icont++){
		printf("------------CADASTRO %d-----------------", icont+1);
		printf("Insira o seu nome: ");
		fgets(cadastro[icont].nome, MAX, stdin);
		fflush(stdin);
		
		printf("Insira o seu endereço (rua, bairro, cidade, estado): ");
		fgets(cadastro[icont].endereco.rua, MAX, stdin);
		fflush(stdin);
		fgets(cadastro[icont].endereco.bairro, MAX, stdin);
		fflush(stdin);
		fgets(cadastro[icont].endereco.cidade, MAX, stdin);
		fflush(stdin);
		fgets(cadastro[icont].endereco.estado, MAX, stdin);
		fflush(stdin);
		printf("Insira o seu cep: ");
		scanf("%d", &cadastro[icont].endereco.cep);
		fflush(stdin);
		
		printf("Insira o seu salario: ");
		scanf("%f", &cadastro[icont].salario);
		fflush(stdin);
		
		printf("Insira a sua identidade: ");
		scanf("%d", &cadastro[icont].identidade);
		fflush(stdin);
		
		printf("Insira o seu cpf: ");
		scanf("%d", &cadastro[icont].cpf);
		fflush(stdin);
		
		printf("Insira o seu estado civil: ");
		fgets(cadastro[icont].estado_civil, MAX, stdin);
		fflush(stdin);
		
		printf("Insira o seu telefone: ");
		fgets(cadastro[icont].telefone, MAX, stdin);
		fflush(stdin);
		
		printf("Insira a sua idade: ");
		scanf("%d", &cadastro[icont].idade);
		fflush(stdin);
		
		printf("Insira o seu sexo: ");
		fgets(cadastro[icont].sexo, MAX, stdin);
		fflush(stdin);
	}
	system("cls");
	maior_idade = cadastro[0].idade;
	for(icont = 1, i_maior = 0; icont < QTD; icont++){
		if(maior_idade < cadastro[icont].idade){
			maior_idade  = cadastro[icont].idade;
			i_maior = icont;
		}
	}
	printf("\nA pessoa com maior idade é %s com %d anos.\n", cadastro[i_maior].nome, maior_idade);
	printf("As pessoas do sexo masculino são:\n");
	for(icont = 0; icont < QTD; icont++){
		for(jcont = 0, dif = 0; genero[jcont] != '\0' && genero[jcont] != '\n' && dif == 0; jcont++){
			if(cadastro[icont].sexo[jcont] >= 'A' && cadastro[icont].sexo[jcont] <= 'Z')
				cadastro[icont].sexo[jcont] = cadastro[icont].sexo[jcont] - 'A' + 'a';
			if(cadastro[icont].sexo[jcont] != genero[jcont])
				dif = 1;
			
		}
		if(dif == 0)
			puts(cadastro[icont].nome);
	}
	
	printf("As pessoas com salário maior que R$ 1000,00 são:\n");
	for(icont = 0; icont < QTD; icont++){
		if(cadastro[icont].salario > 1000)
			printf("%s tem salário de R$%.2f.", cadastro[icont].nome, cadastro[icont].salario);
	}
	printf("Insira a identidade que deseja buscar: ");
	scanf("%d", &ident_busc);
	
	for(icont = 0; icont < QTD; icont++){
		if(cadastro[icont].identidade == ident_busc){
			printf("Nome: %s \nIdentidade: %d \n", cadastro[icont].nome, cadastro[icont].identidade);
			printf("CPF: %d \nIdade: %d \nSexo: %s \nEstado civil: %s \n", cadastro[icont].cpf, cadastro[icont].idade, cadastro[icont].sexo, cadastro[icont].estado_civil);
			printf("Endereço: %s %s %s %s %d", cadastro[icont].endereco.rua, cadastro[icont].endereco.bairro, cadastro[icont].endereco.cidade, cadastro[icont].endereco.estado, cadastro[icont].endereco.cep);
			printf("Telefone: %s \nSalario: R$%.2f \n", cadastro[icont].telefone, cadastro[icont].salario);
		}
	}
	return 0;
}
