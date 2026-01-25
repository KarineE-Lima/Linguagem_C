#include <stdio.h>
#include <stdlib.h>

typedef struct No
{
    int dado;
    struct No *esq;
    struct No *dir;
    int altura;
}No;

No* criarNo(int dado)
{
    No* novo = (No*)malloc(sizeof(No));
    novo->dado = dado;
    novo->esq = NULL;
    novo->dir = NULL;
    novo->altura = 0;
    return novo;
}
int maior(int a, int b)
{
    return a > b ? a : b;
}
int altura(No* n)
{
    if(n == NULL)
        return -1;
    return n->altura;
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
    n->altura = maior(altura(n->esq), altura(n->dir)) + 1;
    esq->altura = maior(altura(esq->esq), altura(esq->dir)) + 1;
    return esq;
}
No *rotacionaEsq(No *n)
{
    No *dir = n->dir; // armazenando o pivo
    No *filhoesq = dir->esq; // armazenando o possível filho direito do pivo

    //rotação
    dir->esq = n; // a raiz agora vai ser filho do pivo
    n->dir = filhoesq;
    n->altura = maior(altura(n->esq), altura(n->dir)) + 1;
    dir->altura = maior(altura(dir->esq), altura(dir->dir)) + 1;
    return dir;
}
No *rotacionaEsqDir(No* n)
{
    n->esq = rotacionaEsq(n->esq);
    return rotacionaDir(n);
}
No *rotacionaDirEsq(No* n)
{
    n->dir = rotacionaDir(n->dir);
    return rotacionaEsq(n);
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

        no = rotacionaEsqDir(no);
    }
    if (fb < -1 && ObterFB(no->dir) > 0)
    {
        no = rotacionaDirEsq(no);
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

    raiz->altura = maior(altura(raiz->esq), altura(raiz->dir)) + 1;
    raiz = balancear(raiz);
    return raiz;
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

void imprimir(No *raiz, int nivel)
{
    int i;
    if(raiz != NULL)
    {
        imprimir(raiz->dir, nivel + 1);
        printf("\n\n");
        for(i = 0; i < nivel; i++)
            printf("\t");
        printf("| %d | ", raiz->dado);
        imprimir(raiz->esq, nivel + 1);
    }
}

int main()
{
    No *raiz = NULL;
    raiz = Inserir(raiz, 50);
    raiz = Inserir(raiz, 30);
    raiz = Inserir(raiz, 20);
    raiz = Inserir(raiz, 40);
    raiz = Inserir(raiz, 70);
    raiz = Inserir(raiz, 60);
    raiz = Inserir(raiz, 80);
    //ExibirIn_Ordem(raiz);
    raiz = Inserir(raiz, 10);
    raiz = Inserir(raiz, 9);
    //Remover(raiz, 80);
    //printf("\n\n");
    //ExibirIn_Ordem(raiz);
    //printf("\n %d", ObterFB(raiz->esq));
    imprimir(raiz, 1);


}