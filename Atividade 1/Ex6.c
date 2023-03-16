/*Escreva um algoritmo para ler o salário mensal atual de um funcionário e o percentual de reajuste.
Calcular e escrever o valor do novo salário.*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    float salario, reajuste, desconto, novosalario;

    printf("Digite o seu salario:");
    scanf("%f", &salario);
    printf("Digite o valor em porcentagem do reajuste:");
    scanf("%f", &reajuste);

    desconto=(reajuste * salario) / 100;
    novosalario=(salario - desconto);

    printf("Seu novo salario e %.2f:",novosalario);


    return 0;
}
