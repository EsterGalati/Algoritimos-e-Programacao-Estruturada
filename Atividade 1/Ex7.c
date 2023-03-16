/*O custo de um carro novo ao consumidor é a soma do custo de fábrica com a porcentagem do distribuidor e dos impostos
(aplicados ao custo de fábrica). Supondo que o percentual do distribuidor seja de 28% e os impostos de 45%, escrever um algoritmo
para ler o custo de fábrica de um carro, calcular e escrever o custo final ao consumidor.*/
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    const PercDistribuidor = 29;
    const PercImpostos = 47;
    float CustoFabrica, ValorDistribuidor, ValorImposto, CustoConsumidor;

    printf("\nInforme o valor de custo de fabrica: ");
    scanf("%f", &CustoFabrica);

    ValorDistribuidor = CustoFabrica + (CustoFabrica * PercDistribuidor / 100);
    ValorImposto = CustoFabrica + (CustoFabrica * PercImpostos / 100);
    CustoConsumidor = CustoFabrica + ValorDistribuidor + ValorImposto;

    printf("\nO custo ao consumidor é: %2.f", CustoConsumidor);

    printf("\n\n");

    return 0;
}
