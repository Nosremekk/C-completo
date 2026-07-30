#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM 5

typedef struct
{
    int codigo;
    char nome[31];
    float preco;

} Produto;


//comparação
int compararPreco(const void *a, const void *b)
{
    Produto *p1 = (Produto *)a;
    Produto *p2 = (Produto *)b;

    if (p1->preco < p2->preco)
        return 1; 

    if (p1->preco > p2->preco)
        return -1;

    return 0;
}


int main(void)
{
    Produto produtos[TAM];



    for (int i = 0; i < TAM; i++)
    {
        printf("\nProduto %d\n", i + 1);

        printf("Codigo: ");
        scanf("%d", &produtos[i].codigo);

        getchar(); //limpa o enter 

        printf("Nome: ");
        fgets(produtos[i].nome, 31, stdin);

        produtos[i].nome[strcspn(produtos[i].nome, "\n")] = '\0';


        printf("Preco: ");
        scanf("%f", &produtos[i].preco);
    }



    qsort(produtos, TAM, sizeof(Produto), compararPreco);


    //Exibição
    printf("\n\nProdutos ordenados por preco:\n");

    for (int i = 0; i < TAM; i++)
    {
        printf("\nNome: %s", produtos[i].nome);
        printf("\nCodigo: %d", produtos[i].codigo);
        printf("\nPreco: R$ %.2f\n", produtos[i].preco);
    }


    return 0;
}