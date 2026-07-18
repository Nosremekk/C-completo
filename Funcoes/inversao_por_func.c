#include <stdio.h>
#include <string.h>

void inverter_string(char *string)
{
    char *inicio = string;
    char *fim = string;

    // Encontra o final da string
    while (*fim != '\0')
    {
        fim++;
    }

    // Volta para o último caractere
    fim--;

    // Inverte a string
    while (inicio < fim)
    {
        char temp = *inicio;
        *inicio = *fim;
        *fim = temp;

        inicio++;
        fim--;
    }
}

int main(void)
{
    char texto[100];

    printf("Digite uma string: ");
    fgets(texto, 100, stdin);

        int i = 0;
    while (texto[i] != '\0')
    {
        if (texto[i] == '\n')
        {
            texto[i] = '\0';
            break;
        }
        i++;
    }

    inverter_string(texto);

    printf("String invertida: %s\n", texto);

    return 0;
}