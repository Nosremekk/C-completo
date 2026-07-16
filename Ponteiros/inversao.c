#include <stdio.h>
#include <string.h>

void inverter_string(char *string)
{
    char *inicio = string;
    char *fim = string + strlen(string) - 1;

    char temp;

    while (inicio < fim)
    {
        temp = *inicio;
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

    // Remove o '\n' deixado pelo fgets
    texto[strcspn(texto, "\n")] = '\0';

    inverter_string(texto);

    printf("String invertida: %s\n", texto);

    return 0;
}