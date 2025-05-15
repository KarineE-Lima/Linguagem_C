#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float tentativas, complete, jardas, touchdown, intercep, QBRating;
	
	printf("Informe o número de passes tentados: ");
	scanf("%f", &tentativas);
	printf("Informe o número de passes completos: ");
	scanf("%f", &complete);
	printf("Informe o número de jardas passadas: ");
	scanf("%f", &jardas);
	printf("Informe o número de passes para touchdown: ");
	scanf("%f", &touchdown);
	printf("Informe o número de passes interceptados: ");
	scanf("%f", &intercep);
	
	complete /= tentativas;
	complete = (complete - 0.3) / 0.2;
	complete = (complete > 2.375)? 2.375 : complete;
	complete = (complete < 0)? 0 : complete;
	
	jardas /= tentativas;
	jardas = (jardas - 3) / 4;
	jardas = (jardas > 2.375)? 2.375 : jardas;
	jardas = (jardas < 0)? 0 : jardas;
	
	touchdown /= tentativas;
	touchdown /= 0.05;
	touchdown = (touchdown > 2.375)? 2.375 : touchdown;
	touchdown = (touchdown < 0)? 0 : touchdown;
	
	intercep /= tentativas;
	intercep = (intercep - 0.095)/0.04;
	intercep = (intercep > 2.375)? 2.375 : intercep;
	intercep = (intercep < 0)? 0 : intercep;
	
	QBRating = ((complete + jardas + touchdown + intercep) * 100) / 6;	 
	
	printf("O QB Rating do quarterback é %f", QBRating);
	return 0;
}
