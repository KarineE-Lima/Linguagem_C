#include <stdio.h>
#include <stdlib.h>
#define MAX 5
typedef struct
{
    int inicio;
    int fim;
    int dados[MAX];
    int contador;
}Fila;

Fila criarFila(Fila *f)
{
    f->inicio = 0;
    f->fim = 0;
    f->contador = 0;
}
int vazia(Fila *f)
{
    return f->contador == 0;
}
int cheia(Fila *f)
{
    return f->contador == MAX;
}
void Enfileirar(Fila *f, int v)
{
    if (cheia(f))
    {
        printf("Fila cheia\n");
    } else
    {
        f->dados[f->fim] = v;
        f->fim = (f->fim + 1) % MAX;
        f->contador++;
    }
}
void Desenfileira(Fila *f)
{
    if (vazia(f))
    {
        printf("Fila vazia\n");
    } else
    {
        f->contador--;
        f->inicio = (f->inicio + 1) % MAX;
    }
}
void imprimir(Fila *f)
{
    if (vazia(f))
    {
        printf("Fila vazia\n");
    } else
    {
        int i = f->inicio;
        int cont = f->contador;

        while (cont)
        {
            printf("%d << ", f->dados[i]);
            i = (i + 1) % MAX;
            cont--;
        }
        printf("\n");
    }
}
int main()
{
    Fila fila;
    criarFila(&fila);
    Enfileirar(&fila, 1);
    Enfileirar(&fila, 2);
    Enfileirar(&fila, 3);
    Enfileirar(&fila, 4);
    Enfileirar(&fila, 5);
    imprimir(&fila);
    Desenfileira(&fila);
    imprimir(&fila);
    Enfileirar(&fila, 10);
    imprimir(&fila);

    return 0;



}



