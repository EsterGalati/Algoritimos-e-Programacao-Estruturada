#include <stdio.h>
#include <string.h>

#define MAX_ESTUDANTES 20
#define MAX_NOME 50

struct disciplina
{
    char nome[MAX_NOME];
    int carga_horaria;
    float notas[4];
};

struct estudante
{
    char nome[MAX_NOME];
    int matricula;
    int idade;
    struct disciplina disciplina;
};

int main()
{
    struct estudante estudantes[MAX_ESTUDANTES];
    int i, num_estudantes, j;
    float media, maior_media = 0;
    char nome_maior_media[MAX_NOME];

    printf("Quantos estudantes deseja cadastrar (maximo 20)? ");
    scanf("%d", &num_estudantes);

        for (i = 0; i < num_estudantes; i++)
    {
        printf("\nEstudante %d:\n", i + 1);
        printf("Nome: ");
        scanf(" %[^\n]s", estudantes[i].nome);
        printf("Matricula: ");
        scanf("%d", &estudantes[i].matricula);
        printf("Idade: ");
        scanf("%d", &estudantes[i].idade);
        printf("Disciplina:\n");
        scanf("%d", &estudantes[i].disciplina);
        fflush(stdin);
        printf("Nome: ");
        scanf(" %[^\n]s", &estudantes[i].disciplina.nome); 
        fflush(stdin);
        printf("Carga Horaria: ");
        scanf("%d", &estudantes[i].disciplina.carga_horaria);
        printf("Notas (n1, n2, n3, n4): ");
        for (j = 0; j < 4; j++)
        {
            scanf("%f", &estudantes[i].disciplina.notas[j]);
        }
    }

    printf("\nLista de estudantes cadastrados:\n");
    for (i = 0; i < num_estudantes; i++)
    {
        media = (estudantes[i].disciplina.notas[0] + estudantes[i].disciplina.notas[1] +
                 estudantes[i].disciplina.notas[2] + estudantes[i].disciplina.notas[3]) /
                4.0;
        printf("%s - Media: %.2f - Idade: %d\n", estudantes[i].nome, media, estudantes[i].idade);
        if (media > maior_media)
        {
            maior_media = media;
            strcpy(nome_maior_media, estudantes[i].nome);
        }
    }

    printf("\nEstudante(s) com a maior media: %s", nome_maior_media);
    for (i = 0; i < num_estudantes; i++)
    {
        media = (estudantes[i].disciplina.notas[0] + estudantes[i].disciplina.notas[1] +
                 estudantes[i].disciplina.notas[2]);
    }
}