#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int kmpercorridos, sensor;
	
	printf("Insira o distancia percorrida pela partícula em km: ");
	scanf("%d", &kmpercorridos);
	
	sensor = ((kmpercorridos - 3) % 8) - 2;
	
	printf("O sensor %d foi antigido.", sensor);
	
	return 0;
}
