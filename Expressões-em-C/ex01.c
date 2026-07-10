#include <stdio.h>
#include <stdlib.h>

// Verificador de numeros primos
void main(void)
{
    int primeira_entrada = 0;
    scanf("%d", &primeira_entrada);

    if (primeira_entrada <= 1)
    {
        printf("O numero não é primo");
    }

    for (int i = 2; i < primeira_entrada; i++)
    {
        if (primeira_entrada % i == 0)
        {
            printf("O numero não é primo");
            return;
        }
    }
    printf("O numero é primo");
}