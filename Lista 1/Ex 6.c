#include <stdio.h>

int main()
{
    int i, soma = 0;

    for (i = 1; i < 1000; i++)
    {
        if (i % 3 == 0 || i % 5 == 0)
        {
            if (i % 3 == 0)
            {
                printf("Divisivel por 3\n");
            }
            if (i % 5 == 0)
            {
                printf("Divisivel por 5\n");
            }

            printf("%i\n", i);
            soma += i;
        }
    }

    printf("A soma dos numeros abaixo de 1.000 que sao multiplos de 3 ou 5: %d\n", soma);

    return 0;
}