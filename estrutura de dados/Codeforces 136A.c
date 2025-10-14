#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
typedef struct par{
    int i;
    int pi;
} par;

void merge(par *A, int p, int q, int r){
    int n1 = q - p + 1;
    int n2 = r - q;
    int i, j, k;
    par *L = malloc((n1 + 1) * sizeof(par));
    par *R = malloc((n2 + 1) * sizeof(par));
    for(i = 0; i < n1; i++)
    	L[i] = A[p + i];
	for(j = 0; j < n2; j++)
		R[j] = A[q + j + 1];
	L[n1].i = INT_MAX;
	R[n2].i = INT_MAX;
	i = j = 0;
    for(k = p; k <= r; k++){
    	if(L[i].i <= R[j].i){
    		A[k] = L[i];
    		i++;
		} else {
			A[k] = R[j];
			j++;
		}
	}
}
void merge_sort(par *A, int p, int r){
	if(p < r){
		int q = (p + r) / 2;
		merge_sort(A, p, q);
		merge_sort(A, (q + 1), r);
		merge(A, p, q, r);
	}
}

int main()
{
    int qtd_a, j;
    
    scanf("%d", &qtd_a);
    
    par *A = malloc(qtd_a * sizeof(par));
    
    for(j = 0; j < qtd_a; j++)
        scanf("%d ", &A[j].i);
    
    for(j = 0; j < qtd_a; j++)
        A[j].pi = j+1;
    
    
    merge_sort(A, 0, qtd_a-1);
    for(j = 0; j < qtd_a; j++)
        printf("%d ", A[j].pi);

    return 0;
}