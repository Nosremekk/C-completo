#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char nome_origem[100];
    
    printf("Digite o nome do arquivo de origem que deseja copiar: ");
    if (scanf("%99s", nome_origem) != 1) 
    {
        printf("Erro ao ler o nome do arquivo.\n");
        return 1;
    }

  
    FILE *origem = fopen(nome_origem, "rb");
    if (origem == NULL) 
    {
        printf("Erro: Nao foi possivel abrir o arquivo '%s' para leitura.\n", nome_origem);
        return 1;
    }


    FILE *destino = fopen("copia_destino.bin", "wb");
    if (destino == NULL) 
    {
        printf("Erro: Nao foi possivel criar o arquivo de destino.\n");
        fclose(origem);
        return 1;
    }


    unsigned char buffer[1024];
    size_t bytes_lidos;
    long long total_bytes_copiados = 0;


    while ((bytes_lidos = fread(buffer, 1, sizeof(buffer), origem)) > 0) 
    {
        fwrite(buffer, 1, bytes_lidos, destino);
        total_bytes_copiados += bytes_lidos;
    }

    fclose(origem);
    fclose(destino);

    printf("\nCópia concluída com sucesso!\n");
    printf("Total de bytes copiados: %lld bytes\n", total_bytes_copiados);
    printf("Arquivo salvo como: 'copia_destino.bin'\n");

    return 0;
}