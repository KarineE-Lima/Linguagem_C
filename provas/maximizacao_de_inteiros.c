#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int NumA, NumB, centA, centB, dezA, dezB, unA, unB;
	
	printf("Digite dois números entre 000 e 999: ");
	scanf("%d %d", &NumA, &NumB);
	
	centA = NumA /100;
	dezA = (NumA % 100)/ 10;
	unA = NumA % 10;
	
	centB = NumB /100;
	dezB = (NumB % 100)/ 10;
	unB = NumB % 10;
	
	if (centA > centB){
		centA *= 100;
		centB = 0;
	} else if (centA == centB){
		centA *= 100;
		centB *= 100;
	}else {
		centA = 0;
		centB *= 100;
	}
	if (dezA > dezB){
		dezA *= 10;
		dezB = 0;
	} else if (dezA == dezB){
		dezA *= 10;
		dezB *= 10;
	} else {
		dezA = 0;
		dezB *= 10;
	}
	if (unA > unB){
		unA *= 1;
		unB = 0;
	} else if (unA == unB){
		unA *= 1;
		unB *= 1;
	} else {
		unA = 0;
		unB *= 1;
	}
	if (dezA == 0 && unA == 0){
		centA /= 100;
	} else if (dezA == 0 || unA ==0){
		centA /= 10;
		dezA /= 10;
	} 
	if (dezB == 0 && unB == 0){
		centB /= 100;
	} else if (dezB == 0 || unB ==0){
		centB /= 10;
		dezB /= 10;
	} 
	NumA = centA + dezA + unA;
	NumB = centB + dezB + unB;
	NumA = (NumA == 0)? -1 : NumA;
	NumB = (NumB == 0)? -1 : NumB;
	
	printf("A dupla %d e %d.", NumA, NumB);
	
	return 0;
}
