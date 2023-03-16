/* Faça um programa que calcule a quantidade necessária de latas de tinta para pintar uma parede. 
O programa pergunta as medidas de largura e altura da parede em metros e escreve quantas latas de tinta 
serão necessárias para pintá-la. Considere que o consumo de tinta é de 300 ml por metro quadrado e a 
quantidade de tinta por lata é de 2 litros.*/

#include<stdio.h>


int main(){
    
    float largura,comprimento,area,rendimento,litros;

    printf("Digite a largura da parede ");
    scanf("%f",&largura);
    printf("Digite o comprimento da parede ");
    scanf("%f",&comprimento);

    area=largura*comprimento;
    rendimento=(area*0.3);
    litros=(rendimento/2)+0.5;

    printf("Serão necessarios %2f litros",litros);
    printf("para pintar uma area de %2f metros²",area);



    return 0;
}
