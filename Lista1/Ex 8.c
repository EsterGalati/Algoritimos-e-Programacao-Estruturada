/*Elabore um programa que faça a leitura de vários números inteiros até que se digite
um número negativo. O programa tem de retornar o maior e o menor número lido*/
#include <stdio.h>

#include <stdlib.h>

int main()

{

    int num = 0, mai = -1, men = 1000, n;

    do

    {

        printf("\nDigite um numero:\n");

        scanf("%d", &n);

        if (n > mai)

        {

            mai = n;
        }

        if (n < men)

        {

            men = n;
        }

        num = n;

    } while (num >= 0);

    printf("\n\n-=-=-=-[ Maior numero digitado ]-=-=-=-\n%d\n\n-=-=-=-[ Menor numero digitado ]-=-=-=-\n%d", mai, men);

    return 0;
}