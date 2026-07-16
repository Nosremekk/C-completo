//Declare uma matriz de inteiros com 10 posições, preencha-a com valores lidos pelo teclado e, em seguida, exiba:
//A soma de todos os elementos.
//A média aritmética.
//O maior e o menor valor encontrados.

#include <stdio.h>

int main(void)
{
    int matriz[10];
    int soma = 0;
    int maior, menor;

    // Leitura e inicialização dos limites com o primeiro elemento
    for(int i = 0; i < 10; i++)
    {
        printf("Digite o %do valor: ", i + 1);
        scanf("%d", &matriz[i]);
        
        if (i == 0) {
            maior = matriz[i];
            menor = matriz[i];
        }
    }

    for(int i = 0; i < 10; i++)     
    {         
        soma += matriz[i];    

        if (matriz[i] > maior) maior = matriz[i];
        if (matriz[i] < menor) menor = matriz[i];
    }
    
    
    float media = (float)soma / 10.0;

    printf("Resultados:\n");
    printf("Soma: %d\n", soma);
    printf("Media: %.2f\n", media);
    printf("Maior: %d\n", maior);
    printf("Menor: %d\n", menor);

    return 0;
}