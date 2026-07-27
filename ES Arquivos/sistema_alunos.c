#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
    FILE *sistema = fopen("historico.txt","w");
    char nome[100];
    float notas[3];

    if (sistema == NULL)
    {
        printf("Erro ao criar arquivo");
        return 1;
    }

    printf("Seja bem vindo ao sistema, digite o nome do aluno:");
    fgets(nome,100,stdin);

    fprintf(sistema,"Nome do aluno: %s", nome);

    for (int i = 0; i < 3; i++)
    {
        printf("%d nota de %s:",i + 1,nome);
        scanf("%f",&notas[i]);
    }

    fprintf(sistema,"Notas: %.2f %.2f %.2f\n", notas[0], notas[1], notas[2]);

    fclose(sistema);


    sistema = fopen("historico.txt","r");

    if (sistema == NULL)
    {
        printf("Erro ao abrir arquivo");
        return 1;
    }

    char nome_lido[100];
    float notas_lidas[3];

    fscanf(sistema, "Nome do aluno: %s", nome_lido);
    fscanf(sistema, "Notas: %f %f %f", 
        &notas_lidas[0], 
        &notas_lidas[1], 
        &notas_lidas[2]);

    float media = (notas_lidas[0] + notas_lidas[1] + notas_lidas[2]) / 3;

    printf("\nAluno: %s\n", nome_lido);
    printf("Media: %.2f\n", media);

    fclose(sistema);

    return 0;
}