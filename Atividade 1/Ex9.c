/*Faça um algoritmo que leia três notas de um aluno, calcule e escreva a média final deste aluno. Considerar que a média 
é ponderada e que o peso das notas é 2, 3 e 5.Fórmula para o cálculo da média final é:*/

#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main(){
    float primeiranota,segundanota,terceiranota,media;

    printf("Digite sua primeira nota:");
    scanf("%f",&primeiranota);
    printf("Digite segunda nota:");
    scanf("%f",&segundanota);
    printf("Digite sua terceira nota:");
    scanf("%f",&terceiranota);

    media= (primeiranota*2)+(segundanota*3)+(terceiranota*5)/3;
    
    printf("A media e:%.2f",media);


    return 0;
}
