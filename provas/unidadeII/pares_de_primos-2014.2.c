#include <stdio.h>

int main()
{
    int num_primo = 1, prox, cont, pares;
    int divisor, divisoes;
    printf("Insira a quantidade de pares primos: ");
    scanf("%d", &pares);
    cont = 0;
    while(cont < pares){
        for(divisor = 1, divisoes = 0; divisor <= num_primo; divisor++)
            divisoes += (num_primo % divisor == 0)? 1 : 0;
        if(divisoes == 2){
            prox = num_primo + 2;
            for(divisor = 1, divisoes = 0; divisor <= prox; divisor++)
                divisoes += (prox % divisor == 0)? 1 : 0;
            if(divisoes == 2){
                printf("[%d %d]", num_primo, prox);
                cont++;
            }
        }
        num_primo++;
    }

    return 0;
}
