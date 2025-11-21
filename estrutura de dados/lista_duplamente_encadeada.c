#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct No
{
    int valor;
    struct No *ant;
    struct No *px;
}No;
typedef struct lista_duplamente_encadeada
{
    No *head;
} Lista;

No * criarNo(int valor)
{
    No *novo = (No *)malloc(sizeof(No));
    novo->valor = valor;
    novo->ant = NULL;
    novo->px = NULL;
    return novo;
}

Lista * criarLista()
{
    Lista *novo = (Lista *)malloc(sizeof(Lista));
    novo->head = NULL;
    return novo;

}

void inserir(Lista *a, No *novo)
{
    if (a->head == NULL)
    {
        a->head = novo;
    } else
    {
        No *topo = a->head;
        while (topo->px != NULL)
        {
            topo = topo->px;
        }
        topo->px = novo;
        novo->ant = topo;
    }
}
void remover(Lista *a, int valor)
{
    No * x = a->head;
    while (x != NULL && x->valor != valor)
    {
        x = x->px;
    }
    if (x == a->head)
    {
        a->head = a->head->px;
        a->head->ant = NULL;
    } else
    {
        x->ant->px = x->px;
        x->px->ant = x->ant;
    }
    free(x);
}
void imprimirLista(Lista *a)
{
    No *x = a->head;
    printf("\nNULL ");
    while (x != NULL)
    {
        printf("<- %d ->", x->valor);
        x = x->px;
    }
    printf(" NULL\n\n");
}
int main()
{
    Lista *lista = criarLista();
    inserir(lista, criarNo(17));
    inserir(lista, criarNo(20));
    inserir(lista, criarNo(22));
    inserir(lista, criarNo(23));
    imprimirLista(lista);
    remover(lista, 22);
    imprimirLista(lista);
    return 0;
}