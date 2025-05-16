#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int digCartao, horario, digUnit, horaUnit, menor, maior, codigo;
	int mil, cent, dez, un;
	
	printf("Insira os ultimos digitos do cartão e a hora: ");
	scanf("%d %d", &digCartao, &horario);
	
	digUnit = digCartao / 1000;
	horaUnit = horario / 1000;
	maior = (digUnit > horaUnit)? digUnit * 1000 : horaUnit * 1000;
	menor = (digUnit < horaUnit)? digUnit * 1000 : horaUnit * 1000;
	
	digUnit = (digCartao % 1000) / 100;
	horaUnit = (horario % 1000) / 100;
	maior += (digUnit > horaUnit)? digUnit * 100 : horaUnit * 100;
	menor += (digUnit < horaUnit)? digUnit * 100 : horaUnit * 100;
	
	digUnit = (digCartao % 100) / 10;
	horaUnit = (horario % 100) / 10;
	maior += (digUnit > horaUnit)? digUnit * 10 : horaUnit * 10;
	menor += (digUnit < horaUnit)? digUnit * 10 : horaUnit * 10;
	
	digUnit = digCartao % 10;
	horaUnit = horario % 10;
	maior += (digUnit > horaUnit)? digUnit : horaUnit;
	menor += (digUnit < horaUnit)? digUnit : horaUnit;
	
	codigo = maior - menor;
	
	mil = codigo / 1000;
	cent = (codigo % 1000) / 100;
	dez = (codigo % 100) / 10;
	un = codigo % 10;
	
	codigo = un * 1000 + dez * 100 + cent * 10 + mil; 
	
	printf("%d", codigo);
	
	return 0;
}
