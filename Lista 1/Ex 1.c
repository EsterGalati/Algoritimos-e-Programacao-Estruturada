/*Leia quatro valores inteiros A, B, C e D. A seguir, calcule e mostre a diferença do
produto de A e B pelo produto de C e D segundo a fórmula: DIFERENCA = (A * B - C * D).
Apresente o resultado da seguinte forma:
DIFERENCA = (“valor de A” * “valor de B” - ““valor de C” * ““valor de D”)
DIFERENCA = (“valor de DIFERENCA”) */
#include <stdio.h>

int main()
{

    int a, b, c, d, x;
    scanf("%d %d %d %d", &a, &b, &c, &d);

    x = ((a * b) - (c * d));

    printf("DIFERENCA = %d\n", x);

    return 0;
}