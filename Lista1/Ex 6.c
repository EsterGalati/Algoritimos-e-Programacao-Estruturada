/**/
#include <stdio.h>

int main()
{
    int i, n;

    printf("Informe um numero inteiro");
    scanf("%i", &i);

    for (i = 0; i <= n; i++)
    {
        if (n % 3 == 0)
        {
            printf("\n %i -numero multiplo de 3", i);
        }
        if (n % 5 == 0)
        {
            printf("\n %i -numero multiplo de 5", i);
        }
        else
        {
            printf("\n %i nao e multiplo de 3 e 5", i);
        }
    }
}
