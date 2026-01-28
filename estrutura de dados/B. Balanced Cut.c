#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int esq, dir, pai, ativo;
} No;

No arvore[500005];

void montarArv(int n) {
    int p;

    for (int i = 1; i <= n; i++) {
        arvore[i].esq = -1;
        arvore[i].dir = -1;
        arvore[i].pai = -1;
        arvore[i].ativo = 1;
    }

    for (int i = 1; i <= n; i++) {
        if (scanf("%d", &p) != 1) break;
        arvore[i].pai = p;
        if (p != -1) {
            if (i < p) arvore[p].esq = i;
            else arvore[p].dir = i;
        }
    }
}
int folha(int i){
    return (arvore[i].esq == -1 && arvore[i].dir == -1);
}

void ReduzirArv(int n, int k, char *string) {
    int removidos = 0;
    int alvo = n - k;

    for (int i = 1; i <= n; i++) string[i] = '1';

    while(removidos < alvo){
        int mudou = 0;
        for (int i = n; i >= 1 && removidos < alvo; i--) {
            if (arvore[i].ativo == 1 && folha(i)) {
                string[i] = '0';
                arvore[i].ativo = -1;
                removidos++;
                mudou = 1;
                int p = arvore[i].pai;
                if (p != -1) {
                    if (arvore[p].esq == i) arvore[p].esq = -1;
                    else if(arvore[p].dir == i) arvore[p].dir = -1;
                }

            }
            if(!mudou) break;
        }
    }
    string[n + 1] = '\0';
}

int main() {
    int qtd_ini, qtd_fim;
    char string[500010];

    scanf("%d %d", &qtd_ini, &qtd_fim);
    montarArv(qtd_ini);
    ReduzirArv(qtd_ini, qtd_fim, string);

    printf("%s\n", string + 1);


    return 0;
}