#include <stdio.h>

void troca(int *a, int *b)
{
    int c = *a;   
    *a = *b;      
    *b = c;      
}

int main(void)
{
    int a = 5;
    int b = 10;

    printf("Antes:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    troca(&a, &b);

    printf("\nDepois:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    return 0;
}