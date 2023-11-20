#include <stdio.h>
#include <string.h>
#define TAM 3

    typedef struct 
    {
        char nome[50];
        char matricula[50];
        int turma;
    }Aluno;
    


main()
{
    Aluno a[TAM];
    for(int i = 0; i < TAM; i++){
        printf("Digite o nome do aluno: ");
        fgets(a[i].nome, sizeof(a[i].nome),stdin);
        fflush(stdin);

        printf("Digite a matricula do aluno: ");
        fgets(a[i].matricula, sizeof(a[i].matricula),stdin);
        fflush(stdin);

        printf("Digite a turma do aluno: ");
        scanf("%d",&a[i].turma);
    }
    for(int i = 0; i < TAM; i++){
        printf("Nome :%s", a[i].nome);
        printf("matricula :%s", a[i].matricula);
        printf("turma :%d", a[i].turma);
    }
}
