#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <limits.h>
#define TAM 9

void imprime_array(int *A, int qtd);
void merge(int *A, int p, int q, int r);
void merge_sort(int *A, int p, int r);

int main()
{
	int vetor[TAM] = {19, 8, 4, 18, 17, 14, 2, 20, 2};
	imprime_array(vetor, TAM);
	merge_sort(vetor, 0, (TAM - 1));
	printf("\n");
	imprime_array(vetor, TAM);
    return 0;
}

void merge(int *A, int p, int q, int r){
    int n1 = q - p + 1;
    int n2 = r - q;
    int i, j, k;
    int *L = malloc((n1 + 1) * sizeof(int));
    int *R = malloc((n2 + 1) * sizeof(int));
    for(i = 0; i < n1; i++)
    	L[i] = A[p + i];
	for(j = 0; j < n2; j++)
		R[j] = A[q + j + 1];
	L[n1] = INT_MAX;
	R[n2] = INT_MAX;
	i = j = 0;
    for(k = p; k <= r; k++){
    	if(L[i] <= R[j]){
    		A[k] = L[i];
    		i++;
		} else {
			A[k] = R[j];
			j++;
		}
	}
}
void merge_sort(int *A, int p, int r){
	if(p < r){
		int q = (p + r) / 2;
		merge_sort(A, p, q);
		merge_sort(A, (q + 1), r);
		merge(A, p, q, r);
	}
}
void imprime_array(int *A, int qtd){
	int i;
    for(i = 0; i < qtd; i++){
        printf("%d ", A[i]);
    }
}

