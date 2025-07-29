#include <stdio.h>
#define L 9
#define C 15

int main(){
	char parede[L][C] = {".......o......", 
						 ".###...####.#.", 
						 "..............", 
						 "..######......", 
						 "..............", 
						 ".#.####....##.", 
						 "..............", 
						 ".....####.....", 
						 ".............."};
	int icont, jcont, trocas;
	
	/*for(icont = 0; icont < L; icont++){
		printf("Insira padrão da linha: ");
		fgets(parede[icont], C, stdin);
	}*/
	trocas = 1;
	while(trocas > 0){
		trocas = 0;
		for(icont = 0; icont < L; icont++){
			for(jcont = 0; jcont < C; jcont++){
				if(parede[icont][jcont] == '.'){
					if((parede[icont - 1][jcont] == 'o') || (parede[icont][jcont-1] == 'o' && parede[icont + 1][jcont - 1] == '#') 
					|| (parede[icont][jcont + 1] == 'o' && parede[icont + 1][jcont + 1] == '#')){
						parede[icont][jcont] = 'o';
						trocas++;
					}
				}
			}
		}
	}
	
	for(icont = 0; icont < L; icont++){
		for(jcont = 0; jcont < C; jcont++)
			printf("%c", parede[icont][jcont]);
		printf("\n");
	}
	return 0;
}
