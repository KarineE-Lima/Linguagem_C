#include <stdio.h>

int particiona(int *A, int ini, int fim){
    int esq, dir, pivo, aux;
    esq = ini;
    dir = fim;
    pivo = A[ini];
    while(esq < dir){
        while(A[esq] <= pivo)
            esq++;
        while(A[dir] > pivo)
            dir--;
        if(esq < dir){
            aux = A[esq];
            A[esq] = A[dir];
            A[dir] = aux;
        }
    }
    A[ini] = A[dir];
    A[dir] = pivo;
    
    return dir;
}
void quick_sort(int *A, int ini, int fim){
    if(ini <= fim){
        int meio = particiona(A, ini, fim);
        quick_sort(A, ini, meio - 1);
        quick_sort(A, meio + 1, fim);
    }
}
void imprime(int *A, int qtd){
	int i;
    printf("[");
    for(i = 0; i < qtd; i++){
        printf("%d", A[i]);
        if(i < qtd - 1)
            printf(", ");
    }
    printf("]");
}

int main()
{
    int vetor [] = {12, 1, -8, 14, 13, 16};
    imprime(vetor, 6);
    printf("\n");
    quick_sort(vetor, 0, 5);
    imprime(vetor, 6);

    return 0;
}
