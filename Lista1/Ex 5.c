/**/
#include <stdio.h>

int main()

{

    int n, i;

    printf("Digite um número: ");

    scanf("%d", &n);

    printf("Seus divisores são:");

    for (i = 1; i <= n; i++)
    {

        if (n % i == 0)

            printf(" %d,", i);
    }

    return 0;
}