#include <stdio.h>
#include <stdlib.h>
#define MAX 4
typedef struct {
    int *valores;
    int topo;
}Pilha;

void *cria_pilha(Pilha *p) {
    p->topo = -1;
    p->valores = malloc(MAX * sizeof(int));
}

int cheia(Pilha *p) {
    if(p->topo == MAX - 1)
        return 1;
    return 0;
}
int vazia(Pilha *p) {
    if(p->topo == -1)
        return 1;
    return 0;
}
void empilha(Pilha *p, int v) {
    if (!cheia(p)) {
        p->topo++;
        p->valores[p->topo] = v;
    } else {
        printf("Pilha cheia!\n");
    }
}
int desempilha(Pilha *p) {
    if (!vazia(p)) {
        p->topo--;
        return p->valores[p->topo + 1];
    } else {
        printf("Pilha vazia!\n");
    }
}
void imprime(Pilha *p) {
    if (!vazia(p)) {
        printf("[");
        for (int i = 0; i <= p->topo; i++) {
            printf("%d", p->valores[i]);
            if (i < p->topo)
                printf(", ");
        }
        printf("]\n");
    } else {
        printf("Pilha vazia!\n");
    }
}

int main() {
    Pilha *p = malloc(sizeof(Pilha));
    cria_pilha(p);
    imprime(p);
    empilha(p, 10);
    empilha(p, 40);
    empilha(p, 20);
    imprime(p);
    desempilha(p);
    imprime(p);
    empilha(p, 80);
    empilha(p, 60);
    empilha(p, 25);
    imprime(p);

}