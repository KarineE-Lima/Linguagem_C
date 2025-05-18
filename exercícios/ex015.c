#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float altura_pessoa, altura_predio, sombra_pessoa, sombra_predio;
	
	printf("Insira a sua altura: ");
	scanf("%f", &altura_pessoa);
	printf("Insira a altura da sua sombra: ");
	scanf("%f", &sombra_pessoa);
	printf("Insira a altura da sombra do prédio: ");
	scanf("%f", &sombra_predio);
	
	altura_predio = (altura_pessoa * sombra_predio) / sombra_pessoa;
	
	printf("A altura real do predio é %.2f m.", altura_predio);
}
