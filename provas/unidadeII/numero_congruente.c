#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int i, j, m, indice, cont;
	
	printf("Insira os valores de i, j e m respectivamente: ");
	scanf("%d %d %d", &i, &j, &m);
	
	for(indice = m; indice <= i; indice++){
		for(cont = indice; cont <= j; cont++){
			if(((indice % m) == (cont % m)) && (indice != cont))
				printf("i: %d e j: %d\n", indice, cont);
		}
	}
	
	return 0;
}
