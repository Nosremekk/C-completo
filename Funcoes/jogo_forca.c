#include <stdio.h>
#include <string.h>


/*
Requisito: Crie uma função chamada verificar_letra que receba:

    A palavra secreta (string).

    O estado atual da palavra (como uma string de sublinhados: "___").

    A letra que o jogador chutou.

Funcionalidade: A função deve percorrer a palavra secreta, atualizar a string de sublinhados caso a letra esteja presente e retornar 1 se acertou ou 0 se errou.

*/

int verificar_letra(char *palavra_secreta,char *estado_atual,char chute)
{
    int acertou = 0;
    for (int i = 0; palavra_secreta[i] != '\0'; i++)
    {
        if (palavra_secreta[i] == chute)
        {
            estado_atual[i] = chute;
            acertou = 1;
        }
    }

    return acertou;
}


int main(void)
{
    //Definindo a palavra secreta
    char palavra_secreta[100] = "abobora";

    //Definindo o estado atual
    char estado_atual[100] = "__________";

    //Quantidade exata de ______
    for (int i = 0; i < 100; i++)
    {
        if (palavra_secreta[i] != '\0')
        {
            estado_atual[i] = '_';
        }
        else
        {
            break;
        }
    }

    estado_atual[strlen(palavra_secreta)] = '\0';

    //printf("%s \n %s \n",palavra_secreta,estado_atual);

    printf("Bem vindo ao jogo da Forca. \n ");
    printf("Chute um caractere e tente adivinhar a palavra secreta! \n \n");

    while (1) //Loop de jogo
    {
        char chute;

        
        printf("O estado atual da palavra é: %s\n",estado_atual);
        printf("De um chute:");
        scanf(" %c", &chute);

        if (verificar_letra(palavra_secreta, estado_atual, chute))
        {
            printf("Acertou!\n");
        }   
        else
        {
            printf("Errou!\n");
        }

    }
    

    return 0;
}