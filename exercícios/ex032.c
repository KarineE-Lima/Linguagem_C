#include <stdio.h>
#include <locale.h>

// determinar se o caractere recebido � n�mero, vogal, consoante ou s�mbolo
int main(){
	setlocale(LC_ALL, "Portuguese");
	
	char caractere;
	printf("Digite um caractere: ");
	scanf("%c", &caractere);
	
	if (caractere >= 48 && caractere <= 57){ 
		printf("O caractere digitado � um n�mero.");
	} else if(caractere >= 65 && caractere <= 90 || caractere >= 97 && caractere <= 122){ 
		if(caractere == 'a' || caractere == 'e' || caractere == 'i' || caractere == 'o' || caractere == 'u' || caractere == 'A' || caractere == 'E' || caractere == 'I' || caractere == 'O' || caractere == 'U'){
			printf("O caractere digitado � uma vogal.");
		} else {
			printf("O caractere digitado � uma consoante.");
		}
	} else {
		printf("O caractere digitado � um s�mbolo.");
	}
	
	return 0;
}
