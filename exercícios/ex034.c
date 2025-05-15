#include <stdio.h>
#include <locale.h>

//conceder empr�stimo
int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float rmensal, valorempres, valormax, vprest, prestmax, quantprest;
	
	printf("Insira a sua renda mensal: ");
	scanf("%f", &rmensal);
	printf("Insira o valor do empr�stimo pretendido: ");
	scanf("%f", &valorempres);
	printf("Insira a quantidade de presta��es em que voc� vai pagar: ");
	scanf("%f", &quantprest);
	
	valormax = rmensal * 10; // o valor max do emprest. � at� 10x a renda mensal
	vprest = valorempres / quantprest; // valor das presta��es
	prestmax = rmensal * 0.3; // o valor m�ximo das presta��es tem que ser at� 30% da renda mensal
	
	if(valorempres <= valormax && vprest <= prestmax){
		printf("O empr�stimo foi concedido!");
	} else {
		printf("Infelizmente o empr�stimo n�o foi concedido.");
	}
	
	//printf("%.2f %.2f", valormax, prestmax);
	
	return 0;
}
