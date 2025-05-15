#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float garrafao, meiaDistancia, longaDistancia;
	
	printf("Insira o percentual de acerto em Arremessos dentro do Garrafao: ");
	scanf("%f", &garrafao);
	printf("Insira o percentual de acerto em Arremessos de Meia Distancia: ");
	scanf("%f", &meiaDistancia);
	printf("Insira o percentual de acerto em Arremessos de Longa Distancia: ");
	scanf("%f", &longaDistancia);
	
	garrafao *= 2;
	meiaDistancia *= 2;
	longaDistancia *= 3;
	
	if(garrafao > meiaDistancia && garrafao > longaDistancia){
		printf("Preferir arremessos dentro do garrafão (%.3f pontos por arremesso).", garrafao);
	} else if (meiaDistancia > garrafao && meiaDistancia > longaDistancia){
		printf("Preferir arremessos de Meia Distância (%.3f pontos por arremesso).", meiaDistancia);
	} else{
		printf("Preferir arremessos de Longa Distância (%.3f pontos por arremesso).", longaDistancia);
	}
	
	return 0;
}
