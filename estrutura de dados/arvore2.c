#include <stdio.h>
#include <stdlib.h>

typedef struct No
{
    int dado;
    struct No *esq;
    struct No *dir;
}No;

No* criarNo(int dado)
{
    No* novo = (No*)malloc(sizeof(No));
    novo->dado = dado;
    novo->esq = NULL;
    novo->dir = NULL;
    return novo;
}
int altura(No* n)
{
    if(n == NULL)
        return 0;
    int altEsq = altura(n->esq);
    int altDir = altura(n->dir);
    return 1 + ((altEsq > altDir) ? altEsq : altDir);
}
int ObterFB(No* n)
{
    if(n == NULL) return 0;
    return altura(n->esq) - altura(n->dir);
}
No *rotacionaDir(No *n)
{
    No *esq = n->esq; // armazenando o pivo
    No *filhodir = esq->dir; // armazenando o possível filho direito do pivo

    //rotação
    esq->dir = n; // a raiz agora vai ser filho do pivo
    n->esq = filhodir;
    return esq;
}
No *rotacionaEsq(No *n)
{
    No *dir = n->dir; // armazenando o pivo
    No *filhoesq = dir->esq; // armazenando o possível filho direito do pivo

    //rotação
    dir->esq = n; // a raiz agora vai ser filho do pivo
    n->dir = filhoesq;
    return dir;
}
No *balancear(No *no)
{
    int fb = ObterFB(no);
    // esquerda - esquerda
    if (fb > 1 && ObterFB(no->esq) >= 0)
        return rotacionaDir(no);
    // direita - direita
    if (fb < -1 && ObterFB(no->dir) <= 0)
        return rotacionaEsq(no);
    // esquerda - direita
    if (fb > 1 && ObterFB(no->esq) < 0)
    {
        no->esq = rotacionaEsq(no->esq);
        return rotacionaDir(no);
    }
    if (fb < -1 && ObterFB(no->dir) > 0)
    {
        no->dir = rotacionaDir(no->dir);
        return rotacionaEsq(no);
    }
    return no;
}
No *Inserir(No *raiz, int dado)
{
    if(raiz == NULL)
        return criarNo(dado);
    if (dado < raiz->dado)
        raiz->esq = Inserir(raiz->esq, dado);
    else if (dado > raiz->dado)
        raiz->dir = Inserir(raiz->dir, dado);
    return balancear(raiz);
}

void ExibirIn_Ordem(No *raiz)
{
    if(raiz != NULL)
    {
        ExibirIn_Ordem(raiz->esq);
        printf("| %d | ", raiz->dado);
        ExibirIn_Ordem(raiz->dir);
    }
}
No *Remover(No *raiz, int dado)
{
    if(raiz == NULL) return raiz;
    if(dado < raiz->dado)
        raiz->esq = Remover(raiz->esq, dado);
    else if (dado > raiz->dado)
        raiz->dir = Remover(raiz->dir, dado);
    else
    {
        if(raiz->esq == NULL && raiz->dir == NULL)
        {
            free(raiz);
            raiz = NULL;
        } else if(raiz->esq == NULL)
        {
            No *temp = raiz;
            raiz = raiz->dir;
            free(temp);
        } else if (raiz->dir == NULL)
        {
            No *temp = raiz;
            raiz = raiz->esq;
            free(temp);
        } else
        {
            No *pai = raiz;
            No *filho = raiz->esq;
            while(filho->dir != NULL)
            {
                pai = filho;
                filho = filho->dir;
            }
            raiz->dado = filho->dado;
            filho->dado = dado;
            raiz->esq = Remover(raiz->esq, dado);

        }
    }
    return raiz;
}

int main()
{
    No *raiz = NULL;
    raiz = Inserir(raiz, 50);
    Inserir(raiz, 30);
    Inserir(raiz, 20);
    Inserir(raiz, 40);
    Inserir(raiz, 70);
    Inserir(raiz, 60);
    Inserir(raiz, 80);
    ExibirIn_Ordem(raiz);
    Inserir(raiz, 10);
    Inserir(raiz, 9);
    //Remover(raiz, 80);
    printf("\n\n");
    ExibirIn_Ordem(raiz);
    printf("\n %d", altura(raiz));


}