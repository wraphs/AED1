#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=0;

    struct Aluno
    {
        char nome[30];
        int matricula;
        char curso[30];
    
    }alunos[2];

    while(i<2)
    {
        printf("Nome: ");
        fflush(stdin);
        fgets(alunos[i].nome, 30, stdin);
        printf("Matricula: ");
        scanf("%d", &alunos[i].matricula);
        printf("Curso: ");
        fflush(stdin);
        scanf(" ");
        fgets(alunos[i].curso, 30, stdin);

        i++;
    }

    i=0;

    while(i<2)
    {
        printf("========================================\n");
        printf("Aluno: %s", alunos[i].nome);
        printf("Matricula: %d\n", alunos[i].matricula);
        printf("Curso: %s", alunos[i].curso);
        printf("\n");
        i++;
    }



    return 0;
}