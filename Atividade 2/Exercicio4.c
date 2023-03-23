/*Faça um programa que leia o salário de um trabalhador e o valor da     prestação de um empréstimo. 
Se a prestação, for maior que 20% do salário, imprima: “Empréstimo não concedido.”, caso contrário, imprima: 
“Empréstimo concedido.”*/


#include <stdio.h>

int main(void)
{
    float salario;
    float emprestimo;
    scanf("%f %f", &salario, &emprestimo);
    printf("emprestimo%s concedido", emprestimo / salario <= 1.2 ? "" : " nao");
}