#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Crie um programa que leia 8 números, armazene-os em uma matriz e, 
//depois, exiba esses mesmos números na ordem inversa (do último para o primeiro).

int main(void) 
{
    int num[8];
    int tamanho = sizeof(num) / sizeof(num[0]);

    printf("Digite 8 numeros:\n");

   
    for (int i = 0; i < tamanho; i++) 
    {
        scanf("%d", &num[i]);
    }

    printf("\nNumeros na ordem inversa:\n");

    
    for (int i = tamanho - 1; i >= 0; i--) 
    {
        printf("%d ", num[i]);
    }
    
    printf("\n");
    return 0;
}
