#include <stdio.h>
#include <locale.h>
#define TAM_STR 256

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	char primString[TAM_STR], segStr[TAM_STR];
	int indice, tam, achou, cont, ocorrencia;
	
	printf("Insira a primeira string: ");
	fgets(primString, TAM_STR, stdin);
	
	printf("Insira a segunda string: ");
	fgets(segStr, TAM_STR, stdin);
	
	for(tam = 0; segStr[tam] != '\0' && segStr[tam] != '\n'; tam++);
	//printf("%d", tam);
	
	for(indice = 0, achou = 0; primString[indice] && achou == 0; indice++){
		for(cont = 0, ocorrencia = 0; cont < tam; cont++){
			if(primString[indice + cont] == segStr[cont])
				ocorrencia++;
		}
		if(ocorrencia == tam){
			printf("A primeira string contém a segunda.\n");
			achou = 1;
		}
	}
	if(achou == 0)
		printf("A primeira string NÃO contém a segunda.\n");
	
	puts(primString);
	puts(segStr);
	return 0;
}
