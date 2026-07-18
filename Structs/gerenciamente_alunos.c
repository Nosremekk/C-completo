#include <stdio.h>
#include <string.h>
#include<stdlib.h>

/*
No main, declare um array de 3 alunos. Solicite ao usuário que preencha os dados de cada um usando scanf. Em seguida, crie uma 
função que receba esse array (ou um ponteiro para ele) e imprima o nome e a nota do aluno que obteve a maior nota.

*/

struct aluno
{
    int nota;
    char nome[50];
    int matricula;
};

void encontrar_maior_nota(struct aluno *alunos,int tamanho)
{
    int maior = 0;

    for (int i = 0; i < tamanho; i++)
    {
        if (alunos[i].nota > alunos[maior].nota)
        {
            maior = i;
        }
    }

    printf("O aluno %s teve a maior nota!, obteve a nota %d \n!", alunos[maior].nome,alunos[maior].nota);
}

int main(void)
{
    struct aluno alunos[3];

    printf("Bem vindo ao sistema de gerenciamento de alunos \n \n");

    for (int i = 0; i < 3; i++)
    {
        printf("Cadastre o nome do %d° aluno:  ", i+1);
        fgets(alunos[i].nome, 50, stdin);
        alunos[i].nome[strcspn(alunos[i].nome, "\n")] = '\0';

        alunos[i].matricula = i + 1000;

        printf("Cadastre a nota do %d° aluno:  ", i+1);

        scanf("%d",&alunos[i].nota);

        getchar();

    }

    

    encontrar_maior_nota(alunos, 3);

    return 0;
}