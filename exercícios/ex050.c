#include <stdio.h>
#include <locale.h>
//sequencia de fibonacci
int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int ultimo_termo, intermediario;
	int anterior = 0;
	int atual = 1;
	printf("Insira o ultimo número da sequencia: ");
	scanf("%d", &ultimo_termo);
	
	while(atual <= ultimo_termo){
		printf("%d ", atual);
		intermediario = atual;
		atual += anterior;
		anterior = intermediario;
	}
	
	return 0;
}
