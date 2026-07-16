#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Leia uma string (frase) do teclado. Percorra a string caractere por caractere e conte quantas vogais ela possui.

int main(void)
{
    char string[100];

    fgets(string, 100, stdin);

   //Catando o tamanho da a rei (array)
   int tamanho = strlen(string);

   int contador = 0;

   for (int i = 0; i < tamanho; i++)
   {
     if (string[i] == 'a' || string[i] == 'A' || string[i] == 'e'|| string[i] == 'E' || string[i] == 'I' || string[i] == 'i' || string[i] == 'o' || string[i] == 'O' || string[i] == 'u' || string[i] == 'U') 
     {
        contador++;
        printf("Achei uma vogal, achei a vogal: %c \n", string[i]);
     }
   }

   printf("Numero total de vogais é: %d \n", contador);

}