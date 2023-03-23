/*Faça um programa em que o usuário digite o custo de uma determinada mercadoria, em seguida, adiciona-se ao custo o valor do frete e
despesas eventuais (também solicitadas pelo teclado).Para concluir, o programa pergunta qual o valor de venda e indica a percentagem de
lucro da mercadoria*/
#include <stdio.h>


int main()
{

    float mercadoria, despesas, venda, lucro = 0;

    printf("Qual o custo da mercadoria?\n");
    scanf("%f", &mercadoria);

    printf("\nQual o custo do frete e despesas eventuais?\n");
    scanf("%f", &despesas);

    printf("\nQual o valor de venda?\n");
    scanf("%f", &venda);

    mercadoria = mercadoria + despesas;
    lucro = venda - mercadoria;
    lucro = lucro / venda;
    lucro = lucro * 100;

    printf("\nA percentagem de lucro eh %.2f porcentos", lucro);

    return 0;
}