#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int anghora, angminuto, hora, min;
	printf("Digite o ângulo da hora e do minuto: ");
	scanf("%d %d", &anghora, &angminuto);
	
	hora = anghora / 30;
	min = (angminuto) / 6;
	
	printf("Horas: %02d:%02d .", hora, min);
	
	return 0;
}
