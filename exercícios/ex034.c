#include <stdio.h>
#include <locale.h>

//conceder empréstimo
int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float rmensal, valorempres, valormax, vprest, prestmax, quantprest;
	
	printf("Insira a sua renda mensal: ");
	scanf("%f", &rmensal);
	printf("Insira o valor do empréstimo pretendido: ");
	scanf("%f", &valorempres);
	printf("Insira a quantidade de prestações em que você vai pagar: ");
	scanf("%f", &quantprest);
	
	valormax = rmensal * 10; // o valor max do emprest. é até 10x a renda mensal
	vprest = valorempres / quantprest; // valor das prestações
	prestmax = rmensal * 0.3; // o valor máximo das prestações tem que ser até 30% da renda mensal
	
	if(valorempres <= valormax && vprest <= prestmax){
		printf("O empréstimo foi concedido!");
	} else {
		printf("Infelizmente o empréstimo não foi concedido.");
	}
	
	//printf("%.2f %.2f", valormax, prestmax);
	
	return 0;
}
