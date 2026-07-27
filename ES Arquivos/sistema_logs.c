#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    FILE *sistema = fopen("sistema.log", "a");

    if (sistema == NULL)
    {
        printf("Erro ao abrir o arquivo de log!\n");
        return 1;
    }

    time_t tempo_atual;
    time(&tempo_atual);
    
    
    char *str_tempo = ctime(&tempo_atual);
    str_tempo[strcspn(str_tempo, "\n")] = '\0';

    char mensagem[100];

    printf("Digite a mensagem de log: ");
    fgets(mensagem, sizeof(mensagem), stdin);
    mensagem[strcspn(mensagem, "\n")] = '\0'; 

    fprintf(sistema, "[%s] - %s\n", str_tempo, mensagem);

    fclose(sistema);

    printf("Log registrado com sucesso no arquivo 'sistema.log'!\n");

    return 0;
}