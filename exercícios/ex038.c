#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int ano;
	printf("Insira o ano: ");
	scanf("%d", &ano);
	
	if(ano % 4 == 0 && ano % 400 == 0){
		printf("O ano %d � bissexto.", ano);
	} else if (ano %4 == 0 && ano % 100 == 0 && ano % 400 != 0){
		printf("O ano %d N�O � bissexto.", ano);
	} else if(ano %4 == 0){
		printf("O ano %d � bissexto.", ano);
	} else {
		printf("O ano %d N�O � bissexto.", ano);
	}
	
	return 0;
}
