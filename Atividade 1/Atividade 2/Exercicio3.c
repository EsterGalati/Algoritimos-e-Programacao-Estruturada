/*Faça um programa que leia um número inteiro e verifique se esse número é par ou ímpar.*/
#include <stdlib.h>
#include <stdio.h>
int main(void)
{
    int num;
    printf("digite um numero inteiro: ");
    scanf("%d", &num);
    if (num % 2 == 0) // operador %
    {
        printf("Par");
    }
    else
        printf("Ímpar");
}