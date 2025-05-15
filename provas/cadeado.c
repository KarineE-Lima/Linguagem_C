#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int atual, senha, saida, baixo1, baixo2, baixo3, cimaA, cimaB, cimaC;
	int cAtual, dAtual, uAtual, cSenha, dSenha, uSenha;
	int menor1, menor2, menor3;
	printf("Escreva a configuração atual do cadeado e a senha respectivamente: ");
	scanf("%d %d", &atual, &senha);
	
	cAtual = atual / 100;
	dAtual = (atual % 100) / 10;
	uAtual = atual % 10;
	cSenha = senha / 100;
	dSenha = (senha % 100) / 10;
	uSenha = senha % 10;
	
	baixo1 = (cAtual > cSenha)? cAtual - cSenha : cSenha - cAtual;
	baixo2 = (dAtual > dSenha)? dAtual - dSenha : dSenha - dAtual;
	baixo3 = (uAtual > uSenha)? uAtual - uSenha : uSenha - uAtual;
	
	cimaA = 10 - baixo1;
	cimaB = 10 - baixo2;
	cimaC = 10 - baixo3;
	
	menor1 = (cimaA < baixo1)? cimaA : baixo1;
	menor2 = (cimaB < baixo2)? cimaB : baixo2;
	menor3 = (cimaC < baixo3)? cimaC : baixo3;
	
	saida = menor1 + menor2 + menor3;
	printf("Saida: %d. Pois %d movimentos para o 1º, %d movimentos para o 2º e %d para o 3º.", saida, menor1, menor2, menor3);
	
	return 0;
}
