#include<stdio.h>
#include<stdlib.h>

/*
Crie um programa que receba um vetor de 10 números inteiros do usuário. Escreva uma função que receba o ponteiro 
para esse vetor e calcule, simultaneamente, o valor máximo e o valor mínimo contidos nele.

Requisito: A função deve retornar esses dois valores para o main utilizando passagem de parâmetros por 
referência (ponteiros).
*/


void encontrar_min_max(int *vetor, int tamanho, int *min, int *max)
{
    
    *min = vetor[0];
    *max = vetor[0];

    
    for (int i = 1; i < tamanho; i++)
    {
        if (vetor[i] < *min)
        {
            *min = vetor[i];
        }

        if (vetor[i] > *max)
        {
            *max = vetor[i];
        }
    }
}

int main(void)
{
    int vetor[10];
    int min, max;

    
    for (int i = 0; i < 10; i++)
    {
        printf("Digite o %dº numero: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    encontrar_min_max(vetor, 10, &min, &max);

    printf("\nMenor valor: %d\n", min);
    printf("Maior valor: %d\n", max);

    return 0;
}