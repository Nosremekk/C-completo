#include <stdio.h>
#include <stdlib.h>

//Escreva uma função int* encontrar_maior(int *vetor, int tamanho) que retorne 
//um ponteiro para o maior elemento de um vetor.

int* encontrar_maior(int *vetor, int tamanho)
{
    int *maior = vetor;
    for (int i = 0; i < tamanho; i++)
    {
        if (*maior < *(vetor+i)) maior = (vetor + i);  
    }

    return maior;
}


int main(void)
{
    int vetor[] = {4, 9, 2, 7, 5};

    int *maior = encontrar_maior(vetor, 5);

    printf("%p\n", maior);
    printf("%d\n", *maior);

    return 0;
}