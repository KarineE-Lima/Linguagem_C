#include <stdio.h>
#include <locale.h>
// informar se uma letra é vogal ou consoante
int main(){
	setlocale(LC_ALL, "Portuguese");
	
	char letra;
	
	printf("Digite uma letra: ");
	scanf("%c", &letra);
	
	if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u'){
		printf("A letra informada é uma vogal.");
	} else if (letra == 'A' || letra == 'E' || letra == 'I'|| letra == 'O' || letra == 'U'){
		printf("A letra informada é uma vogal.");
	} else {
		printf("A letra informada é uma consoante.");
	}
	
	//printf("%c", letra);
	
	return 0;
}
