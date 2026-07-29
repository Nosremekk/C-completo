#include<stdio.h>
#include<stdlib.h>


int main(void)
{
    printf("Digita ai um numero:");
    int qtd;
    scanf("%d",&qtd);

    

    int *array = (int*) calloc(qtd, sizeof(int));

    free(array);
    return 0;
}