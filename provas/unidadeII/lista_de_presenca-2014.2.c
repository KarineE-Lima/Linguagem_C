#include <stdio.h>
#define TAM_LISTA 50

int main()
{
    int lista[TAM_LISTA];
    int nova_lista[TAM_LISTA];
    int indice, qtd_alunos, cont, aluno;
    
    for(indice = 0; indice < TAM_LISTA; indice++){
        printf("Insira o número do aluno: ");
        scanf("%d", &lista[indice]);
    }
    for(indice = 0; indice < TAM_LISTA; indice++){
        aluno = lista[indice];
        for(cont = indice + 1; cont < TAM_LISTA; cont++){
            if(lista[cont] == aluno)
                lista[cont] = 0;
        }
    } 
    for(indice = 0, qtd_alunos = 0; indice < TAM_LISTA; indice++){
        if(lista[indice] != 0){
            nova_lista[qtd_alunos] = lista[indice];
            qtd_alunos++;
        }
    }
    printf("%d alunos\n", qtd_alunos);
    for(indice = 0; indice < qtd_alunos; indice++)
        printf("%d - %d\n", indice + 1, nova_lista[indice]);

    return 0;
}
