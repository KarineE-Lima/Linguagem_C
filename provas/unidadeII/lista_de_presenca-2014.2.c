#include <stdio.h>
#define TAM_LISTA 50

int main()
{
    int lista[TAM_LISTA];
    int indice, qtd_alunos, cont, repetido;
    
    for(indice = 0, qtd_alunos = 0; indice < TAM_LISTA; indice++, qtd_alunos++){
        printf("Insira o número do aluno: ");
        scanf("%d", &lista[indice]);
    }
    for(indice = 0; indice < qtd_alunos; indice++){
        for(cont = indice + 1; cont < qtd_alunos; cont++){
            if(lista[cont] == lista[indice]){
                qtd_alunos--;
                for(repetido = cont; repetido < qtd_alunos; repetido++){
                    if(lista[repetido] == lista[repetido + 1]){
                        lista[repetido] = lista[repetido + 2];
                        qtd_alunos--;
                    } else{
                        lista[repetido] = lista[repetido + 1];
                    }
                }
            }
        }
    } printf("Quantidade de alunos: %d = ", qtd_alunos);
    for(indice = 0; indice < qtd_alunos; indice++){
        printf("%d ", lista[indice]);
    }

    return 0;
}
