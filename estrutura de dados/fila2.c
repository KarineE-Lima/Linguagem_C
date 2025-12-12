#include <stdio.h>
#include <stdlib.h>

typedef struct No
{
    int dado;
    struct No* prox;
}No;

typedef struct Fila
{
    No* inicio;
    No* fim;
}Fila;

int Vazia(Fila *f)
{
    return (f->inicio == NULL);
}
void Enqueue(Fila *f, int dado)
{
    No* novo = (No*)malloc(sizeof(No));
    novo->dado = dado;
    novo->prox = NULL;
    if (Vazia(f))
    {
        f->inicio = novo;
        f->fim = novo;
    } else if (dado >= 60)
    {
        No *aux = f->inicio;
        if (f->inicio->dado < 60)
        {
            novo->prox = f->inicio;
            f->inicio = novo;
        } else
        {
            while (aux->prox != NULL && aux->prox->dado >= 60)
            {
                aux = aux->prox;
            }

            novo->prox = aux->prox;
            aux->prox = novo;
        }
        if (aux == f->fim)
        {
            f->fim = novo;
        }
    } else
    {
        f->fim->prox = novo;
        f->fim = novo;
    }

}

void Dequeue(Fila *f){
    if (Vazia(f))
    {
        printf("Vazia!\n");
    }
    else
    {
        No *aux = f->inicio;
        f->inicio = f->inicio->prox;
        free(aux);
        if (f->inicio == NULL)
            f->fim = NULL;
    }
}
void imprimir(Fila *f)
{
    No *aux = f->inicio;
    while (aux != NULL)
    {
        printf("%d ", aux->dado);
        aux = aux->prox;
    }
    printf("\n");
}
int main()
{
    Fila *filinha_nossa = (Fila*)malloc(sizeof(Fila));
    filinha_nossa->inicio = NULL;
    filinha_nossa->fim = NULL;
    Enqueue(filinha_nossa, 5);
    Enqueue(filinha_nossa, 4);
    Enqueue(filinha_nossa, 60);
    imprimir(filinha_nossa);
    Enqueue(filinha_nossa, 3);
    Enqueue(filinha_nossa, 2);
    Enqueue(filinha_nossa, 72);
    Enqueue(filinha_nossa,61);
    imprimir(filinha_nossa);
    Dequeue(filinha_nossa);
    imprimir(filinha_nossa);
    Dequeue(filinha_nossa);
    Dequeue(filinha_nossa);
    Dequeue(filinha_nossa);

}