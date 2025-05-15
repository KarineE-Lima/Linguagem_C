#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	float num1, num2, num3, maior, media;
	
	printf("Insira 3 valores: ");
	scanf("%f %f %f", &num1, &num2, &num3);
	maior = num1;
	if (maior < num2){
		maior = num2;
		media = ((maior * 5.0) + (num1 * 2.5) + (num3 * 2.5)) / (5.0 + 2.5 + 2.5);
		if (maior < num3){
			maior = num3;
			media = ((maior * 5.0) + (num1 * 2.5) + (num2 * 2.5)) / (5.0 + 2.5 + 2.5);
		}
	} else if(maior < num3){
		maior = num3;
		media = ((maior * 5.0) + (num1 * 2.5) + (num2 * 2.5)) / (5.0 + 2.5 + 2.5);
	} else{
		media = ((maior * 5.0) + (num2 * 2.5) + (num3 * 2.5)) / (5.0 + 2.5 + 2.5);
	}
	
	printf("A media ponderada desses valores é %.2f", media);
	
	return 0;
}
