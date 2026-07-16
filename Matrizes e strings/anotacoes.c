#include <stdio.h>
#include <stdlib.h>
//Adicionando strings
#include <string.h>


int main(void)
{
    //Declarando uma array
    /*
    int var[10];
    double balance[100];

    for (int i = 0; i < 10; i++)
    {
        printf("%d", var[i]);
    }
    */

    char s1[80], s2[80];

    fgets(s1, sizeof(s1), stdin);
    s1[strcspn(s1, "\n")] = '\0';

    fgets(s2, sizeof(s2), stdin);
    s2[strcspn(s2, "\n")] = '\0';

    printf("comprimentos: %zu %zu\n", strlen(s1), strlen(s2));

    if(!strcmp(s1, s2)) printf("As strings são iguais\n");

    strcat(s1, s2);
    printf("%s\n", s1);

    strcpy(s1, "Isso é um teste.\n");
    printf("%s", s1);

    if(strchr("alo", 'o')) printf("o está em alo\n");
    if(strstr("ola aqui", "ola")) printf("ola encontrado\n");

    return 0;
}
