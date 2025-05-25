#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int num, cent, dez, un;
	printf("Insira um número de 1 a 999: ");
	scanf("%d", &num);
	
	cent = num / 100;
	dez = (num % 100) / 10;
	un = num % 10;
	
	if(cent == 0){
		printf("");
	} else if (cent == 1 && num % 100 == 0){
		printf("Cem");
	} else {
		switch (cent){
		case 1: printf("Cento");
			break;
		case 2: printf("duzentos");
			break;
		case 3: printf("trezentos");
			break;
		case 4: printf("quatrocentos");
			break;
		case 5: printf("quinhentos");
			break;
		case 6: printf("seiscentos");
			break;
		case 7: printf("setecentos");
			break;
		case 8: printf("oitocentos");
			break;
		case 9: printf("novecentos");
			break;
		}
	}
	if (num % 100 != 0 && dez != 0){
		printf(" e ");
	}
	if (dez == 0){
		printf("");
	} else if(dez == 1 && num % 10 != 0){
		switch(un){
			case 1: printf("onze");
				break;
			case 2: printf("doze");
				break;
			case 3: printf("treze");
				break;
			case 4: printf("quatorze");
				break;
			case 5: printf("quinze");
				break;
			case 6: printf("dezesseis");
				break;
			case 7: printf("dezessete");
				break;
			case 8: printf("dezoito");
				break;
			case 9: printf("dezenove");
				break;		
		}
	} else {
		switch(dez){
			case 1: printf("dez");
				break;
			case 2: printf("vinte");
				break;
			case 3: printf("trinta");
				break;
			case 4: printf("quarenta");
				break;
			case 5: printf("cinquenta");
				break;
			case 6: printf("sessenta");
				break;
			case 7: printf("setenta");
				break;
			case 8: printf("oitenta");
				break;
			case 9: printf("noventa");
				break;		
		}
	}
	if(dez != 1 && num % 10 != 0){
		printf(" e ");
	}
	
	if (un == 0 || dez == 1){
			printf("");
	} else {
		switch(un){
			case 1: printf("um");
				break;
			case 2: printf("dois");
				break;
			case 3: printf("três");
				break;
			case 4: printf("quatro");
				break;
			case 5: printf("cinco");
				break;
			case 6: printf("seis");
				break;
			case 7: printf("sete");
				break;
			case 8: printf("oito");
				break;
			case 9: printf("nove");
				break;		
		}
	}
	return 0;
}
