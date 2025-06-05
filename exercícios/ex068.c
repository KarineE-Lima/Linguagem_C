#include <stdio.h>
#include <locale.h>
#define QTD_ITENS 15

int main(){
	setlocale(LC_ALL, "Portuguese");
	int valores[QTD_ITENS], valorBuscado, indice, repeticoes = 0;
	for(indice = 0; indice < QTD_ITENS; indice++){
		printf("Insira o valor da posição %d: ", indice);
		scanf("%d", &valores[indice]);
	}
	printf("Insira um valor para buscar: ");
	scanf("%d", &valorBuscado);
	for(indice = 0; indice < QTD_ITENS; indice++){
		if(valores[indice] == valorBuscado)
			repeticoes++;
	}
	printf("A quantidade de vezes que o valor %d aparece no vetor é de %d vezes.", valorBuscado, repeticoes);
	
	return 0;
}
