/*VETORES*/
#include <stdio.h>
 
#define TAM 5
 
int main(){
 
 
    float estudante[TAM]={10,9,8,7,10}, soma;
 
    //float estudante[TAM]={7}, soma;
 
    int i=0;
 
    // for(i=0;i<TAM;i++){
    //     printf("%do estudante nota %.1f\n",i+1,estudante[i]);
    // }
 
    for(i=TAM-1;i>=0;i--){
        printf("%do estudante nota %.1f\n",i+1,estudante[i]);
    }
 
    //pf i = -1
 
    for(i=0;i<TAM;i++){
        soma = soma + estudante[i];
    }
 
    printf("Media estudantes: %.2f\n", soma/TAM);
 
    return 0;
}