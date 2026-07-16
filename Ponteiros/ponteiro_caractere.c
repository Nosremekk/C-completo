/*
Crie um programa que receba uma string do usuário, crie um ponteiro para o início dela e, usando um laço, 
percorra a string até encontrar o caractere nulo ('\0'), contando quantos caracteres a string 
possui (sem usar strlen).
*/

#include <stdio.h>
#include <stdlib.h>


int main(void)
{
    char entrada[100];

    fgets(entrada,100,stdin);

    //Criando o ponteiro 
    char *ponteiro = entrada;
    int contador = 0;

    while (*ponteiro != '\0')
    {
        contador++;
        ponteiro++;
    }

    contador--; //Tirando o enter

    printf("O tamanho da string é %d \n", contador);


    return 0;
}