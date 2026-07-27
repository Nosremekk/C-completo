#include <stdio.h>
#include <string.h>
#include<stdlib.h>

/*
Descrição: Crie um programa em C que defina uma struct chamada Aluno com os seguintes campos:
    nome (vetor de char com tamanho 50)
    idade (int)
    nota (float)

O que o programa deve fazer:
    Pedir para o usuário digitar o nome do aluno, a idade e a nota final.
    Utilizar as funções adequadas de leitura (scanf ou fgets) para capturar esses dados do console.
    Exibir de volta na tela os dados cadastrados de forma limpa, organizada e formatada 
 */

#include <stdio.h>
#include <string.h>

struct Aluno
{
    char nome[50];
    int idade;
    float nota;
};

int main(void)
{
    struct Aluno aluno;

    printf("Digite o nome do aluno: ");
    fgets(aluno.nome, 50, stdin);
    aluno.nome[strcspn(aluno.nome, "\n")] = '\0';

    printf("Digite a idade do aluno: ");
    scanf("%d", &aluno.idade);

    printf("Digite a nota do aluno: ");
    scanf("%f", &aluno.nota);

    printf("\n===== DADOS DO ALUNO =====\n");
    printf("Nome : %s\n", aluno.nome);
    printf("Idade: %d anos\n", aluno.idade);
    printf("Nota : %.1f\n", aluno.nota);

    return 0;
}