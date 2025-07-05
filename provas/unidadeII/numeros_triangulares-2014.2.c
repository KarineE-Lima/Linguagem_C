#include <stdio.h>

int main()
{
    int termos, cont, num_triangular;
    float soma;
    printf("Insira a quantidade de termos: ");
    scanf("%d", &termos);
    for(cont = 1, num_triangular = 0, soma = 0; cont <= termos; cont++){
        num_triangular += cont;
        soma += 1.0 / num_triangular;
    }
    printf("A soma dos reciprocos dos triangulares é %f", soma);
    return 0;
}

