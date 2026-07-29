#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int qtd;

    printf("Digite quantos alunos: ");
    scanf("%d", &qtd);

    // Validação básica para evitar alocação inválida
    if (qtd <= 0) {
        printf("Quantidade invalida!\n");
        return 1;
    }

    float* notas = (float*) malloc(sizeof(float) * qtd);
    if (notas == NULL)
    {
        printf("Erro: Memoria insuficiente!\n");
        return 1;
    }

    float total = 0;
    for (int i = 0; i < qtd; i++) 
    {
        printf("Nota do aluno %d: ", i + 1);
        scanf("%f", &notas[i]);
        total += notas[i];
    }

    float media = total / (float)qtd;

    printf("A nota media foi: %.2f\n", media);
    
    free(notas);
    notas = NULL;
    
    return 0;
}