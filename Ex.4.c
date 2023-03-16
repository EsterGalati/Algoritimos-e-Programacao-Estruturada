/* Escreva um algoritmo para ler as dimensões de um retângulo (base e altura), calcular e escrever a área do retângulo.*/
#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main(){

    float area, base, altura;

        printf("Digite uma base:");
        scanf("%f", &base);

        printf("Digite a altura:");
        scanf("%f", &altura);

        area = (base*altura);
        printf("A area do retangulo e:%2.f", area);



    return 0;
}
