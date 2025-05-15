#include <stdio.h>
#include <locale.h>

// determinar se o caractere recebido é número, vogal, consoante ou símbolo
int main(){
	setlocale(LC_ALL, "Portuguese");
	
	char caractere;
	printf("Digite um caractere: ");
	scanf("%c", &caractere);
	
	if (caractere >= 48 && caractere <= 57){ 
		printf("O caractere digitado é um número.");
	} else if(caractere >= 65 && caractere <= 90 || caractere >= 97 && caractere <= 122){ 
		if(caractere == 'a' || caractere == 'e' || caractere == 'i' || caractere == 'o' || caractere == 'u' || caractere == 'A' || caractere == 'E' || caractere == 'I' || caractere == 'O' || caractere == 'U'){
			printf("O caractere digitado é uma vogal.");
		} else {
			printf("O caractere digitado é uma consoante.");
		}
	} else {
		printf("O caractere digitado é um símbolo.");
	}
	
	return 0;
}
