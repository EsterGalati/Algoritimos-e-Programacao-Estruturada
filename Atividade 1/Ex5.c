/* Faça um algoritmo que leia a idade de uma pessoa expressa em anos, meses e dias e escreva a idade dessa pessoa expressa apenas
 dias.Considerar ano com 365 dias e mês com 30 dias.*/
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int anos, meses, dias;

    printf("Escreva sua idade em anos: \n");
    scanf("%d", &anos);
    printf("Escreva sua idade em meses: \n");
    scanf("%d", &meses);
    printf("Escreva sua idade em dias: \n");
    scanf("%d", &dias);

    dias < -(dias + (anos * 365) + (meses * 30));

    printf("Sua idade em dias e:\n", dias);

    return 0;
}
