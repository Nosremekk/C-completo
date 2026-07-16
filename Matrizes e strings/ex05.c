#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Crie uma matriz 3x4 (3 alunos, 4 notas cada). Preencha a matriz e calcule a média de cada aluno individualmente.

int main(void)
{
    //Primeiro, vou nomear cada aluno
    float alunos[3][4];
    char nomes[3][100];

    for (int i = 0; i < 3; i++)
    {
        printf("Digite o nome do aluno:");
        fgets(nomes[i],100,stdin);
        nomes[i][strcspn(nomes[i], "\n")] = '\0';
    }

    for (int i = 0; i < 3; i++)
    {
        printf("Digite as notas do aluno %s: \n", nomes[i]);
        for (int j = 0; j < 4; j++)
        {
            scanf("%f", &alunos[i][j]);
        }
    }

    //Calculando a media
    for (int i = 0; i < 3; i++)
    {
        float soma = 0;
        float media = 0;
        

        for (int j = 0; j < 4; j++)
        {
            soma += alunos[i][j];
        }

        media = soma/4;
        printf("A média do aluno %s foi: %.2f \n",nomes[i], media);
    }

    

    return 0;
}