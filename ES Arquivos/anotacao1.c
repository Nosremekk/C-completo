#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    FILE *fp;
    char eh;

    if (argc != 2)
    {
        printf("Você esqueceu de digitar o nome do arquivo.\n");
        exit(1);
    }

    fp = fopen(argv[1], "w");

    if (fp == NULL)
    {
        printf("O arquivo não pode ser aberto.\n");
        exit(1);
    }

    do
    {
        eh = getchar();
        putc(eh, fp);

    } while (eh != '$');

    fclose(fp);

    return 0;
}