/*Faça um programa que receba dois números e mostre o maior. Se por acaso, os dois números forem
iguais, imprima a mensagem Números iguais.*/
#include <stdio.h>

int main()
{

    int numero1;
    int numero2;

    printf("Digite o Primeiro Numero: ");
    fflush(stdout); // Necessário para Bug do eclipse em Windows
    scanf("%d", &numero1);

    printf("Digite o Segundo Numero: ");
    fflush(stdout); // Necessário para Bug do eclipse em Windows
    scanf("%d", &numero2);

    if (numero1 > numero2)
    {
        printf("\nO numero %d e Maior!!!", numero1);
    }
    else if (numero1 < numero2)
    {
        printf("\nO numero %d e Maior!!!", numero2);
    }
    else
    {
        printf("\nOs Numeros sao Iguais!!!");
    }

    return 0;
}