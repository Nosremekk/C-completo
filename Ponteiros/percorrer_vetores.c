#include <stdio.h>
#include <stdlib.h>

//Declare um vetor de inteiros com 5 elementos. 
//Em vez de usar o índice (vetor[i]), percorra e imprima os valores do vetor utilizando apenas um ponteiro e 
//aritmética de ponteiros (ptr++).


int main(void)
{
    int vetor[5];
    

    for (int i = 0; i < 5; i++)
    {
        vetor[i] = i+1;
    }

    int *ponteiro = vetor;

    for (int i = 0; i < 5; i++)
    {
        printf("%d",*ponteiro);
        ponteiro++;
    }

    return 0;
}