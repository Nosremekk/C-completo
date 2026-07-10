#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int tempo;
    float taxa_juros, capital_inicial;

    printf("Digite o capital inicial: \n");
    scanf("%f", &capital_inicial);

    printf("Digite a taxa de juros, em porcentagem: \n");
    scanf("%f", &taxa_juros);

    printf("Digite o tempo, em meses: \n");
    scanf("%d", &tempo);

    // Escolhas
    while (1)
    {
        printf("Escolha uma opção: \n");

        printf("1 - Calcular montante\n");

        printf("2 - Calcular apenas o juros\n");

        int resposta;

        scanf(("%d"), &resposta);

        switch (resposta)
        {
            case 1:
            {   
                float montante = capital_inicial * (1 + ((taxa_juros / 100) * tempo));
                printf("Seu montante é: %.2f\n ", montante);

                break;
            }

            case 2:
            {
                float juros = capital_inicial * (taxa_juros/100) * tempo;
                printf("Seus juros são de %.2f\n", juros);

                break;
            }



            default:
            {
                printf("Não é uma opção valida");
                break;
            }

        }

        if (resposta == 1 || resposta == 2)
        {
            break;
        }
        else
        {
            continue;
        }
    }

    return 0;
}

