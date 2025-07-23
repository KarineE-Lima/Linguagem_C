#include <stdio.h>
#include <locale.h>
#define MAX_STR 256

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	char string[MAX_STR];
	char letra;
	int icont, jcont;
	
	printf("Insira a string: ");
	fgets(string, MAX_STR, stdin);
	
	for(icont = 0; icont < 26; icont++){
		for(jcont = 0; string[jcont] != '\0' && string[jcont] != '\n'; jcont++){
			if((string[jcont] >= 'A' && string[jcont] <= 'Z') || (string[jcont] >= 'a' && string[jcont] <= 'z')){
				if(string[jcont] == icont + 'A' || string[jcont] == icont + 'a'){
					letra = icont + 'A';
					printf("%c [%d] ", letra, jcont);
					break;	
				}
			}
		}
	}	
	
	return 0;
}
