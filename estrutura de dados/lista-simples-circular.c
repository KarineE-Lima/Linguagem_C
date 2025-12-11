#include <stdio.h>
#include <stdlib.h>

typedef struct no
{
    int valor;
    struct no *prox;
}No;
typedef struct lista
{
    No *cabeca;
}Lista;

No * criarNo(int valor)
{
    No *novo;
    novo = (No*)malloc(sizeof(No));
    novo->valor = valor;
    novo->prox = NULL;
}
Lista * CriarLista()
{
    Lista *lista = (Lista*)malloc(sizeof(Lista));
    lista->cabeca = NULL;
}
void Inserir(Lista *l, No *n)
{
    if (l->cabeca == NULL){
        l->cabeca = n;
        l->cabeca->prox = l->cabeca;
    }else{
        No *topo = l->cabeca->prox;
        No *inicio = l->cabeca;
        n->prox = inicio;
        while (topo->prox != inicio)
        {
            topo = topo->prox;
        }
        topo->prox = n;
    }
}
void Excluir(Lista *l, int elem)
{
    No *remove = l->cabeca;
    No *inicio = l->cabeca;
    No *aux;
    while (remove->prox != inicio && remove->valor != elem)
    {
        aux = remove;
        remove = remove->prox;
    }
    if (remove == l->cabeca)
    {
        l->cabeca = l->cabeca->prox;
    } else
    {
        aux->prox = remove->prox;
    }

}
void ImprimirLista(Lista *l)
{
    No *x = l->cabeca->prox;
    No *inicio = l->cabeca;
    printf("%d ->", inicio->valor);
    while (x != inicio)
    {
        printf(" %d ->", x->valor);
        x = x ->prox;

    }
    printf(" %d \n", inicio->valor);
}
int main()
{
    Lista *lista = CriarLista();
    Inserir(lista, criarNo(17));
    Inserir(lista, criarNo(20));
    Inserir(lista, criarNo(22));
    Inserir(lista, criarNo(23));
    Inserir(lista, criarNo(17));
    ImprimirLista(lista);
    //Excluir(lista, 23);

    return 0;
}
