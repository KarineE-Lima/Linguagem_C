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
	} else {
		switch (cent){
		case 1: (num % 100 != 0) ? printf("Cento e ") : printf("Cem");
			break;
		case 2: (num % 100 != 0) ? printf("duzentos e ") : printf("duzentos");
			break;
		case 3:  (num % 100 != 0) ? printf("trezentos e ") : printf("trezentos");
			break;
		case 4: (num % 100 != 0) ? printf("quatrocentos e ") : printf("quatrocentos");
			break;
		case 5: (num % 100 != 0) ? printf("quinhentos e ") : printf("quinhentos");
			break;
		case 6: (num % 100 != 0) ? printf("seiscentos e ") : printf("seiscentos");
			break;
		case 7: (num % 100 != 0) ? printf("setecentos e ") : printf("setecentos");
			break;
		case 8: (num % 100 != 0) ? printf("oitocentos e ") : printf("oitocentos");
			break;
		case 9: (num % 100 != 0) ? printf("novecentos e ") : printf("novecentos");
			break;
		}
	}
	if (dez == 0){
		printf("");
		if (un == 0){
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
			case 2: (num % 10 != 0) ? printf("vinte e ") : printf("vinte ");
				break;
			case 3: (num % 10 != 0) ? printf("trinta e ") : printf("trinta");
				break;
			case 4: (num % 10 != 0) ? printf("quarenta e ") : printf("quarenta ");
				break;
			case 5: (num % 10 != 0) ? printf("cinquenta e ") : printf("cinquenta ");
				break;
			case 6: (num % 10 != 0) ? printf("sessenta e ") : printf("sessenta ");
				break;
			case 7: (num % 10 != 0) ? printf("setenta e ") : printf("setenta ");
				break;
			case 8: (num % 10 != 0) ? printf("oitenta e ") : printf("oitenta ");
				break;
			case 9: (num % 10 != 0) ? printf("noventa e ") : printf("noventa ");
				break;		
		}
		if (un == 0){
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
	}
	return 0;
}
