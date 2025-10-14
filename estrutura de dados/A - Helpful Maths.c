#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM 100
 
int main()
{
    char str_soma[TAM], temp[TAM];
    const char separador[] = "+";
    char * pedaco;
    int i = 0, j, tam;
    int array[TAM];
    
    fgets(str_soma, TAM, stdin);
    pedaco = strtok(str_soma, separador);
    while(pedaco != NULL){
        array[i] = atoi(pedaco);
        pedaco = strtok(NULL, separador);
        i++;
    }
    tam = i;
    
    for(j = 1; j < tam; j = j +1){
        int key = array[j];
        i = j-1;
        while(i >= 0 && array[i]>key){
            array[i+1] = array[i];
            i = i -1;
        }
        array[i+1] = key;
    }
    strcpy(str_soma, "");
    for(i = 0; i < tam; i++){
        sprintf(temp, "%d", array[i]);
        strcat(str_soma, temp);
        if(i < tam - 1)
            strcat(str_soma, separador);
    }
    
    puts(str_soma);
 
    return 0;
}