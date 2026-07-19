#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
Tarefa: Defina uma struct Data (dia, mes, ano) e uma struct Livro que contenha: titulo (string), autor (string) e uma instância
da struct Data chamada data_publicacao.

Desafio: Escreva uma função que receba um Livro por valor e uma função que receba um Livro por referência (ponteiro).
A função que recebe por referência deve permitir que o usuário altere a data de publicação do livro.
*/

struct Data
{
    int dia;
    int mes;
    int ano;
};

struct Livro
{
    char titulo[100];
    char autor[100];
    struct Data data_publicacao;
};

void imprimir_livro(struct Livro livro)
{
    printf("--------------------------\n");
    printf("Titulo: %s \n", livro.titulo);
    printf("Autor: %s \n", livro.autor);
    printf("Ano: %d \n", livro.data_publicacao.ano);
    printf("Mês: %d \n", livro.data_publicacao.mes);
    printf("Dia: %d \n", livro.data_publicacao.dia);
}

void imprimir_todos(struct Livro biblioteca[], int quantidade)
{
    for (int i =0; i < quantidade; i++)
    {
        printf("--------------------------\n");
        printf("Titulo: %s \n", biblioteca[i].titulo);
        printf("Autor: %s \n", biblioteca[i].autor);
        printf("Ano: %d \n", biblioteca[i].data_publicacao.ano);
        printf("Mês: %d \n", biblioteca[i].data_publicacao.mes);
        printf("Dia: %d \n", biblioteca[i].data_publicacao.dia);
    }
}

void alterar_data(struct Livro *livro)
{
    printf("--------------------------\n");
    printf("Novo dia: ");
    scanf("%d", &livro->data_publicacao.dia);

    printf("Novo mes: ");
    scanf("%d", &livro->data_publicacao.mes);

    printf("Novo ano: ");
    scanf("%d", &livro->data_publicacao.ano);
}

void listar_livros(struct Livro biblioteca[], int quantidade)
{
    for (int i = 0; i < quantidade; i++)
    {
        printf("--------------------------\n");
        printf("%d - %s\n", i, biblioteca[i].titulo);
    }
}

void escolhas(int escolha, struct Livro livro[], int quantidade)
{
    switch (escolha)
    {
    case 0:
    {

    
        //Ver todos os dados
        imprimir_todos(livro,quantidade);
        break;
    }
    case 1:
    {
        //Livro em especifico
        listar_livros(livro,quantidade);
        int escolha_livro;
        scanf("%d", &escolha_livro);
        if (escolha_livro >= 0 && escolha_livro < quantidade)
        {
            imprimir_livro(livro[escolha_livro]);
        }   
        else
        {
            printf("Livro inexistente!\n");
        }
    break;
    }

    case 2:
    {
        //Alterar data
       listar_livros(livro,quantidade);
        int escolha_livro;
        scanf("%d", &escolha_livro);
        if (escolha_livro >= 0 && escolha_livro < quantidade)
        {
            alterar_data(&livro[escolha_livro]);
            printf("\nData alterada com sucesso!\n");
            imprimir_livro(livro[escolha_livro]);
        }   
        else
        {
            printf("Livro inexistente!\n");
        }
        

    break;
    }

    case 3:
    {
        break;
    }

    
    
    default:
        printf("Opcao invalida!\n");
        break;
    }
}



int main(void)
{
    struct Livro biblioteca[3];

    strcpy(biblioteca[0].titulo, "Jardim das veredas que se bifurcam");
    strcpy(biblioteca[0].autor, "Jorge Luis Borges");
    biblioteca[0].data_publicacao.dia = 1;
    biblioteca[0].data_publicacao.mes = 1;
    biblioteca[0].data_publicacao.ano = 1941;

    strcpy(biblioteca[1].titulo, "Grande Sertao: Veredas");
    strcpy(biblioteca[1].autor, "Joao Guimaraes Rosa");
    biblioteca[1].data_publicacao.dia = 1;
    biblioteca[1].data_publicacao.mes = 1;
    biblioteca[1].data_publicacao.ano = 1956;

    strcpy(biblioteca[2].titulo, "Critica da Razao Pura");
    strcpy(biblioteca[2].autor, "Immanuel Kant");
    biblioteca[2].data_publicacao.dia = 1;
    biblioteca[2].data_publicacao.mes = 1;
    biblioteca[2].data_publicacao.ano = 1781;


    //printf("%s", biblioteca[0].titulo);

    while(1)
    {
        int escolha;
        printf("Bem vindo a biblioteca \n \n Escolha o que quer fazer:\n 0 - Ver dados de todos os livros \n 1 - Ver dados de um livro em especifico \n 2 - Alterar data de publicação de um livro \n 3 - Sair \n ");
        scanf("%d",&escolha);

    
        escolhas(escolha, biblioteca, 3);

        if (escolha == 3) break;
    }   

    return 0;
}