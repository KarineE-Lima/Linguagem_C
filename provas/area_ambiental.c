#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int Xprimeiro, Yprimeiro, vertical_prim, horizontal_prim, W_prim, Z_prim;
	int Xsegundo, Ysegundo, vertical_seg, horizontal_seg, W_seg, Z_seg;
	int tam_X, tam_Y, X_res, Y_res;
	
	printf("Entre com as coordenadas e dimensões do primeiro terreno: ");
	scanf("%d %d %d %d", &Xprimeiro, &Yprimeiro, &horizontal_prim, &vertical_prim);
	printf("Entre com as coordenadas e dimensões do segundo terreno: ");
	scanf("%d %d %d %d", &Xsegundo, &Ysegundo, &horizontal_seg, &vertical_seg);
	
	W_prim = horizontal_prim - Xprimeiro;
	W_seg = Xsegundo + horizontal_seg;
	tam_X = (W_prim > W_seg) ? W_seg - Xsegundo : W_prim - Xsegundo;
	X_res = Xsegundo;
	
	Z_prim = vertical_prim - Yprimeiro;
	Z_seg = Ysegundo + vertical_seg;
	tam_Y = (Z_prim > Z_seg) ? Z_seg - Ysegundo : Z_prim - Ysegundo;
	Y_res = Ysegundo;
	
	if (W_prim < Xsegundo || Z_prim < Ysegundo){
		printf("Não existe area sugerida.");
	} else {
		printf("X: %d, Y: %d, Dimensão horizontal: %d, Dimensão vertical: %d", X_res, Y_res, tam_X, tam_Y);
	}
	
	return 0;
}
