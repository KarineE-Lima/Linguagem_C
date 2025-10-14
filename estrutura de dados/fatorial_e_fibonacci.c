#include <stdio.h>

int fatorial(int num){
	if(num >= 0 && num <= 1) return 1;
	else return num * fatorial(num - 1);
}
int fibonacci(int num){
	if(num > 0 && num <= 2) return 1;
	else return fibonacci(num - 1) + fibonacci(num - 2);
}
int main(){
	int num;
	printf("Insira um número: ");
	scanf("%d", &num);
	printf("O fatorial de %d é %d.\n", num, fatorial(num));
	printf("A sequencia de fibonacci do número %d é %d", num, fibonacci(num));
	return 0;
}
