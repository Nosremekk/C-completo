#include <stdio.h>
#include <stdlib.h>
#include <string.h>


//Verificador de palindromos

int main(void)
{
    char entrada[100];

    fgets(entrada, 100, stdin);

    int tamanho = strlen(entrada);

    printf("Você escreveu:");

    for(int j = 0; j < tamanho; j ++)
    {
        printf("%c", entrada[j]);
    }

    printf("Ao avesso fica: ");

    for(int j = tamanho-2; j >= 0; j--)
    {
        printf("%c", entrada[j]);
    }

    printf("\n");

  
    int palindromo = 1;
       
    for (int i = 0; i < (tamanho-1)/2; i++)
    {
        if (entrada[i] != entrada[tamanho-i-2])
        {
            palindromo = 0;
            break;
        }
    }


    if (palindromo == 0)
    {
        printf("Não é um palindromo \n");
    }
    else
    {
        printf("É um palindromo \n");
    }



    return 0;
}
