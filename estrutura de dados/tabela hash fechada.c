#include <stdio.h>
#include <stdlib.h>
#define TAM 10

typedef struct No
{
    int valor;
    int chave;
    struct No* prox;
}No;
typedef struct TabelaHash
{
    No *itens[TAM];
}TabelaHash;

int funcaoHash(int chave)
{
    return chave % TAM;
}

void Inserir(TabelaHash* hash, int chave, int valor)
{
    int i = funcaoHash(chave);
    No* novo = (No*)malloc(sizeof(No));
    novo->chave = chave;
    novo->valor = valor;
    novo->prox = hash->itens[i];
    hash->itens[i] = novo;
}

int buscar(TabelaHash* hash, int chave)
{
    int i = funcaoHash(chave);
    No *aux = hash->itens[i];
    while (aux != NULL)
    {
        if (aux->chave == chave)
            return aux->valor;
        aux = aux->prox;
    }
    return -1;
}
int main()
{
    TabelaHash hash;
    for (int i = 0; i < TAM; i++)
    {
        hash.itens[i] = NULL;
    }
    Inserir(&hash, 10, 100);
    Inserir(&hash, 20, 200);
    Inserir(&hash, 15, 30);
    printf("Busca Chave 20: %d\n", buscar(&hash, 20));
    printf("Busca Chave 15: %d\n", buscar(&hash, 15));
    return 0;
}