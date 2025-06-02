#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int qtdTermos, indice, termo1, termo2;
	
	printf("Insira os 2 primeiros termos a quantidade de termos: ");
	scanf("%d %d %d", &termo1, &termo2, &qtdTermos);
	
	if (qtdTermos < 3){
		printf("A sequencia deve ter no mínimo 3 termos, digite novamente...");
	} else{
		printf("A sequecia gerada é: [%d, ", termo1);
		printf("%d", termo2);
		
		int termoN = termo2 + termo1;
		indice = 3;
		while(indice <= qtdTermos){
			indice++;
			printf(", %d", termoN);
			termo1 = termo2;
			termo2 = termoN;
			termoN = (indice % 2 == 0)? termo2 - termo1 : termo2 + termo1;
		}
		printf("...]");
	}	
	return 0;
}
