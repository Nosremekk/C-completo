#include <stdio.h>

int main(void)
{
    char resposta;

    while (1)
    {
        printf("\n===== MENU =====\n");
        printf("[A] Adicionar item\n");
        printf("[L] Listar itens\n");
        printf("[S] Sair\n");
        printf("Escolha uma opcao: ");

        resposta = getchar();

        // Descarta o Enter
        getchar();

        switch (resposta)
        {
            case 'A':
            case 'a':
                printf("Voce escolheu Adicionar.\n");
                break;

            case 'L':
            case 'l':
                printf("Voce escolheu Listar.\n");
                break;

            case 'S':
            case 's':
                printf("Encerrando o programa...\n");
                return 0;

            default:
                printf("Opcao invalida!\n");
        }
    }

    return 0;
}