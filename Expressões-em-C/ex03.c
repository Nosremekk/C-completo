#include <stdio.h>
#include <stdlib.h>

//Adivinhação
int main(void)
{
    const int numero_secreto = 42;
    int chute, contador, maximo_tentativa;

    contador = 0;
    
    printf("Vamos jogar um jogo, quantas tentativas você quer?(recomendado: 7)\n");
    scanf("%d", &maximo_tentativa);

    for (int i = 0; i < maximo_tentativa; i++)
    {
        printf("Chute um numero inteiro\n");
        scanf("%d", &chute);

        if (chute == numero_secreto)
        {
            printf("Parabens irmão você acertou rapaz!\n");
            break;
        }
        contador++;

        int chances = maximo_tentativa - contador;

        if (chute < numero_secreto)
        {
            printf("tente novamente, numero muito baixo. Você tem mais %d chances\n", chances);
        }
        else if (chute > numero_secreto)
        {
            printf("tente novamente, numero muito alto. Você tem mais %d chances\n", chances);
        }

        
    }

    if (contador == maximo_tentativa)
    {
        printf("Limite de tentativas atingido!\n");
    }


    return 0;
}