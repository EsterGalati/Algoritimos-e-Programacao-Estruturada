#include <stdio.h>
// 1. Programa que calcule a media de 5 notas de um aluno.

int main()
{
    int media, a1, a2, a3, a4, a5;

    printf("defina as notas do primeiro aluno:");
    scanf("%d", &a1);
    printf("defina as notas do segundo aluno:");
    scanf("%d", &a2);
    printf("defina as notas do terceiro aluno:");
    scanf("%d", &a3);
    printf("defina as notas do quarto aluno:");
    scanf("%d", &a4);
    printf("defina as notas do quinto aluno:");
    scanf("%d", &a5);

    media = (a1 + a2 + a3 + a4 + a5) / 5;

    printf("a media dessas notas eh: %d", media);

    return 0;
}