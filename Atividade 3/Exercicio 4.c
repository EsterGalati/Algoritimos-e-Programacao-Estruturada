#include <stdio.h>
#include <math.h>

/*
Elabore um programa para verificação de situação eleitoral,
onde será informada somente a idade do eleitor, considere as situações abaixo:

Menor que 0 não nasceu
0-15 não vota
16-17 opcional
18-65 obrigatório
exatamente 41- somente ganha prêmio e não vota!!!
> 65 opcional
exatamente 88 - somente ganha prêmio e não vota!!!
*/

int main()
{

    int idade;

    printf("Qual sua idade?\n");
    scanf("%i", &idade);
    fflush(stdin);

    if (idade <= 15)
    {
        if (idade <= 0)
        {
        }
        else
        {
            printf("nao vota\n");
        }
    }
    if (idade >= 16)
    {
        if (idade <= 17)
        {
            printf("Opcional\n");
        }
        else
        {
        }
    }
    if (idade >= 18)
    {
        if (idade <= 64)
        {
            printf("obrigatorio\n");
        }
        if (idade == 41)
        {
            printf("parabens,voce ganhou um premio e nao vota\n");
        }
        if (idade == 65)
        {
            printf("Opcional\n");
        }
        else
        {
            printf("obrigatorio\n");
        }
    }
    if (idade == 88)
    {
        printf("parabens,voce ganhou um premio e nao vota\n");
    }
    if (idade <= 0)
    {
        printf("nao nasceu ainda\n");
    }
    if (idade >= 89)
    {
        printf("Valor invalido\n");
    }
}
