#include <stdio.h>
#include<stdlib.h>

/*
Tarefa: Crie uma struct Ponto com duas coordenadas: x e y (ambas float).

Desafio: Crie uma função chamada mover_ponto que receba um ponteiro para uma struct Ponto e dois valores (dx, dy). 
A função deve atualizar o ponto original somando dx a x e dy a y.


*/


struct Ponto
{
    float x;
    float y;
};

void mover_ponto(struct Ponto *ponto, float dx, float dy)
{
    ponto->x += dx;
    ponto->y += dy; 
}



int main(void)
{
    struct Ponto coordenadas;
    coordenadas.x = 0;
    coordenadas.y = 0;


    float dx, dy;
    printf("Digite o delta x: ");
    scanf("%f",&dx);

    printf("Digite o delta y: ");
    scanf("%f",&dy);

    mover_ponto(&coordenadas, dx, dy);

    printf("Coordenada x: %f \n", coordenadas.x);
    printf("Coordenada y: %f \n", coordenadas.y);

    return 0;
}


