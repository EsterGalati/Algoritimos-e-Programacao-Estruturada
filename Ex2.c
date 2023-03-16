/*2. Escreva um programa que pergunte qual o raio de um círculo e imprima a sua área.*/
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    float raio, pi = 3.14, area;
    printf("Digite o raio:\n");
    scanf("%f", &raio);

    area = pi * (raio * raio);
    printf("A area da sua circunferencia e: %.2f", area);

    return 0;
}
